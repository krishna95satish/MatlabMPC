#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include <functional>

class ros2Node : public rclcpp::Node
{
private:
    static int COUNTER;
    int count_;
    rclcpp::TimerBase::SharedPtr timer_{nullptr};

public:
    ros2Node(const std::string &name) : Node(name)
    {
        std::cout << "Started " << std::endl;
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&ros2Node::doSomething, this));
    };

    static int getCounter()
    {
        std::cout << "Counter variable is : " << COUNTER << std::endl;
        return COUNTER - 1;
    }

    ~ros2Node(){};

private:
    void doSomething()
    {
        std::cout << "Doing Someting : " << this->count_ << std::endl;
        ++count_;
        COUNTER = count_;
    }
};

int ros2Node::COUNTER{0};

class RosWrapper
{
private:
    std::shared_ptr<ros2Node> node_{nullptr};

public:
    RosWrapper(int argc, char **argv, const std::string &nodeName);
    void rosSpin();
    ~RosWrapper();
};

RosWrapper::RosWrapper(int argc, char **argv, const std::string &nodeName)
{
    rclcpp::init(argc, argv);
    node_ = std::make_shared<ros2Node>(nodeName);
}

void RosWrapper::rosSpin()
{
    rclcpp::spin(node_);
}

RosWrapper::~RosWrapper()
{
    rclcpp::shutdown();
}

int main(int argc, char **argv)
{
    std::string nodeName = "TestNode";
    RosWrapper wrapper(argc, argv, "TestNode");
    wrapper.rosSpin();
    ros2Node::getCounter();

    return 0;
}