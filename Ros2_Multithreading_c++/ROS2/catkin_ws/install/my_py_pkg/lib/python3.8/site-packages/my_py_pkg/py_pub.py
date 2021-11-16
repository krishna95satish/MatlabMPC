#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from custom_interfaces.msg import HwStatus


class pyPublisher(Node):
    def __init__(self, nodeName):
        super().__init__(nodeName)
        self.rosPub = self.create_publisher(HwStatus, "TestTopic", 10)
        self.timer = self.create_timer(1, self.pyCallback)
        self.get_logger().info("Node has been initialized")

    def pyCallback(self):
        message = HwStatus()
        message.temperature = 12
        message.are_motors_ready = True
        message.debug_message = "Krishna Here"
        self.rosPub.publish(message)
        self.get_logger().info("Publishing ....")


def main(args=None):
    rclpy.init(args=args)
    node = pyPublisher("PublisherNode")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
