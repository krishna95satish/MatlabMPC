#include <iostream>
#include <rclcpp/rclcpp.hpp>

int main(int argc, char **argv)
{

    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("cppNode");
    RCLCPP_INFO(node->get_logger(), "Node Started");
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}