// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecha_control/msg/detail/point_and_mecha_state_array__rosidl_typesupport_introspection_c.h"
#include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecha_control/msg/detail/point_and_mecha_state_array__functions.h"
#include "mecha_control/msg/detail/point_and_mecha_state_array__struct.h"


// Include directives for member types
// Member `points`
#include "mecha_control/msg/point_and_mecha_state.h"
// Member `points`
#include "mecha_control/msg/detail/point_and_mecha_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecha_control__msg__PointAndMechaStateArray__init(message_memory);
}

void mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_fini_function(void * message_memory)
{
  mecha_control__msg__PointAndMechaStateArray__fini(message_memory);
}

size_t mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__size_function__PointAndMechaStateArray__points(
  const void * untyped_member)
{
  const mecha_control__msg__PointAndMechaState__Sequence * member =
    (const mecha_control__msg__PointAndMechaState__Sequence *)(untyped_member);
  return member->size;
}

const void * mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_const_function__PointAndMechaStateArray__points(
  const void * untyped_member, size_t index)
{
  const mecha_control__msg__PointAndMechaState__Sequence * member =
    (const mecha_control__msg__PointAndMechaState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_function__PointAndMechaStateArray__points(
  void * untyped_member, size_t index)
{
  mecha_control__msg__PointAndMechaState__Sequence * member =
    (mecha_control__msg__PointAndMechaState__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__fetch_function__PointAndMechaStateArray__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mecha_control__msg__PointAndMechaState * item =
    ((const mecha_control__msg__PointAndMechaState *)
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_const_function__PointAndMechaStateArray__points(untyped_member, index));
  mecha_control__msg__PointAndMechaState * value =
    (mecha_control__msg__PointAndMechaState *)(untyped_value);
  *value = *item;
}

void mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__assign_function__PointAndMechaStateArray__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mecha_control__msg__PointAndMechaState * item =
    ((mecha_control__msg__PointAndMechaState *)
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_function__PointAndMechaStateArray__points(untyped_member, index));
  const mecha_control__msg__PointAndMechaState * value =
    (const mecha_control__msg__PointAndMechaState *)(untyped_value);
  *item = *value;
}

bool mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__resize_function__PointAndMechaStateArray__points(
  void * untyped_member, size_t size)
{
  mecha_control__msg__PointAndMechaState__Sequence * member =
    (mecha_control__msg__PointAndMechaState__Sequence *)(untyped_member);
  mecha_control__msg__PointAndMechaState__Sequence__fini(member);
  return mecha_control__msg__PointAndMechaState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__PointAndMechaStateArray, points),  // bytes offset in struct
    NULL,  // default value
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__size_function__PointAndMechaStateArray__points,  // size() function pointer
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_const_function__PointAndMechaStateArray__points,  // get_const(index) function pointer
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__get_function__PointAndMechaStateArray__points,  // get(index) function pointer
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__fetch_function__PointAndMechaStateArray__points,  // fetch(index, &value) function pointer
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__assign_function__PointAndMechaStateArray__points,  // assign(index, value) function pointer
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__resize_function__PointAndMechaStateArray__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_members = {
  "mecha_control__msg",  // message namespace
  "PointAndMechaStateArray",  // message name
  1,  // number of fields
  sizeof(mecha_control__msg__PointAndMechaStateArray),
  mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_member_array,  // message members
  mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_type_support_handle = {
  0,
  &mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, msg, PointAndMechaStateArray)() {
  mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, msg, PointAndMechaState)();
  if (!mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_type_support_handle.typesupport_identifier) {
    mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecha_control__msg__PointAndMechaStateArray__rosidl_typesupport_introspection_c__PointAndMechaStateArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
