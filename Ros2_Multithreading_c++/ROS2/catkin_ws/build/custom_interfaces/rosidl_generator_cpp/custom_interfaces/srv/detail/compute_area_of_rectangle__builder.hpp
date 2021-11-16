// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ComputeAreaOfRectangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__BUILDER_HPP_

#include "custom_interfaces/srv/detail/compute_area_of_rectangle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeAreaOfRectangle_Request_width
{
public:
  explicit Init_ComputeAreaOfRectangle_Request_width(::custom_interfaces::srv::ComputeAreaOfRectangle_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ComputeAreaOfRectangle_Request width(::custom_interfaces::srv::ComputeAreaOfRectangle_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeAreaOfRectangle_Request msg_;
};

class Init_ComputeAreaOfRectangle_Request_lenght
{
public:
  Init_ComputeAreaOfRectangle_Request_lenght()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeAreaOfRectangle_Request_width lenght(::custom_interfaces::srv::ComputeAreaOfRectangle_Request::_lenght_type arg)
  {
    msg_.lenght = std::move(arg);
    return Init_ComputeAreaOfRectangle_Request_width(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeAreaOfRectangle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ComputeAreaOfRectangle_Request>()
{
  return custom_interfaces::srv::builder::Init_ComputeAreaOfRectangle_Request_lenght();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeAreaOfRectangle_Response_area
{
public:
  Init_ComputeAreaOfRectangle_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ComputeAreaOfRectangle_Response area(::custom_interfaces::srv::ComputeAreaOfRectangle_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ComputeAreaOfRectangle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ComputeAreaOfRectangle_Response>()
{
  return custom_interfaces::srv::builder::Init_ComputeAreaOfRectangle_Response_area();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__BUILDER_HPP_
