#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <string>
#include <example_interfaces/msg/string.hpp>

using namespace std::placeholders;

class RosSub : public rclcpp::Node
{
private:
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_{nullptr};
    std::stringstream ss;

public:
    RosSub(const std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(get_logger(), "Node has been initilaized");
        subscriber_ = this->create_subscription<example_interfaces::msg::String>("CppTopic", 10, std::bind(&RosSub::subscriberCb, this, _1));
    };
    void subscriberCb(const example_interfaces::msg::String::SharedPtr message)
    {
        ss << "The recived message is : " << message->data;
        RCLCPP_INFO(get_logger(), ss.str());
    }
    ~RosSub(){};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<RosSub>("SubscriberNode");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}