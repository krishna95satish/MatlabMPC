#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <string>
#include <chrono>
#include <functional>

class Ros2Node : public rclcpp::Node
{
    int counter_{0};
    rclcpp::TimerBase::SharedPtr timer_{nullptr};

public:
    Ros2Node(std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node Started!!");
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Ros2Node::repeater, this));
    };
    ~Ros2Node(){};

private:
    void repeater()
    {
        RCLCPP_WARN(this->get_logger(), "Sending... %d", counter_);
        counter_++;
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    std::string nodeName = "SimpleNode";
    auto node = std::make_shared<Ros2Node>(nodeName);
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
