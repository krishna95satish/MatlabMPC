#!/usr/bin/env python3
import rclpy
from rclpy import client
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial


class RosClient(Node):
    def __init__(self, nodeName, a, b):
        super().__init__(nodeName)
        self.clientCb(a, b)

    def clientCb(self, a, b):
        self.client = self.create_client(AddTwoInts, "add_two_ints")
        while not self.client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the server to join")

        request = AddTwoInts.Request()
        request.a = a
        request.b = b
        future = self.client.call_async(request)
        future.add_done_callback(partial(self.futureDoneCb, a=a, b=b))

    def futureDoneCb(self, future, a, b):
        try:
            response = future.result()
            out = response.sum
            self.get_logger().info("The sum is : %d" % out)
        except Exception as e:
            self.get_logger().error("The err is %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = RosClient("RosClientOOPS", 10, 100)
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
