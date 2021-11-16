// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ControlAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__BUILDER_HPP_

#include "custom_interfaces/msg/detail/control_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControlAction_steering_angle
{
public:
  explicit Init_ControlAction_steering_angle(::custom_interfaces::msg::ControlAction & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::ControlAction steering_angle(::custom_interfaces::msg::ControlAction::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ControlAction msg_;
};

class Init_ControlAction_acceleration
{
public:
  Init_ControlAction_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlAction_steering_angle acceleration(::custom_interfaces::msg::ControlAction::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ControlAction_steering_angle(msg_);
  }

private:
  ::custom_interfaces::msg::ControlAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ControlAction>()
{
  return custom_interfaces::msg::builder::Init_ControlAction_acceleration();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__BUILDER_HPP_
