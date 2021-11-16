// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/ControlAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__TRAITS_HPP_

#include "custom_interfaces/msg/detail/control_action__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::msg::ControlAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::msg::ControlAction & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::msg::ControlAction>()
{
  return "custom_interfaces::msg::ControlAction";
}

template<>
inline const char * name<custom_interfaces::msg::ControlAction>()
{
  return "custom_interfaces/msg/ControlAction";
}

template<>
struct has_fixed_size<custom_interfaces::msg::ControlAction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::ControlAction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::ControlAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__TRAITS_HPP_
