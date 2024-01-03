// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nucleo_agent/msg/detail/actuator_commands__rosidl_typesupport_introspection_c.h"
#include "nucleo_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nucleo_agent/msg/detail/actuator_commands__functions.h"
#include "nucleo_agent/msg/detail/actuator_commands__struct.h"


// Include directives for member types
// Member `motor_positions`
// Member `cylinder_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nucleo_agent__msg__ActuatorCommands__init(message_memory);
}

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_fini_function(void * message_memory)
{
  nucleo_agent__msg__ActuatorCommands__fini(message_memory);
}

size_t nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__size_function__ActuatorCommands__motor_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__motor_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__motor_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__fetch_function__ActuatorCommands__motor_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__motor_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__assign_function__ActuatorCommands__motor_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__motor_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__resize_function__ActuatorCommands__motor_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__size_function__ActuatorCommands__cylinder_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__cylinder_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__cylinder_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__fetch_function__ActuatorCommands__cylinder_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__cylinder_states(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__assign_function__ActuatorCommands__cylinder_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__cylinder_states(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__resize_function__ActuatorCommands__cylinder_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_member_array[2] = {
  {
    "motor_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent__msg__ActuatorCommands, motor_positions),  // bytes offset in struct
    NULL,  // default value
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__size_function__ActuatorCommands__motor_positions,  // size() function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__motor_positions,  // get_const(index) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__motor_positions,  // get(index) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__fetch_function__ActuatorCommands__motor_positions,  // fetch(index, &value) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__assign_function__ActuatorCommands__motor_positions,  // assign(index, value) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__resize_function__ActuatorCommands__motor_positions  // resize(index) function pointer
  },
  {
    "cylinder_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent__msg__ActuatorCommands, cylinder_states),  // bytes offset in struct
    NULL,  // default value
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__size_function__ActuatorCommands__cylinder_states,  // size() function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_const_function__ActuatorCommands__cylinder_states,  // get_const(index) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__get_function__ActuatorCommands__cylinder_states,  // get(index) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__fetch_function__ActuatorCommands__cylinder_states,  // fetch(index, &value) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__assign_function__ActuatorCommands__cylinder_states,  // assign(index, value) function pointer
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__resize_function__ActuatorCommands__cylinder_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_members = {
  "nucleo_agent__msg",  // message namespace
  "ActuatorCommands",  // message name
  2,  // number of fields
  sizeof(nucleo_agent__msg__ActuatorCommands),
  nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_member_array,  // message members
  nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_type_support_handle = {
  0,
  &nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nucleo_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nucleo_agent, msg, ActuatorCommands)() {
  if (!nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_type_support_handle.typesupport_identifier) {
    nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nucleo_agent__msg__ActuatorCommands__rosidl_typesupport_introspection_c__ActuatorCommands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
