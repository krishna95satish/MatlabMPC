#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/int64.hpp>
#include <chrono>
#include <functional>

class Act2Pub : public rclcpp::Node
{
private:
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_{nullptr};
    rclcpp::TimerBase::SharedPtr timer_{nullptr};
    int counter_{2};

public:
    Act2Pub(const std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node initilated");
        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Act2Pub::publisherCb, this));
    };
    void publisherCb()
    {
        auto message = example_interfaces::msg::Int64();
        message.data = counter_;
        publisher_->publish(message);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<Act2Pub>("number_publisher");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}