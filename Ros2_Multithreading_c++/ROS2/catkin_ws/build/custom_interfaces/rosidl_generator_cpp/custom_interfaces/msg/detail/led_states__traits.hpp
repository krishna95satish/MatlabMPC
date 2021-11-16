// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__TRAITS_HPP_

#include "custom_interfaces/msg/detail/led_states__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'led_status'
#include "custom_interfaces/msg/detail/led_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::msg::LEDStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led_status.size() == 0) {
      out << "led_status: []\n";
    } else {
      out << "led_status:\n";
      for (auto item : msg.led_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::msg::LEDStates & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::msg::LEDStates>()
{
  return "custom_interfaces::msg::LEDStates";
}

template<>
inline const char * name<custom_interfaces::msg::LEDStates>()
{
  return "custom_interfaces/msg/LEDStates";
}

template<>
struct has_fixed_size<custom_interfaces::msg::LEDStates>
  : std::integral_constant<bool, has_fixed_size<custom_interfaces::msg::LEDState>::value> {};

template<>
struct has_bounded_size<custom_interfaces::msg::LEDStates>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces::msg::LEDState>::value> {};

template<>
struct is_message<custom_interfaces::msg::LEDStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__TRAITS_HPP_
