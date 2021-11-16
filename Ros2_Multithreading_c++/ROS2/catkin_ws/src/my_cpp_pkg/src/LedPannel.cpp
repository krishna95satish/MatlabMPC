#include <rclcpp/rclcpp.hpp>
#include <custom_interfaces/msg/led_states.hpp>
#include <custom_interfaces/srv/set_led.hpp>
#include <map>

class LedPannel : public rclcpp::Node
{
private:
    rclcpp::Publisher<custom_interfaces::msg::LEDStates>::SharedPtr publisher_{nullptr};
    rclcpp::Service<custom_interfaces::srv::SetLED>::SharedPtr server_{nullptr};
    rclcpp::TimerBase::SharedPtr timer_{nullptr};
    std::array<std::map<int, bool>, 3> LedPannel_;
    std::size_t counter_{0};
    bool led_status_{false};
    custom_interfaces::msg::LEDStates ledStatus_;
    int led_number_{0};
    int DEFAULT_VALUES{0};
    bool DEFAULT_STATUS{false};

public:
    LedPannel(const std::string &nodeName) : Node(nodeName)
    {
        RCLCPP_INFO(this->get_logger(), "Node has been initialized");
        this->messageInitialize();
        publisher_ = this->create_publisher<custom_interfaces::msg::LEDStates>("LEDStatus", 10);
        ledStatus_ = custom_interfaces::msg::LEDStates();
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&LedPannel::publisherCb, this));
        server_ = this->create_service<custom_interfaces::srv::SetLED>("SetLED", std::bind(&LedPannel::serverCb, this, std::placeholders::_1, std::placeholders::_2));
    };

    void messageInitialize()
    {
        while (counter_ < 3)
        {
            ledStatus_.led_status[counter_].led_status = DEFAULT_STATUS;
            counter_++;
        }
    }
    void serverCb(const custom_interfaces::srv::SetLED::Request::SharedPtr req, const custom_interfaces::srv::SetLED::Response::SharedPtr res)
    {

        if (req->led_number < 3 && req->led_number > 0)
        {
            led_number_ = req->led_number;
            led_status_ = req->on_or_off;
            ledStatus_.led_status[led_number_].led_status = led_status_;
            res->success = true;
        }
        else
        {
            res->success = false;
        }
    }
    void publisherCb()
    {
        publisher_->publish(ledStatus_);
    }
    ~LedPannel() {}
};

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<LedPannel>("LED_Node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}