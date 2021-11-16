// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/ComputeAreaOfRectangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAreaOfRectangle_Request_
{
  using Type = ComputeAreaOfRectangle_Request_<ContainerAllocator>;

  explicit ComputeAreaOfRectangle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lenght = 0.0;
      this->width = 0.0;
    }
  }

  explicit ComputeAreaOfRectangle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lenght = 0.0;
      this->width = 0.0;
    }
  }

  // field types and members
  using _lenght_type =
    double;
  _lenght_type lenght;
  using _width_type =
    double;
  _width_type width;

  // setters for named parameter idiom
  Type & set__lenght(
    const double & _arg)
  {
    this->lenght = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Request
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Request
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAreaOfRectangle_Request_ & other) const
  {
    if (this->lenght != other.lenght) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAreaOfRectangle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAreaOfRectangle_Request_

// alias to use template instance with default allocator
using ComputeAreaOfRectangle_Request =
  custom_interfaces::srv::ComputeAreaOfRectangle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeAreaOfRectangle_Response_
{
  using Type = ComputeAreaOfRectangle_Response_<ContainerAllocator>;

  explicit ComputeAreaOfRectangle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  explicit ComputeAreaOfRectangle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0;
    }
  }

  // field types and members
  using _area_type =
    double;
  _area_type area;

  // setters for named parameter idiom
  Type & set__area(
    const double & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Response
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ComputeAreaOfRectangle_Response
    std::shared_ptr<custom_interfaces::srv::ComputeAreaOfRectangle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeAreaOfRectangle_Response_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeAreaOfRectangle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeAreaOfRectangle_Response_

// alias to use template instance with default allocator
using ComputeAreaOfRectangle_Response =
  custom_interfaces::srv::ComputeAreaOfRectangle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct ComputeAreaOfRectangle
{
  using Request = custom_interfaces::srv::ComputeAreaOfRectangle_Request;
  using Response = custom_interfaces::srv::ComputeAreaOfRectangle_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_HPP_
