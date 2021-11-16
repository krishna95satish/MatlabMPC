// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__BUILDER_HPP_

#include "custom_interfaces/msg/detail/led_states__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_LEDStates_led_status
{
public:
  Init_LEDStates_led_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::LEDStates led_status(::custom_interfaces::msg::LEDStates::_led_status_type arg)
  {
    msg_.led_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::LEDStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::LEDStates>()
{
  return custom_interfaces::msg::builder::Init_LEDStates_led_status();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__BUILDER_HPP_
