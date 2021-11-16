#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/srv/add_two_ints.hpp>

class RosClient : public rclcpp::Node
{
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr clinet_{nullptr};
    std::thread clinetThread_;

public:
    RosClient(const std::string &nodeName, const int val1, const int val2) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initiated");
        clinetThread_ = std::thread(std::bind(&RosClient::clinetCb, this, val1, val2));
    };
    void clinetCb(int a, int b)
    {
        clinet_ = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
        while (!clinet_->wait_for_service(std::chrono::microseconds(100)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to come online");
        }
        auto req = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        req->a = a;
        req->b = b;
        auto future = clinet_->async_send_request(req);
        try
        {
            auto out = future.get()->sum;
            RCLCPP_INFO(this->get_logger(), "The out is : %d", out);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    ~RosClient(){};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<RosClient>("RosClient2", 10, 20);
    rclcpp::spin(node);
    rclcpp::shutdown();
}