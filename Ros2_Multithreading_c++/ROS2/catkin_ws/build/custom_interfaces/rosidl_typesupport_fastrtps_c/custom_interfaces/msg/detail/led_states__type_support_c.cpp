// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/led_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/led_states__struct.h"
#include "custom_interfaces/msg/detail/led_states__functions.h"
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

#include "custom_interfaces/msg/detail/led_state__functions.h"  // led_status

// forward declare type support functions
size_t get_serialized_size_custom_interfaces__msg__LEDState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_interfaces__msg__LEDState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, LEDState)();


using _LEDStates__ros_msg_type = custom_interfaces__msg__LEDStates;

static bool _LEDStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LEDStates__ros_msg_type * ros_message = static_cast<const _LEDStates__ros_msg_type *>(untyped_ros_message);
  // Field name: led_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_interfaces, msg, LEDState
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->led_status;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _LEDStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LEDStates__ros_msg_type * ros_message = static_cast<_LEDStates__ros_msg_type *>(untyped_ros_message);
  // Field name: led_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_interfaces, msg, LEDState
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->led_status;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__LEDStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LEDStates__ros_msg_type * ros_message = static_cast<const _LEDStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name led_status
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->led_status;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_interfaces__msg__LEDState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LEDStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__msg__LEDStates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__LEDStates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: led_status
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_interfaces__msg__LEDState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LEDStates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__msg__LEDStates(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LEDStates = {
  "custom_interfaces::msg",
  "LEDStates",
  _LEDStates__cdr_serialize,
  _LEDStates__cdr_deserialize,
  _LEDStates__get_serialized_size,
  _LEDStates__max_serialized_size
};

static rosidl_message_type_support_t _LEDStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LEDStates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, LEDStates)() {
  return &_LEDStates__type_support;
}

#if defined(__cplusplus)
}
#endif
