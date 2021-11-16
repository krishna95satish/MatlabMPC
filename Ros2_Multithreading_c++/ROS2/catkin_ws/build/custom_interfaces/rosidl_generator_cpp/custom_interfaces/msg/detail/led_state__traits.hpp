// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_

#include "custom_interfaces/msg/detail/led_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::msg::LEDState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_status: ";
    value_to_yaml(msg.led_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::msg::LEDState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::msg::LEDState>()
{
  return "custom_interfaces::msg::LEDState";
}

template<>
inline const char * name<custom_interfaces::msg::LEDState>()
{
  return "custom_interfaces/msg/LEDState";
}

template<>
struct has_fixed_size<custom_interfaces::msg::LEDState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::LEDState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::LEDState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
