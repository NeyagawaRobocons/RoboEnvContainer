// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Path2DWithAngles_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::msg::Path2DWithAngles(_init);
}

void Path2DWithAngles_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::msg::Path2DWithAngles *>(message_memory);
  typed_message->~Path2DWithAngles();
}

size_t size_function__Path2DWithAngles__path_with_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pure_pursuit::msg::PointAndAngle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Path2DWithAngles__path_with_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pure_pursuit::msg::PointAndAngle> *>(untyped_member);
  return &member[index];
}

void * get_function__Path2DWithAngles__path_with_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pure_pursuit::msg::PointAndAngle> *>(untyped_member);
  return &member[index];
}

void fetch_function__Path2DWithAngles__path_with_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pure_pursuit::msg::PointAndAngle *>(
    get_const_function__Path2DWithAngles__path_with_angles(untyped_member, index));
  auto & value = *reinterpret_cast<pure_pursuit::msg::PointAndAngle *>(untyped_value);
  value = item;
}

void assign_function__Path2DWithAngles__path_with_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pure_pursuit::msg::PointAndAngle *>(
    get_function__Path2DWithAngles__path_with_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const pure_pursuit::msg::PointAndAngle *>(untyped_value);
  item = value;
}

void resize_function__Path2DWithAngles__path_with_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pure_pursuit::msg::PointAndAngle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Path2DWithAngles_message_member_array[1] = {
  {
    "path_with_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pure_pursuit::msg::PointAndAngle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::msg::Path2DWithAngles, path_with_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Path2DWithAngles__path_with_angles,  // size() function pointer
    get_const_function__Path2DWithAngles__path_with_angles,  // get_const(index) function pointer
    get_function__Path2DWithAngles__path_with_angles,  // get(index) function pointer
    fetch_function__Path2DWithAngles__path_with_angles,  // fetch(index, &value) function pointer
    assign_function__Path2DWithAngles__path_with_angles,  // assign(index, value) function pointer
    resize_function__Path2DWithAngles__path_with_angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Path2DWithAngles_message_members = {
  "pure_pursuit::msg",  // message namespace
  "Path2DWithAngles",  // message name
  1,  // number of fields
  sizeof(pure_pursuit::msg::Path2DWithAngles),
  Path2DWithAngles_message_member_array,  // message members
  Path2DWithAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  Path2DWithAngles_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Path2DWithAngles_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Path2DWithAngles_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::msg::Path2DWithAngles>()
{
  return &::pure_pursuit::msg::rosidl_typesupport_introspection_cpp::Path2DWithAngles_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, msg, Path2DWithAngles)() {
  return &::pure_pursuit::msg::rosidl_typesupport_introspection_cpp::Path2DWithAngles_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
