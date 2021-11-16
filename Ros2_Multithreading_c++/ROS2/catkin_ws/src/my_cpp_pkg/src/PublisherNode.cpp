#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <string>
#include <example_interfaces/msg/string.hpp>

class RosPub : public rclcpp::Node
{
private:
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::stringstream ss;

public:
    RosPub(const std::string &nodeName) : Node(nodeName), publisher_(nullptr), timer_(nullptr)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized");
        ss << "This is ROS Cpp Node talking... Error code : " << 555;
        publisher_ = this->create_publisher<example_interfaces::msg::String>("CppTopic", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&RosPub::publisherCb, this));
    };
    void publisherCb()
    {
        auto message = example_interfaces::msg::String();
        message.data = ss.str();
        publisher_->publish(message);
    }
    ~RosPub(){};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<RosPub>("Publisher");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}