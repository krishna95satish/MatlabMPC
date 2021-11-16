from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    number_publisher_node = Node(
        package="my_py_pkg",
        executable="pyPub_exe",
        name="Custom_publisher",  # To remap the name
        remappings=[
            ("TestTopic", "my_number")
        ]
    )

    number_counter_node = Node(
        package="my_py_pkg",
        executable="pySub_exe",
        name="Custom_subscriber"  # To remap the name
    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter_node)
    return ld
