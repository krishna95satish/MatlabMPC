// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/ControlAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__ControlAction __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__ControlAction __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlAction_
{
  using Type = ControlAction_<ContainerAllocator>;

  explicit ControlAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
      this->steering_angle = 0.0f;
    }
  }

  explicit ControlAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    custom_interfaces::msg::ControlAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::ControlAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::ControlAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::ControlAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__ControlAction
    std::shared_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__ControlAction
    std::shared_ptr<custom_interfaces::msg::ControlAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlAction_ & other) const
  {
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlAction_

// alias to use template instance with default allocator
using ControlAction =
  custom_interfaces::msg::ControlAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CONTROL_ACTION__STRUCT_HPP_
