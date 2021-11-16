// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/ComputeAreaOfRectangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__TRAITS_HPP_

#include "custom_interfaces/srv/detail/compute_area_of_rectangle__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::ComputeAreaOfRectangle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lenght
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lenght: ";
    value_to_yaml(msg.lenght, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::srv::ComputeAreaOfRectangle_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::ComputeAreaOfRectangle_Request>()
{
  return "custom_interfaces::srv::ComputeAreaOfRectangle_Request";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeAreaOfRectangle_Request>()
{
  return "custom_interfaces/srv/ComputeAreaOfRectangle_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeAreaOfRectangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeAreaOfRectangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ComputeAreaOfRectangle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::ComputeAreaOfRectangle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    value_to_yaml(msg.area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_interfaces::srv::ComputeAreaOfRectangle_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::ComputeAreaOfRectangle_Response>()
{
  return "custom_interfaces::srv::ComputeAreaOfRectangle_Response";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeAreaOfRectangle_Response>()
{
  return "custom_interfaces/srv/ComputeAreaOfRectangle_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeAreaOfRectangle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeAreaOfRectangle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ComputeAreaOfRectangle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ComputeAreaOfRectangle>()
{
  return "custom_interfaces::srv::ComputeAreaOfRectangle";
}

template<>
inline const char * name<custom_interfaces::srv::ComputeAreaOfRectangle>()
{
  return "custom_interfaces/srv/ComputeAreaOfRectangle";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ComputeAreaOfRectangle>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::ComputeAreaOfRectangle_Request>::value &&
    has_fixed_size<custom_interfaces::srv::ComputeAreaOfRectangle_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::ComputeAreaOfRectangle>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::ComputeAreaOfRectangle_Request>::value &&
    has_bounded_size<custom_interfaces::srv::ComputeAreaOfRectangle_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::ComputeAreaOfRectangle>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::ComputeAreaOfRectangle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::ComputeAreaOfRectangle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__TRAITS_HPP_
