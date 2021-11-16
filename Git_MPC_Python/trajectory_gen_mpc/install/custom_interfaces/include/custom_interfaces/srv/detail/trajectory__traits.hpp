// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "custom_interfaces/srv/detail/trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::Trajectory_Request & msg,
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

inline std::string to_yaml(const custom_interfaces::srv::Trajectory_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::Trajectory_Request>()
{
  return "custom_interfaces::srv::Trajectory_Request";
}

template<>
inline const char * name<custom_interfaces::srv::Trajectory_Request>()
{
  return "custom_interfaces/srv/Trajectory_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Trajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Trajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_interfaces::srv::Trajectory_Response & msg,
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

inline std::string to_yaml(const custom_interfaces::srv::Trajectory_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_interfaces::srv::Trajectory_Response>()
{
  return "custom_interfaces::srv::Trajectory_Response";
}

template<>
inline const char * name<custom_interfaces::srv::Trajectory_Response>()
{
  return "custom_interfaces/srv/Trajectory_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Trajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Trajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Trajectory>()
{
  return "custom_interfaces::srv::Trajectory";
}

template<>
inline const char * name<custom_interfaces::srv::Trajectory>()
{
  return "custom_interfaces/srv/Trajectory";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Trajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::Trajectory_Request>::value &&
    has_fixed_size<custom_interfaces::srv::Trajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::Trajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::Trajectory_Request>::value &&
    has_bounded_size<custom_interfaces::srv::Trajectory_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::Trajectory>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::Trajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::Trajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__TRAITS_HPP_
