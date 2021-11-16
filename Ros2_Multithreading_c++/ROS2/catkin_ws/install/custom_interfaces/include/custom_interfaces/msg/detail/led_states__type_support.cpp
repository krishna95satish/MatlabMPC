// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_interfaces/msg/detail/led_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LEDStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_interfaces::msg::LEDStates(_init);
}

void LEDStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_interfaces::msg::LEDStates *>(message_memory);
  typed_message->~LEDStates();
}

size_t size_function__LEDStates__led_status(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__LEDStates__led_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<custom_interfaces::msg::LEDState, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__LEDStates__led_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<custom_interfaces::msg::LEDState, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LEDStates_message_member_array[1] = {
  {
    "led_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_interfaces::msg::LEDState>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::LEDStates, led_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__LEDStates__led_status,  // size() function pointer
    get_const_function__LEDStates__led_status,  // get_const(index) function pointer
    get_function__LEDStates__led_status,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LEDStates_message_members = {
  "custom_interfaces::msg",  // message namespace
  "LEDStates",  // message name
  1,  // number of fields
  sizeof(custom_interfaces::msg::LEDStates),
  LEDStates_message_member_array,  // message members
  LEDStates_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LEDStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LEDStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::LEDStates>()
{
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, msg, LEDStates)() {
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
