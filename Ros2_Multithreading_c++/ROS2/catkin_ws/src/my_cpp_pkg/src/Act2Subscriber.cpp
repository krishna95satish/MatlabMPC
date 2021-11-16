#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/int64.hpp>
#include <example_interfaces/srv/set_bool.hpp>

class Act2Sub : public rclcpp::Node
{
private:
    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_{nullptr};
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_{nullptr};
    rclcpp::TimerBase::SharedPtr timer_{nullptr};
    example_interfaces::msg::Int64 counter_;
    rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr resetServer_{nullptr};

public:
    Act2Sub(const std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized");
        subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number", 10, std::bind(&Act2Sub::subscriberCb, this, std::placeholders::_1));
        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_count", 10);
        resetServer_ = this->create_service<example_interfaces::srv::SetBool>("resetCounterService", std::bind(&Act2Sub::resetServerCb, this, std::placeholders::_1, std::placeholders::_2));
    };
    void resetServerCb(const example_interfaces::srv::SetBool::Request::SharedPtr req, const example_interfaces::srv::SetBool::Response::SharedPtr res)
    {
        if (req->data == true)
        {
            this->counter_.data = 0;
            res->success = true;
            res->message = "Reset Successful";
        }
    }
    void subscriberCb(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        counter_.data += msg->data;
        this->publisherCb();
    }
    void publisherCb()
    {
        publisher_->publish(counter_);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<Act2Sub>("number_counter");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}