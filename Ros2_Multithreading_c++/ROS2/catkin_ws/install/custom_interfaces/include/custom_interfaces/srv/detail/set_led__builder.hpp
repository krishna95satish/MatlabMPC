// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include "custom_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Request_on_or_off
{
public:
  explicit Init_SetLED_Request_on_or_off(::custom_interfaces::srv::SetLED_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetLED_Request on_or_off(::custom_interfaces::srv::SetLED_Request::_on_or_off_type arg)
  {
    msg_.on_or_off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetLED_Request msg_;
};

class Init_SetLED_Request_led_number
{
public:
  Init_SetLED_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Request_on_or_off led_number(::custom_interfaces::srv::SetLED_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLED_Request_on_or_off(msg_);
  }

private:
  ::custom_interfaces::srv::SetLED_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetLED_Request>()
{
  return custom_interfaces::srv::builder::Init_SetLED_Request_led_number();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Response_success
{
public:
  Init_SetLED_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SetLED_Response success(::custom_interfaces::srv::SetLED_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetLED_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetLED_Response>()
{
  return custom_interfaces::srv::builder::Init_SetLED_Response_success();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
