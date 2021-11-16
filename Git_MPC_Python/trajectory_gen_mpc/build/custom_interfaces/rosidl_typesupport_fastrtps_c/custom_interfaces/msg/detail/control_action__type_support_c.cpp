// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:msg/ControlAction.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/control_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/control_action__struct.h"
#include "custom_interfaces/msg/detail/control_action__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ControlAction__ros_msg_type = custom_interfaces__msg__ControlAction;

static bool _ControlAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlAction__ros_msg_type * ros_message = static_cast<const _ControlAction__ros_msg_type *>(untyped_ros_message);
  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  return true;
}

static bool _ControlAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlAction__ros_msg_type * ros_message = static_cast<_ControlAction__ros_msg_type *>(untyped_ros_message);
  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__ControlAction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlAction__ros_msg_type * ros_message = static_cast<const _ControlAction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlAction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__msg__ControlAction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__ControlAction(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControlAction__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__msg__ControlAction(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ControlAction = {
  "custom_interfaces::msg",
  "ControlAction",
  _ControlAction__cdr_serialize,
  _ControlAction__cdr_deserialize,
  _ControlAction__get_serialized_size,
  _ControlAction__max_serialized_size
};

static rosidl_message_type_support_t _ControlAction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlAction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, ControlAction)() {
  return &_ControlAction__type_support;
}

#if defined(__cplusplus)
}
#endif
