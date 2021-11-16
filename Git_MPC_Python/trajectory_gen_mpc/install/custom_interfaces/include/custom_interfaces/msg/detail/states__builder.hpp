// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_

#include "custom_interfaces/msg/detail/states__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_States_final_state_theta
{
public:
  explicit Init_States_final_state_theta(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::States final_state_theta(::custom_interfaces::msg::States::_final_state_theta_type arg)
  {
    msg_.final_state_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_final_state_v
{
public:
  explicit Init_States_final_state_v(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_final_state_theta final_state_v(::custom_interfaces::msg::States::_final_state_v_type arg)
  {
    msg_.final_state_v = std::move(arg);
    return Init_States_final_state_theta(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_final_state_y
{
public:
  explicit Init_States_final_state_y(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_final_state_v final_state_y(::custom_interfaces::msg::States::_final_state_y_type arg)
  {
    msg_.final_state_y = std::move(arg);
    return Init_States_final_state_v(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_final_state_x
{
public:
  explicit Init_States_final_state_x(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_final_state_y final_state_x(::custom_interfaces::msg::States::_final_state_x_type arg)
  {
    msg_.final_state_x = std::move(arg);
    return Init_States_final_state_y(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_initial_state_theta
{
public:
  explicit Init_States_initial_state_theta(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_final_state_x initial_state_theta(::custom_interfaces::msg::States::_initial_state_theta_type arg)
  {
    msg_.initial_state_theta = std::move(arg);
    return Init_States_final_state_x(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_initial_state_v
{
public:
  explicit Init_States_initial_state_v(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_initial_state_theta initial_state_v(::custom_interfaces::msg::States::_initial_state_v_type arg)
  {
    msg_.initial_state_v = std::move(arg);
    return Init_States_initial_state_theta(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_initial_state_y
{
public:
  explicit Init_States_initial_state_y(::custom_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_initial_state_v initial_state_y(::custom_interfaces::msg::States::_initial_state_y_type arg)
  {
    msg_.initial_state_y = std::move(arg);
    return Init_States_initial_state_v(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

class Init_States_initial_state_x
{
public:
  Init_States_initial_state_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_States_initial_state_y initial_state_x(::custom_interfaces::msg::States::_initial_state_x_type arg)
  {
    msg_.initial_state_x = std::move(arg);
    return Init_States_initial_state_y(msg_);
  }

private:
  ::custom_interfaces::msg::States msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::States>()
{
  return custom_interfaces::msg::builder::Init_States_initial_state_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_
