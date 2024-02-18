// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pure_pursuit/msg/detail/point_and_angle__rosidl_typesupport_introspection_c.h"
#include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pure_pursuit/msg/detail/point_and_angle__functions.h"
#include "pure_pursuit/msg/detail/point_and_angle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__msg__PointAndAngle__init(message_memory);
}

void pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_fini_function(void * message_memory)
{
  pure_pursuit__msg__PointAndAngle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__msg__PointAndAngle, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__msg__PointAndAngle, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__msg__PointAndAngle, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_members = {
  "pure_pursuit__msg",  // message namespace
  "PointAndAngle",  // message name
  3,  // number of fields
  sizeof(pure_pursuit__msg__PointAndAngle),
  pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_member_array,  // message members
  pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_type_support_handle = {
  0,
  &pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, msg, PointAndAngle)() {
  if (!pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__msg__PointAndAngle__rosidl_typesupport_introspection_c__PointAndAngle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
