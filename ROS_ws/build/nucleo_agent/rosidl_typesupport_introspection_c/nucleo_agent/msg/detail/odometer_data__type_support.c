// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nucleo_agent/msg/detail/odometer_data__rosidl_typesupport_introspection_c.h"
#include "nucleo_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nucleo_agent/msg/detail/odometer_data__functions.h"
#include "nucleo_agent/msg/detail/odometer_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nucleo_agent__msg__OdometerData__init(message_memory);
}

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_fini_function(void * message_memory)
{
  nucleo_agent__msg__OdometerData__fini(message_memory);
}

size_t nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__size_function__OdometerData__rotation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__rotation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__rotation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__fetch_function__OdometerData__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__rotation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__assign_function__OdometerData__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__rotation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__size_function__OdometerData__angular_vel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__angular_vel(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__angular_vel(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__fetch_function__OdometerData__angular_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__angular_vel(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__assign_function__OdometerData__angular_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__angular_vel(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent__msg__OdometerData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent__msg__OdometerData, rotation),  // bytes offset in struct
    NULL,  // default value
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__size_function__OdometerData__rotation,  // size() function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__rotation,  // get_const(index) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__rotation,  // get(index) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__fetch_function__OdometerData__rotation,  // fetch(index, &value) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__assign_function__OdometerData__rotation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent__msg__OdometerData, angular_vel),  // bytes offset in struct
    NULL,  // default value
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__size_function__OdometerData__angular_vel,  // size() function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_const_function__OdometerData__angular_vel,  // get_const(index) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__get_function__OdometerData__angular_vel,  // get(index) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__fetch_function__OdometerData__angular_vel,  // fetch(index, &value) function pointer
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__assign_function__OdometerData__angular_vel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_members = {
  "nucleo_agent__msg",  // message namespace
  "OdometerData",  // message name
  3,  // number of fields
  sizeof(nucleo_agent__msg__OdometerData),
  nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_member_array,  // message members
  nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_init_function,  // function to initialize message memory (memory has to be allocated)
  nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_type_support_handle = {
  0,
  &nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nucleo_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nucleo_agent, msg, OdometerData)() {
  nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_type_support_handle.typesupport_identifier) {
    nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nucleo_agent__msg__OdometerData__rosidl_typesupport_introspection_c__OdometerData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
