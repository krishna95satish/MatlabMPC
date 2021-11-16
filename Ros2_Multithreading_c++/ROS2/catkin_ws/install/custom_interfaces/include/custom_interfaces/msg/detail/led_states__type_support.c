// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/led_states__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/led_states__functions.h"
#include "custom_interfaces/msg/detail/led_states__struct.h"


// Include directives for member types
// Member `led_status`
#include "custom_interfaces/msg/led_state.h"
// Member `led_status`
#include "custom_interfaces/msg/detail/led_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LEDStates__rosidl_typesupport_introspection_c__LEDStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__LEDStates__init(message_memory);
}

void LEDStates__rosidl_typesupport_introspection_c__LEDStates_fini_function(void * message_memory)
{
  custom_interfaces__msg__LEDStates__fini(message_memory);
}

size_t LEDStates__rosidl_typesupport_introspection_c__size_function__LEDState__led_status(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * LEDStates__rosidl_typesupport_introspection_c__get_const_function__LEDState__led_status(
  const void * untyped_member, size_t index)
{
  const custom_interfaces__msg__LEDState * member =
    (const custom_interfaces__msg__LEDState *)(untyped_member);
  return &member[index];
}

void * LEDStates__rosidl_typesupport_introspection_c__get_function__LEDState__led_status(
  void * untyped_member, size_t index)
{
  custom_interfaces__msg__LEDState * member =
    (custom_interfaces__msg__LEDState *)(untyped_member);
  return &member[index];
}

static rosidl_typesupport_introspection_c__MessageMember LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_member_array[1] = {
  {
    "led_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__LEDStates, led_status),  // bytes offset in struct
    NULL,  // default value
    LEDStates__rosidl_typesupport_introspection_c__size_function__LEDState__led_status,  // size() function pointer
    LEDStates__rosidl_typesupport_introspection_c__get_const_function__LEDState__led_status,  // get_const(index) function pointer
    LEDStates__rosidl_typesupport_introspection_c__get_function__LEDState__led_status,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_members = {
  "custom_interfaces__msg",  // message namespace
  "LEDStates",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__msg__LEDStates),
  LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_member_array,  // message members
  LEDStates__rosidl_typesupport_introspection_c__LEDStates_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDStates__rosidl_typesupport_introspection_c__LEDStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_type_support_handle = {
  0,
  &LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, LEDStates)() {
  LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, LEDState)();
  if (!LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_type_support_handle.typesupport_identifier) {
    LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LEDStates__rosidl_typesupport_introspection_c__LEDStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
