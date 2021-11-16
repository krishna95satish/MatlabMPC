// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/HwStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/HwStatus in the package custom_interfaces.
typedef struct custom_interfaces__msg__HwStatus
{
  int64_t temperature;
  bool are_motors_ready;
  rosidl_runtime_c__String debug_message;
} custom_interfaces__msg__HwStatus;

// Struct for a sequence of custom_interfaces__msg__HwStatus.
typedef struct custom_interfaces__msg__HwStatus__Sequence
{
  custom_interfaces__msg__HwStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__HwStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__HW_STATUS__STRUCT_H_
