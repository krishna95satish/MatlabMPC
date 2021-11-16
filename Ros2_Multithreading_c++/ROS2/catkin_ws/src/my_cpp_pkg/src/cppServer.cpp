#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/srv/add_two_ints.hpp>

class RosServer : public rclcpp::Node
{
private:
    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_{nullptr};

public:
    RosServer(const std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized");
        server_ = this->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", std::bind(&RosServer::serverCb, this, std::placeholders::_1, std::placeholders::_2));
    };
    void serverCb(const example_interfaces::srv::AddTwoInts::Request::SharedPtr req, const example_interfaces::srv::AddTwoInts::Response::SharedPtr res)
    {
        res->sum = req->a + req->b;
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<RosServer>("RosSever");
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}