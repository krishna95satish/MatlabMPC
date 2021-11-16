// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include "custom_interfaces/srv/detail/set_led__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: on_or_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_or_off: ";
    value_to_yaml(msg.on_or_off, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::srv::SetLED_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::SetLED_Request>()
{
  return "custom_interfaces::srv::SetLED_Request";
}

template<>
inline const char * name<custom_interfaces::srv::SetLED_Request>()
{
  return "custom_interfaces/srv/SetLED_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::SetLED_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::srv::SetLED_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::SetLED_Response>()
{
  return "custom_interfaces::srv::SetLED_Response";
}

template<>
inline const char * name<custom_interfaces::srv::SetLED_Response>()
{
  return "custom_interfaces/srv/SetLED_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::SetLED_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::SetLED>()
{
  return "custom_interfaces::srv::SetLED";
}

template<>
inline const char * name<custom_interfaces::srv::SetLED>()
{
  return "custom_interfaces/srv/SetLED";
}

template<>
struct has_fixed_size<custom_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::SetLED_Request>::value &&
    has_fixed_size<custom_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::SetLED_Request>::value &&
    has_bounded_size<custom_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::SetLED>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::SetLED_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::SetLED_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
