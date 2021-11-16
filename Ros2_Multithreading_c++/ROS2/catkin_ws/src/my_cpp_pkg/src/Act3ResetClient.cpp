#include <rclcpp/rclcpp.hpp>
#include <thread>
#include <iostream>
#include <example_interfaces/srv/set_bool.hpp>

class RosResetClient : public rclcpp::Node
{
    rclcpp::Client<example_interfaces::srv::SetBool>::SharedPtr clinet_{nullptr};
    std::thread clinetThread_;

public:
    RosResetClient(const std::string &nodeName, const bool &isResetFlag) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized");
        clinetThread_ = std::thread(std::bind(&RosResetClient::clientCb, this, std::ref(isResetFlag)));
    };
    void clientCb(const bool isReset)
    {
        std::cout << "here 1" << std::endl;
        clinet_ = this->create_client<example_interfaces::srv::SetBool>("resetCounterService");
        while (!clinet_->wait_for_service(std::chrono::microseconds(500)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the service to come online");
        }
        auto request = std::make_shared<example_interfaces::srv::SetBool::Request>();
        request->data = isReset;
        auto future = clinet_->async_send_request(request);
        try
        {

            auto responseOut = future.get();
            auto Successflag = responseOut->success;
            auto responseMessage = responseOut->message;
            if (Successflag)
            {
                RCLCPP_INFO(this->get_logger(), "Sucess message : " + responseMessage);
            }
            else
            {
                RCLCPP_ERROR(this->get_logger(), "Not Working: ");
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    ~RosResetClient(){};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<RosResetClient>("RosClientReset", true);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}