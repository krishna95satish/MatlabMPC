#include <rclcpp/rclcpp.hpp>
#include <custom_interfaces/srv/set_led.hpp>

class BatteryNode : public rclcpp::Node
{
private:
    rclcpp::Client<custom_interfaces::srv::SetLED>::SharedPtr client_{nullptr};
    std::thread clientThread_;

public:
    BatteryNode(const std::string &nodeName, const int ledNumber, const bool ledStatus);
    void clientCb(int ledNumber, bool ledStatus);
    ~BatteryNode();
};

BatteryNode::BatteryNode(const std::string &nodeName, const int ledNumber, const bool ledStatus) : Node(nodeName)
{
    RCLCPP_INFO(this->get_logger(), "Node has been initialiyed");
    clientThread_ = std::thread(std::bind(&BatteryNode::clientCb, this, ledNumber, ledStatus));
    this->declare_parameter("Someting");
}

void BatteryNode::clientCb(const int ledNumber, const bool ledStatus)
{
    client_ = this->create_client<custom_interfaces::srv::SetLED>("SetLED");
    while (!client_->wait_for_service(std::chrono::seconds(1)))
    {
        RCLCPP_WARN(this->get_logger(), "Waiting for the server to go online");
    }
    auto req = std::make_shared<custom_interfaces::srv::SetLED::Request>();
    req->led_number = ledNumber;
    req->on_or_off = ledStatus;
    auto future = client_->async_send_request(req);
    try
    {
        auto outFlag = future.get()->success;
        RCLCPP_INFO(this->get_logger(), "Set complete : %d", outFlag);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

BatteryNode::~BatteryNode()
{
}

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<BatteryNode>("BatteryNode", 1, true);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}