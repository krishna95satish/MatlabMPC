// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Trajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Trajectory_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trajectory_Request_
{
  using Type = Trajectory_Request_<ContainerAllocator>;

  explicit Trajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_state_x = 0.0f;
      this->initial_state_y = 0.0f;
      this->initial_state_v = 0.0f;
      this->initial_state_theta = 0.0f;
      this->final_state_x = 0.0f;
      this->final_state_y = 0.0f;
      this->final_state_v = 0.0f;
      this->final_state_theta = 0.0f;
    }
  }

  explicit Trajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initial_state_x = 0.0f;
      this->initial_state_y = 0.0f;
      this->initial_state_v = 0.0f;
      this->initial_state_theta = 0.0f;
      this->final_state_x = 0.0f;
      this->final_state_y = 0.0f;
      this->final_state_v = 0.0f;
      this->final_state_theta = 0.0f;
    }
  }

  // field types and members
  using _initial_state_x_type =
    float;
  _initial_state_x_type initial_state_x;
  using _initial_state_y_type =
    float;
  _initial_state_y_type initial_state_y;
  using _initial_state_v_type =
    float;
  _initial_state_v_type initial_state_v;
  using _initial_state_theta_type =
    float;
  _initial_state_theta_type initial_state_theta;
  using _final_state_x_type =
    float;
  _final_state_x_type final_state_x;
  using _final_state_y_type =
    float;
  _final_state_y_type final_state_y;
  using _final_state_v_type =
    float;
  _final_state_v_type final_state_v;
  using _final_state_theta_type =
    float;
  _final_state_theta_type final_state_theta;

  // setters for named parameter idiom
  Type & set__initial_state_x(
    const float & _arg)
  {
    this->initial_state_x = _arg;
    return *this;
  }
  Type & set__initial_state_y(
    const float & _arg)
  {
    this->initial_state_y = _arg;
    return *this;
  }
  Type & set__initial_state_v(
    const float & _arg)
  {
    this->initial_state_v = _arg;
    return *this;
  }
  Type & set__initial_state_theta(
    const float & _arg)
  {
    this->initial_state_theta = _arg;
    return *this;
  }
  Type & set__final_state_x(
    const float & _arg)
  {
    this->final_state_x = _arg;
    return *this;
  }
  Type & set__final_state_y(
    const float & _arg)
  {
    this->final_state_y = _arg;
    return *this;
  }
  Type & set__final_state_v(
    const float & _arg)
  {
    this->final_state_v = _arg;
    return *this;
  }
  Type & set__final_state_theta(
    const float & _arg)
  {
    this->final_state_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Trajectory_Request
    std::shared_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Trajectory_Request
    std::shared_ptr<custom_interfaces::srv::Trajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_Request_ & other) const
  {
    if (this->initial_state_x != other.initial_state_x) {
      return false;
    }
    if (this->initial_state_y != other.initial_state_y) {
      return false;
    }
    if (this->initial_state_v != other.initial_state_v) {
      return false;
    }
    if (this->initial_state_theta != other.initial_state_theta) {
      return false;
    }
    if (this->final_state_x != other.final_state_x) {
      return false;
    }
    if (this->final_state_y != other.final_state_y) {
      return false;
    }
    if (this->final_state_v != other.final_state_v) {
      return false;
    }
    if (this->final_state_theta != other.final_state_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_Request_

// alias to use template instance with default allocator
using Trajectory_Request =
  custom_interfaces::srv::Trajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Trajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Trajectory_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trajectory_Response_
{
  using Type = Trajectory_Response_<ContainerAllocator>;

  explicit Trajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
      this->steering_angle = 0.0f;
    }
  }

  explicit Trajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
      this->steering_angle = 0.0f;
    }
  }

  // field types and members
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _steering_angle_type =
    float;
  _steering_angle_type steering_angle;

  // setters for named parameter idiom
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const float & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Trajectory_Response
    std::shared_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Trajectory_Response
    std::shared_ptr<custom_interfaces::srv::Trajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_Response_ & other) const
  {
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_Response_

// alias to use template instance with default allocator
using Trajectory_Response =
  custom_interfaces::srv::Trajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct Trajectory
{
  using Request = custom_interfaces::srv::Trajectory_Request;
  using Response = custom_interfaces::srv::Trajectory_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_HPP_
