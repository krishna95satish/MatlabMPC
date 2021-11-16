// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__States __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__States __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct States_
{
  using Type = States_<ContainerAllocator>;

  explicit States_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit States_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    custom_interfaces::msg::States_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::States_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::States_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::States_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::States_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::States_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::States_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::States_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::States_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::States_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__States
    std::shared_ptr<custom_interfaces::msg::States_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__States
    std::shared_ptr<custom_interfaces::msg::States_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const States_ & other) const
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
  bool operator!=(const States_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct States_

// alias to use template instance with default allocator
using States =
  custom_interfaces::msg::States_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_
