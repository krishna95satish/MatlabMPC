// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/States.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interfaces/msg/detail/states__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_serialize(
  const custom_interfaces::msg::States & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: initial_state_x
  cdr << ros_message.initial_state_x;
  // Member: initial_state_y
  cdr << ros_message.initial_state_y;
  // Member: initial_state_v
  cdr << ros_message.initial_state_v;
  // Member: initial_state_theta
  cdr << ros_message.initial_state_theta;
  // Member: final_state_x
  cdr << ros_message.final_state_x;
  // Member: final_state_y
  cdr << ros_message.final_state_y;
  // Member: final_state_v
  cdr << ros_message.final_state_v;
  // Member: final_state_theta
  cdr << ros_message.final_state_theta;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interfaces::msg::States & ros_message)
{
  // Member: initial_state_x
  cdr >> ros_message.initial_state_x;

  // Member: initial_state_y
  cdr >> ros_message.initial_state_y;

  // Member: initial_state_v
  cdr >> ros_message.initial_state_v;

  // Member: initial_state_theta
  cdr >> ros_message.initial_state_theta;

  // Member: final_state_x
  cdr >> ros_message.final_state_x;

  // Member: final_state_y
  cdr >> ros_message.final_state_y;

  // Member: final_state_v
  cdr >> ros_message.final_state_v;

  // Member: final_state_theta
  cdr >> ros_message.final_state_theta;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
get_serialized_size(
  const custom_interfaces::msg::States & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: initial_state_x
  {
    size_t item_size = sizeof(ros_message.initial_state_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_state_y
  {
    size_t item_size = sizeof(ros_message.initial_state_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_state_v
  {
    size_t item_size = sizeof(ros_message.initial_state_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_state_theta
  {
    size_t item_size = sizeof(ros_message.initial_state_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: final_state_x
  {
    size_t item_size = sizeof(ros_message.final_state_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: final_state_y
  {
    size_t item_size = sizeof(ros_message.final_state_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: final_state_v
  {
    size_t item_size = sizeof(ros_message.final_state_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: final_state_theta
  {
    size_t item_size = sizeof(ros_message.final_state_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
max_serialized_size_States(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: initial_state_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: initial_state_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: initial_state_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: initial_state_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: final_state_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: final_state_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: final_state_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: final_state_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _States__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::States *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _States__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interfaces::msg::States *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _States__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::States *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _States__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_States(full_bounded, 0);
}

static message_type_support_callbacks_t _States__callbacks = {
  "custom_interfaces::msg",
  "States",
  _States__cdr_serialize,
  _States__cdr_deserialize,
  _States__get_serialized_size,
  _States__max_serialized_size
};

static rosidl_message_type_support_t _States__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_States__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::States>()
{
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_States__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, msg, States)() {
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_States__handle;
}

#ifdef __cplusplus
}
#endif
