cmake_minimum_required(VERSION 3.5)
project(my_cpp_pkg)


# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(custom_interfaces REQUIRED)

add_executable(cppNode src/firstNode.cpp)
ament_target_dependencies(cppNode rclcpp)

add_executable(cppClassNode src/ClassNode.cpp)
ament_target_dependencies(cppClassNode rclcpp)

add_executable(testMem src/RosWrapper.cpp)
ament_target_dependencies(testMem rclcpp)


# Ros Publisher Executables
 
add_executable(rosPub src/PublisherNode.cpp)
ament_target_dependencies(rosPub rclcpp example_interfaces)
 
add_executable(ActPub src/Act2Publisher.cpp)
ament_target_dependencies(ActPub rclcpp example_interfaces)


add_executable(LedPannel src/LedPannel.cpp)
ament_target_dependencies(LedPannel rclcpp example_interfaces custom_interfaces)

# Ros server Executables

add_executable(rosServer src/cppServer.cpp)
ament_target_dependencies(rosServer rclcpp example_interfaces)


# Ros Subscriber Executables

add_executable(rosSub src/Subscriber.cpp)
ament_target_dependencies(rosSub rclcpp example_interfaces)

add_executable(ActSub src/Act2Subscriber.cpp)
ament_target_dependencies(ActSub rclcpp example_interfaces custom_interfaces)

# Ros Clinet Executables

add_executable(rosClient src/rosClient.cpp)
ament_target_dependencies(rosClient rclcpp example_interfaces)

add_executable(BatteryNode src/batteryNode.cpp)
ament_target_dependencies(BatteryNode rclcpp example_interfaces custom_interfaces)

add_executable(rosClientOOPS src/rosClientOOPS.cpp)
ament_target_dependencies(rosClientOOPS rclcpp example_interfaces)

add_executable(Act3Client src/Act3ResetClient.cpp)
ament_target_dependencies(Act3Client rclcpp example_interfaces custom_interfaces)


install(TARGETS
Act3Client
testMem
rosClient 
rosClientOOPS
rosPub 
ActPub
LedPannel
ActSub
rosServer
cppNode
rosSub
BatteryNode
cppClassNode
DESTINATION lib/${PROJECT_NAME}
)





ament_package()
