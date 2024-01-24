// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mecha_control/msg/detail/point_and_mecha_state_array__struct.hpp"
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

void PointAndMechaStateArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mecha_control::msg::PointAndMechaStateArray(_init);
}

void PointAndMechaStateArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mecha_control::msg::PointAndMechaStateArray *>(message_memory);
  typed_message->~PointAndMechaStateArray();
}

size_t size_function__PointAndMechaStateArray__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mecha_control::msg::PointAndMechaState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointAndMechaStateArray__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mecha_control::msg::PointAndMechaState> *>(untyped_member);
  return &member[index];
}

void * get_function__PointAndMechaStateArray__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mecha_control::msg::PointAndMechaState> *>(untyped_member);
  return &member[index];
}

void fetch_function__PointAndMechaStateArray__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mecha_control::msg::PointAndMechaState *>(
    get_const_function__PointAndMechaStateArray__points(untyped_member, index));
  auto & value = *reinterpret_cast<mecha_control::msg::PointAndMechaState *>(untyped_value);
  value = item;
}

void assign_function__PointAndMechaStateArray__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mecha_control::msg::PointAndMechaState *>(
    get_function__PointAndMechaStateArray__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const mecha_control::msg::PointAndMechaState *>(untyped_value);
  item = value;
}

void resize_function__PointAndMechaStateArray__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mecha_control::msg::PointAndMechaState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointAndMechaStateArray_message_member_array[1] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mecha_control::msg::PointAndMechaState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control::msg::PointAndMechaStateArray, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointAndMechaStateArray__points,  // size() function pointer
    get_const_function__PointAndMechaStateArray__points,  // get_const(index) function pointer
    get_function__PointAndMechaStateArray__points,  // get(index) function pointer
    fetch_function__PointAndMechaStateArray__points,  // fetch(index, &value) function pointer
    assign_function__PointAndMechaStateArray__points,  // assign(index, value) function pointer
    resize_function__PointAndMechaStateArray__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointAndMechaStateArray_message_members = {
  "mecha_control::msg",  // message namespace
  "PointAndMechaStateArray",  // message name
  1,  // number of fields
  sizeof(mecha_control::msg::PointAndMechaStateArray),
  PointAndMechaStateArray_message_member_array,  // message members
  PointAndMechaStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PointAndMechaStateArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointAndMechaStateArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointAndMechaStateArray_message_members,
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
get_message_type_support_handle<mecha_control::msg::PointAndMechaStateArray>()
{
  return &::mecha_control::msg::rosidl_typesupport_introspection_cpp::PointAndMechaStateArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecha_control, msg, PointAndMechaStateArray)() {
  return &::mecha_control::msg::rosidl_typesupport_introspection_cpp::PointAndMechaStateArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
