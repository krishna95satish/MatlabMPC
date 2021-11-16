#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class RosServer(Node):
    def __init__(self, nodeName):
        super().__init__(nodeName)
        self.get_logger().info("Node has been inintialized")
        self.service = self.create_service(
            AddTwoInts, "add_two_ints", self.pyServerCb)

    def pyServerCb(self, Request, Response):
        self.get_logger().info("Adding two ints.....")
        Response.sum = Request.a + Request.b
        return Response


def main(args=None):
    rclpy.init(args=args)
    node = RosServer("PyServer")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
