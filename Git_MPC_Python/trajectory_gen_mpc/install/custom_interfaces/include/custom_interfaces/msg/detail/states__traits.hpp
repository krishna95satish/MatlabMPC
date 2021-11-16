// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_

#include "custom_interfaces/msg/detail/states__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::msg::States & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initial_state_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state_x: ";
    value_to_yaml(msg.initial_state_x, out);
    out << "\n";
  }

  // member: initial_state_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state_y: ";
    value_to_yaml(msg.initial_state_y, out);
    out << "\n";
  }

  // member: initial_state_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state_v: ";
    value_to_yaml(msg.initial_state_v, out);
    out << "\n";
  }

  // member: initial_state_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state_theta: ";
    value_to_yaml(msg.initial_state_theta, out);
    out << "\n";
  }

  // member: final_state_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_state_x: ";
    value_to_yaml(msg.final_state_x, out);
    out << "\n";
  }

  // member: final_state_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_state_y: ";
    value_to_yaml(msg.final_state_y, out);
    out << "\n";
  }

  // member: final_state_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_state_v: ";
    value_to_yaml(msg.final_state_v, out);
    out << "\n";
  }

  // member: final_state_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_state_theta: ";
    value_to_yaml(msg.final_state_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::msg::States & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::msg::States>()
{
  return "custom_interfaces::msg::States";
}

template<>
inline const char * name<custom_interfaces::msg::States>()
{
  return "custom_interfaces/msg/States";
}

template<>
struct has_fixed_size<custom_interfaces::msg::States>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::States>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::States>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_
