// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/ComputeAreaOfRectangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ComputeAreaOfRectangle in the package custom_interfaces.
typedef struct custom_interfaces__srv__ComputeAreaOfRectangle_Request
{
  double lenght;
  double width;
} custom_interfaces__srv__ComputeAreaOfRectangle_Request;

// Struct for a sequence of custom_interfaces__srv__ComputeAreaOfRectangle_Request.
typedef struct custom_interfaces__srv__ComputeAreaOfRectangle_Request__Sequence
{
  custom_interfaces__srv__ComputeAreaOfRectangle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ComputeAreaOfRectangle_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ComputeAreaOfRectangle in the package custom_interfaces.
typedef struct custom_interfaces__srv__ComputeAreaOfRectangle_Response
{
  double area;
} custom_interfaces__srv__ComputeAreaOfRectangle_Response;

// Struct for a sequence of custom_interfaces__srv__ComputeAreaOfRectangle_Response.
typedef struct custom_interfaces__srv__ComputeAreaOfRectangle_Response__Sequence
{
  custom_interfaces__srv__ComputeAreaOfRectangle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__ComputeAreaOfRectangle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__COMPUTE_AREA_OF_RECTANGLE__STRUCT_H_
