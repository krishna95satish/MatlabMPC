// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/LEDStates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led_status'
#include "custom_interfaces/msg/detail/led_state__struct.h"

// Struct defined in msg/LEDStates in the package custom_interfaces.
typedef struct custom_interfaces__msg__LEDStates
{
  custom_interfaces__msg__LEDState led_status[3];
} custom_interfaces__msg__LEDStates;

// Struct for a sequence of custom_interfaces__msg__LEDStates.
typedef struct custom_interfaces__msg__LEDStates__Sequence
{
  custom_interfaces__msg__LEDStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__LEDStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LED_STATES__STRUCT_H_
