// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__LEDState __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__LEDState __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDState_
{
  using Type = LEDState_<ContainerAllocator>;

  explicit LEDState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = false;
    }
  }

  explicit LEDState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_status = false;
    }
  }

  // field types and members
  using _led_status_type =
    bool;
  _led_status_type led_status;

  // setters for named parameter idiom
  Type & set__led_status(
    const bool & _arg)
  {
    this->led_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::LEDState_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::LEDState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::LEDState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::LEDState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__LEDState
    std::shared_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__LEDState
    std::shared_ptr<custom_interfaces::msg::LEDState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDState_ & other) const
  {
    if (this->led_status != other.led_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDState_

// alias to use template instance with default allocator
using LEDState =
  custom_interfaces::msg::LEDState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
