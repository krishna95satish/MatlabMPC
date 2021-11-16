// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:srv/Trajectory.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/srv/detail/trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/srv/detail/trajectory__struct.h"
#include "custom_interfaces/srv/detail/trajectory__functions.h"
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


using _Trajectory_Request__ros_msg_type = custom_interfaces__srv__Trajectory_Request;

static bool _Trajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Trajectory_Request__ros_msg_type * ros_message = static_cast<const _Trajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_state_x
  {
    cdr << ros_message->initial_state_x;
  }

  // Field name: initial_state_y
  {
    cdr << ros_message->initial_state_y;
  }

  // Field name: initial_state_v
  {
    cdr << ros_message->initial_state_v;
  }

  // Field name: initial_state_theta
  {
    cdr << ros_message->initial_state_theta;
  }

  // Field name: final_state_x
  {
    cdr << ros_message->final_state_x;
  }

  // Field name: final_state_y
  {
    cdr << ros_message->final_state_y;
  }

  // Field name: final_state_v
  {
    cdr << ros_message->final_state_v;
  }

  // Field name: final_state_theta
  {
    cdr << ros_message->final_state_theta;
  }

  return true;
}

static bool _Trajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Trajectory_Request__ros_msg_type * ros_message = static_cast<_Trajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_state_x
  {
    cdr >> ros_message->initial_state_x;
  }

  // Field name: initial_state_y
  {
    cdr >> ros_message->initial_state_y;
  }

  // Field name: initial_state_v
  {
    cdr >> ros_message->initial_state_v;
  }

  // Field name: initial_state_theta
  {
    cdr >> ros_message->initial_state_theta;
  }

  // Field name: final_state_x
  {
    cdr >> ros_message->final_state_x;
  }

  // Field name: final_state_y
  {
    cdr >> ros_message->final_state_y;
  }

  // Field name: final_state_v
  {
    cdr >> ros_message->final_state_v;
  }

  // Field name: final_state_theta
  {
    cdr >> ros_message->final_state_theta;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__srv__Trajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Trajectory_Request__ros_msg_type * ros_message = static_cast<const _Trajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initial_state_x
  {
    size_t item_size = sizeof(ros_message->initial_state_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_state_y
  {
    size_t item_size = sizeof(ros_message->initial_state_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_state_v
  {
    size_t item_size = sizeof(ros_message->initial_state_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_state_theta
  {
    size_t item_size = sizeof(ros_message->initial_state_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name final_state_x
  {
    size_t item_size = sizeof(ros_message->final_state_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name final_state_y
  {
    size_t item_size = sizeof(ros_message->final_state_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name final_state_v
  {
    size_t item_size = sizeof(ros_message->final_state_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name final_state_theta
  {
    size_t item_size = sizeof(ros_message->final_state_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Trajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__srv__Trajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__srv__Trajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: initial_state_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: initial_state_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: initial_state_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: initial_state_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: final_state_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: final_state_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: final_state_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: final_state_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Trajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__srv__Trajectory_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Trajectory_Request = {
  "custom_interfaces::srv",
  "Trajectory_Request",
  _Trajectory_Request__cdr_serialize,
  _Trajectory_Request__cdr_deserialize,
  _Trajectory_Request__get_serialized_size,
  _Trajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _Trajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Trajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Trajectory_Request)() {
  return &_Trajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/trajectory__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _Trajectory_Response__ros_msg_type = custom_interfaces__srv__Trajectory_Response;

static bool _Trajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Trajectory_Response__ros_msg_type * ros_message = static_cast<const _Trajectory_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _Trajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Trajectory_Response__ros_msg_type * ros_message = static_cast<_Trajectory_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_custom_interfaces__srv__Trajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Trajectory_Response__ros_msg_type * ros_message = static_cast<const _Trajectory_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Trajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__srv__Trajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__srv__Trajectory_Response(
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

static size_t _Trajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__srv__Trajectory_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Trajectory_Response = {
  "custom_interfaces::srv",
  "Trajectory_Response",
  _Trajectory_Response__cdr_serialize,
  _Trajectory_Response__cdr_deserialize,
  _Trajectory_Response__get_serialized_size,
  _Trajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _Trajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Trajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Trajectory_Response)() {
  return &_Trajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/srv/trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Trajectory__callbacks = {
  "custom_interfaces::srv",
  "Trajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Trajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Trajectory_Response)(),
};

static rosidl_service_type_support_t Trajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Trajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Trajectory)() {
  return &Trajectory__handle;
}

#if defined(__cplusplus)
}
#endif
