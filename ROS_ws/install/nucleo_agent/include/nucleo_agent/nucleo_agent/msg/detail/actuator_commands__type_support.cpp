// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nucleo_agent/msg/detail/actuator_commands__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nucleo_agent
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActuatorCommands_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nucleo_agent::msg::ActuatorCommands(_init);
}

void ActuatorCommands_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nucleo_agent::msg::ActuatorCommands *>(message_memory);
  typed_message->~ActuatorCommands();
}

size_t size_function__ActuatorCommands__motor_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCommands__motor_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCommands__motor_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCommands__motor_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ActuatorCommands__motor_positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCommands__motor_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ActuatorCommands__motor_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCommands__motor_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCommands__cylinder_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__ActuatorCommands__cylinder_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__ActuatorCommands__cylinder_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__ActuatorCommands__cylinder_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorCommands_message_member_array[2] = {
  {
    "motor_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent::msg::ActuatorCommands, motor_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCommands__motor_positions,  // size() function pointer
    get_const_function__ActuatorCommands__motor_positions,  // get_const(index) function pointer
    get_function__ActuatorCommands__motor_positions,  // get(index) function pointer
    fetch_function__ActuatorCommands__motor_positions,  // fetch(index, &value) function pointer
    assign_function__ActuatorCommands__motor_positions,  // assign(index, value) function pointer
    resize_function__ActuatorCommands__motor_positions  // resize(index) function pointer
  },
  {
    "cylinder_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nucleo_agent::msg::ActuatorCommands, cylinder_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCommands__cylinder_states,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__ActuatorCommands__cylinder_states,  // fetch(index, &value) function pointer
    assign_function__ActuatorCommands__cylinder_states,  // assign(index, value) function pointer
    resize_function__ActuatorCommands__cylinder_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorCommands_message_members = {
  "nucleo_agent::msg",  // message namespace
  "ActuatorCommands",  // message name
  2,  // number of fields
  sizeof(nucleo_agent::msg::ActuatorCommands),
  ActuatorCommands_message_member_array,  // message members
  ActuatorCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorCommands_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorCommands_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorCommands_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nucleo_agent


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nucleo_agent::msg::ActuatorCommands>()
{
  return &::nucleo_agent::msg::rosidl_typesupport_introspection_cpp::ActuatorCommands_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nucleo_agent, msg, ActuatorCommands)() {
  return &::nucleo_agent::msg::rosidl_typesupport_introspection_cpp::ActuatorCommands_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
