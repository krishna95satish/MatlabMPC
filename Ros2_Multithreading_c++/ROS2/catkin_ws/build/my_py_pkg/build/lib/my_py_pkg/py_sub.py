#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class pySubscribe(Node):
    def __init__(self, nodeName):
        super().__init__(nodeName)
        self.get_logger().info("Subscriber initialized")
        self.create_subscription(String, "TestTopic", self.pyCallback, 10)

    def pyCallback(self, message):
        self.get_logger().info("The message is : " + str(message.data))



def main(args=None):
    rclpy.init(args=args)
    node = pySubscribe("pySubscriber")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()