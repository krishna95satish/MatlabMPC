// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Trajectory in the package custom_interfaces.
typedef struct custom_interfaces__srv__Trajectory_Request
{
  float initial_state_x;
  float initial_state_y;
  float initial_state_v;
  float initial_state_theta;
  float final_state_x;
  float final_state_y;
  float final_state_v;
  float final_state_theta;
} custom_interfaces__srv__Trajectory_Request;

// Struct for a sequence of custom_interfaces__srv__Trajectory_Request.
typedef struct custom_interfaces__srv__Trajectory_Request__Sequence
{
  custom_interfaces__srv__Trajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Trajectory_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Trajectory in the package custom_interfaces.
typedef struct custom_interfaces__srv__Trajectory_Response
{
  float acceleration;
  float steering_angle;
} custom_interfaces__srv__Trajectory_Response;

// Struct for a sequence of custom_interfaces__srv__Trajectory_Response.
typedef struct custom_interfaces__srv__Trajectory_Response__Sequence
{
  custom_interfaces__srv__Trajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Trajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRAJECTORY__STRUCT_H_
