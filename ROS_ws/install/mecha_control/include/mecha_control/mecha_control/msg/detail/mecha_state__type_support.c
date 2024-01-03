// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecha_control/msg/detail/mecha_state__rosidl_typesupport_introspection_c.h"
#include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecha_control/msg/detail/mecha_state__functions.h"
#include "mecha_control/msg/detail/mecha_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecha_control__msg__MechaState__init(message_memory);
}

void mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_fini_function(void * message_memory)
{
  mecha_control__msg__MechaState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_member_array[3] = {
  {
    "daiza_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__MechaState, daiza_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hina_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__MechaState, hina_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bonbori_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__MechaState, bonbori_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_members = {
  "mecha_control__msg",  // message namespace
  "MechaState",  // message name
  3,  // number of fields
  sizeof(mecha_control__msg__MechaState),
  mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_member_array,  // message members
  mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_init_function,  // function to initialize message memory (memory has to be allocated)
  mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_type_support_handle = {
  0,
  &mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, msg, MechaState)() {
  if (!mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_type_support_handle.typesupport_identifier) {
    mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecha_control__msg__MechaState__rosidl_typesupport_introspection_c__MechaState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
