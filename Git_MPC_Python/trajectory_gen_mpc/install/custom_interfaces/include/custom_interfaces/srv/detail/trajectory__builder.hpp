// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__BUILDER_HPP_

#include "custom_interfaces/srv/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Trajectory_Request_final_state_theta
{
public:
  explicit Init_Trajectory_Request_final_state_theta(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Trajectory_Request final_state_theta(::custom_interfaces::srv::Trajectory_Request::_final_state_theta_type arg)
  {
    msg_.final_state_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_final_state_v
{
public:
  explicit Init_Trajectory_Request_final_state_v(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_final_state_theta final_state_v(::custom_interfaces::srv::Trajectory_Request::_final_state_v_type arg)
  {
    msg_.final_state_v = std::move(arg);
    return Init_Trajectory_Request_final_state_theta(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_final_state_y
{
public:
  explicit Init_Trajectory_Request_final_state_y(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_final_state_v final_state_y(::custom_interfaces::srv::Trajectory_Request::_final_state_y_type arg)
  {
    msg_.final_state_y = std::move(arg);
    return Init_Trajectory_Request_final_state_v(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_final_state_x
{
public:
  explicit Init_Trajectory_Request_final_state_x(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_final_state_y final_state_x(::custom_interfaces::srv::Trajectory_Request::_final_state_x_type arg)
  {
    msg_.final_state_x = std::move(arg);
    return Init_Trajectory_Request_final_state_y(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_initial_state_theta
{
public:
  explicit Init_Trajectory_Request_initial_state_theta(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_final_state_x initial_state_theta(::custom_interfaces::srv::Trajectory_Request::_initial_state_theta_type arg)
  {
    msg_.initial_state_theta = std::move(arg);
    return Init_Trajectory_Request_final_state_x(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_initial_state_v
{
public:
  explicit Init_Trajectory_Request_initial_state_v(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_initial_state_theta initial_state_v(::custom_interfaces::srv::Trajectory_Request::_initial_state_v_type arg)
  {
    msg_.initial_state_v = std::move(arg);
    return Init_Trajectory_Request_initial_state_theta(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_initial_state_y
{
public:
  explicit Init_Trajectory_Request_initial_state_y(::custom_interfaces::srv::Trajectory_Request & msg)
  : msg_(msg)
  {}
  Init_Trajectory_Request_initial_state_v initial_state_y(::custom_interfaces::srv::Trajectory_Request::_initial_state_y_type arg)
  {
    msg_.initial_state_y = std::move(arg);
    return Init_Trajectory_Request_initial_state_v(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

class Init_Trajectory_Request_initial_state_x
{
public:
  Init_Trajectory_Request_initial_state_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_Request_initial_state_y initial_state_x(::custom_interfaces::srv::Trajectory_Request::_initial_state_x_type arg)
  {
    msg_.initial_state_x = std::move(arg);
    return Init_Trajectory_Request_initial_state_y(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Trajectory_Request>()
{
  return custom_interfaces::srv::builder::Init_Trajectory_Request_initial_state_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Trajectory_Response_steering_angle
{
public:
  explicit Init_Trajectory_Response_steering_angle(::custom_interfaces::srv::Trajectory_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Trajectory_Response steering_angle(::custom_interfaces::srv::Trajectory_Response::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Response msg_;
};

class Init_Trajectory_Response_acceleration
{
public:
  Init_Trajectory_Response_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_Response_steering_angle acceleration(::custom_interfaces::srv::Trajectory_Response::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_Trajectory_Response_steering_angle(msg_);
  }

private:
  ::custom_interfaces::srv::Trajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Trajectory_Response>()
{
  return custom_interfaces::srv::builder::Init_Trajectory_Response_acceleration();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__BUILDER_HPP_
