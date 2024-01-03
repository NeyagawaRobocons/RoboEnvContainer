// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mecha_control:msg/SensorStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mecha_control/msg/detail/sensor_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mecha_control
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mecha_control::msg::SensorStates(_init);
}

void SensorStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mecha_control::msg::SensorStates *>(message_memory);
  typed_message->~SensorStates();
}

size_t size_function__SensorStates__potentiometer_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorStates__potentiometer_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorStates__potentiometer_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorStates__potentiometer_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SensorStates__potentiometer_angles(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SensorStates__potentiometer_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SensorStates__potentiometer_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SensorStates__potentiometer_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorStates__limit_switch_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SensorStates__limit_switch_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SensorStates__limit_switch_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SensorStates__limit_switch_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorStates__cylinder_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SensorStates__cylinder_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SensorStates__cylinder_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SensorStates__cylinder_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorStates_message_member_array[3] = {
  {
    "potentiometer_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control::msg::SensorStates, potentiometer_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorStates__potentiometer_angles,  // size() function pointer
    get_const_function__SensorStates__potentiometer_angles,  // get_const(index) function pointer
    get_function__SensorStates__potentiometer_angles,  // get(index) function pointer
    fetch_function__SensorStates__potentiometer_angles,  // fetch(index, &value) function pointer
    assign_function__SensorStates__potentiometer_angles,  // assign(index, value) function pointer
    resize_function__SensorStates__potentiometer_angles  // resize(index) function pointer
  },
  {
    "limit_switch_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control::msg::SensorStates, limit_switch_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorStates__limit_switch_states,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SensorStates__limit_switch_states,  // fetch(index, &value) function pointer
    assign_function__SensorStates__limit_switch_states,  // assign(index, value) function pointer
    resize_function__SensorStates__limit_switch_states  // resize(index) function pointer
  },
  {
    "cylinder_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control::msg::SensorStates, cylinder_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorStates__cylinder_states,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SensorStates__cylinder_states,  // fetch(index, &value) function pointer
    assign_function__SensorStates__cylinder_states,  // assign(index, value) function pointer
    resize_function__SensorStates__cylinder_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorStates_message_members = {
  "mecha_control::msg",  // message namespace
  "SensorStates",  // message name
  3,  // number of fields
  sizeof(mecha_control::msg::SensorStates),
  SensorStates_message_member_array,  // message members
  SensorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mecha_control


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecha_control::msg::SensorStates>()
{
  return &::mecha_control::msg::rosidl_typesupport_introspection_cpp::SensorStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecha_control, msg, SensorStates)() {
  return &::mecha_control::msg::rosidl_typesupport_introspection_cpp::SensorStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
