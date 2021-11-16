// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/HwStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__BUILDER_HPP_

#include "custom_interfaces/msg/detail/hw_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_HwStatus_debug_message
{
public:
  explicit Init_HwStatus_debug_message(::custom_interfaces::msg::HwStatus & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::HwStatus debug_message(::custom_interfaces::msg::HwStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::HwStatus msg_;
};

class Init_HwStatus_are_motors_ready
{
public:
  explicit Init_HwStatus_are_motors_ready(::custom_interfaces::msg::HwStatus & msg)
  : msg_(msg)
  {}
  Init_HwStatus_debug_message are_motors_ready(::custom_interfaces::msg::HwStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HwStatus_debug_message(msg_);
  }

private:
  ::custom_interfaces::msg::HwStatus msg_;
};

class Init_HwStatus_temperature
{
public:
  Init_HwStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HwStatus_are_motors_ready temperature(::custom_interfaces::msg::HwStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HwStatus_are_motors_ready(msg_);
  }

private:
  ::custom_interfaces::msg::HwStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::HwStatus>()
{
  return custom_interfaces::msg::builder::Init_HwStatus_temperature();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__BUILDER_HPP_
