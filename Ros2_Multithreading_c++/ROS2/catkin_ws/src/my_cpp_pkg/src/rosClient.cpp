#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include <example_interfaces/srv/add_two_ints.hpp>

int main(int argc, char **argv)
{
    rclcpp::init(argc = argc, argv = argv);
    auto node = std::make_shared<rclcpp::Node>("RosClient1");
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
    while (!client->wait_for_service(std::chrono::seconds(1)))
    {
        RCLCPP_WARN(node->get_logger(), "Waiting for the server to go online");
    }
    auto req = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    req->a = 10;
    req->b = 20;
    auto future = client->async_send_request(req);
    if (rclcpp::spin_until_future_complete(node, future) == rclcpp::executor::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(node->get_logger(), "The out is : %d", future.get()->sum);
    }
    else
    {
        RCLCPP_ERROR(node->get_logger(), "Can't get the future ref");
    }

    rclcpp::shutdown();

    return 0;
}