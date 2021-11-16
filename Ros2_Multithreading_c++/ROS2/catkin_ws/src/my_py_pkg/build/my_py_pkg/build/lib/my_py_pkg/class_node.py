#!/usr/bin/env python3
from _typeshed import Self
import rclpy
from rclpy.node import Node


class pyNode(Node):
    def __init__(self):
        super.__init__("pyNode")
        self.get_logger().warn("Node Started!!")
        self.create_timer(0.2, self.print())
        self.counterVar_ = 0

    def print(self):
        self.get_logger().info("Sending" + str(self.counterVar_))
        self.counterVar_ += 1



def main(args=None):
    rclpy.init(args=args)
    node = pyNode()
    rclpy.spin_once(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
