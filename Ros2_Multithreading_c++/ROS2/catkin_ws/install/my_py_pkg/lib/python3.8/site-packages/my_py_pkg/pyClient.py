#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


def main(args=None):
    rclpy.init(args=args)
    node = Node("pyClientWithoutOOPS")
    client = node.create_client(AddTwoInts, "add_two_ints")

    while not client.wait_for_service(1.0):
        node.get_logger().warn("Waiting for the server to come online")

    req = AddTwoInts.Request()
    req.a = 10
    req.b = 20
    furutre = client.call_async(req)
    rclpy.spin_until_future_complete(node, furutre)

    try:
        response = furutre.result()
        out = response.sum
        node.get_logger().info("The response is %d" % out)
    except Exception as e:
        node.get_logger().error("The err is %r" % (e,))

    rclpy.shutdown()


if __name__ == "__main__":
    main()
