// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecha_control:msg/SensorStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecha_control/msg/detail/sensor_states__rosidl_typesupport_introspection_c.h"
#include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecha_control/msg/detail/sensor_states__functions.h"
#include "mecha_control/msg/detail/sensor_states__struct.h"


// Include directives for member types
// Member `potentiometer_angles`
// Member `limit_switch_states`
// Member `cylinder_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecha_control__msg__SensorStates__init(message_memory);
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_fini_function(void * message_memory)
{
  mecha_control__msg__SensorStates__fini(message_memory);
}

size_t mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__potentiometer_angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__potentiometer_angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__potentiometer_angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__potentiometer_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__potentiometer_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__potentiometer_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__potentiometer_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__potentiometer_angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__limit_switch_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__limit_switch_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__limit_switch_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__limit_switch_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__limit_switch_states(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__limit_switch_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__limit_switch_states(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__limit_switch_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__cylinder_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__cylinder_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__cylinder_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__cylinder_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__cylinder_states(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__cylinder_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__cylinder_states(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__cylinder_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_member_array[3] = {
  {
    "potentiometer_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__SensorStates, potentiometer_angles),  // bytes offset in struct
    NULL,  // default value
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__potentiometer_angles,  // size() function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__potentiometer_angles,  // get_const(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__potentiometer_angles,  // get(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__potentiometer_angles,  // fetch(index, &value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__potentiometer_angles,  // assign(index, value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__potentiometer_angles  // resize(index) function pointer
  },
  {
    "limit_switch_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__SensorStates, limit_switch_states),  // bytes offset in struct
    NULL,  // default value
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__limit_switch_states,  // size() function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__limit_switch_states,  // get_const(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__limit_switch_states,  // get(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__limit_switch_states,  // fetch(index, &value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__limit_switch_states,  // assign(index, value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__limit_switch_states  // resize(index) function pointer
  },
  {
    "cylinder_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__msg__SensorStates, cylinder_states),  // bytes offset in struct
    NULL,  // default value
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__size_function__SensorStates__cylinder_states,  // size() function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_const_function__SensorStates__cylinder_states,  // get_const(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__get_function__SensorStates__cylinder_states,  // get(index) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__fetch_function__SensorStates__cylinder_states,  // fetch(index, &value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__assign_function__SensorStates__cylinder_states,  // assign(index, value) function pointer
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__resize_function__SensorStates__cylinder_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_members = {
  "mecha_control__msg",  // message namespace
  "SensorStates",  // message name
  3,  // number of fields
  sizeof(mecha_control__msg__SensorStates),
  mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_member_array,  // message members
  mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_type_support_handle = {
  0,
  &mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, msg, SensorStates)() {
  if (!mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_type_support_handle.typesupport_identifier) {
    mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecha_control__msg__SensorStates__rosidl_typesupport_introspection_c__SensorStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
