// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_Goal(_init);
}

void PathAndFeedback_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_Goal *>(message_memory);
  typed_message->~PathAndFeedback_Goal();
}

size_t size_function__PathAndFeedback_Goal__feedback_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathAndFeedback_Goal__feedback_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PathAndFeedback_Goal__feedback_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PathAndFeedback_Goal__feedback_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PathAndFeedback_Goal__feedback_indices(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PathAndFeedback_Goal__feedback_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PathAndFeedback_Goal__feedback_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PathAndFeedback_Goal__feedback_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_Goal_message_member_array[2] = {
  {
    "path_with_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pure_pursuit::msg::Path2DWithAngles>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_Goal, path_with_angles),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_Goal, feedback_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathAndFeedback_Goal__feedback_indices,  // size() function pointer
    get_const_function__PathAndFeedback_Goal__feedback_indices,  // get_const(index) function pointer
    get_function__PathAndFeedback_Goal__feedback_indices,  // get(index) function pointer
    fetch_function__PathAndFeedback_Goal__feedback_indices,  // fetch(index, &value) function pointer
    assign_function__PathAndFeedback_Goal__feedback_indices,  // assign(index, value) function pointer
    resize_function__PathAndFeedback_Goal__feedback_indices  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_Goal_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_Goal",  // message name
  2,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_Goal),
  PathAndFeedback_Goal_message_member_array,  // message members
  PathAndFeedback_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Goal>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_Goal)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_Result(_init);
}

void PathAndFeedback_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_Result *>(message_memory);
  typed_message->~PathAndFeedback_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_Result_message_member_array[1] = {
  {
    "final_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_Result, final_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_Result_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_Result",  // message name
  1,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_Result),
  PathAndFeedback_Result_message_member_array,  // message members
  PathAndFeedback_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Result>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_Result)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_Feedback(_init);
}

void PathAndFeedback_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_Feedback *>(message_memory);
  typed_message->~PathAndFeedback_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_Feedback_message_member_array[1] = {
  {
    "current_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_Feedback, current_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_Feedback_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_Feedback",  // message name
  1,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_Feedback),
  PathAndFeedback_Feedback_message_member_array,  // message members
  PathAndFeedback_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Feedback>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_Feedback)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_SendGoal_Request(_init);
}

void PathAndFeedback_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_SendGoal_Request *>(message_memory);
  typed_message->~PathAndFeedback_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_SendGoal_Request_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_SendGoal_Request),
  PathAndFeedback_SendGoal_Request_message_member_array,  // message members
  PathAndFeedback_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_SendGoal_Request>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_SendGoal_Request)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_SendGoal_Response(_init);
}

void PathAndFeedback_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_SendGoal_Response *>(message_memory);
  typed_message->~PathAndFeedback_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_SendGoal_Response_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_SendGoal_Response),
  PathAndFeedback_SendGoal_Response_message_member_array,  // message members
  PathAndFeedback_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_SendGoal_Response>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_SendGoal_Response)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PathAndFeedback_SendGoal_service_members = {
  "pure_pursuit::action",  // service namespace
  "PathAndFeedback_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PathAndFeedback_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pure_pursuit::action::PathAndFeedback_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pure_pursuit::action::PathAndFeedback_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_GetResult_Request(_init);
}

void PathAndFeedback_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_GetResult_Request *>(message_memory);
  typed_message->~PathAndFeedback_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_GetResult_Request_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_GetResult_Request),
  PathAndFeedback_GetResult_Request_message_member_array,  // message members
  PathAndFeedback_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_GetResult_Request>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_GetResult_Request)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_GetResult_Response(_init);
}

void PathAndFeedback_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_GetResult_Response *>(message_memory);
  typed_message->~PathAndFeedback_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_GetResult_Response_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_GetResult_Response),
  PathAndFeedback_GetResult_Response_message_member_array,  // message members
  PathAndFeedback_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_GetResult_Response>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_GetResult_Response)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PathAndFeedback_GetResult_service_members = {
  "pure_pursuit::action",  // service namespace
  "PathAndFeedback_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PathAndFeedback_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pure_pursuit::action::PathAndFeedback_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::pure_pursuit::action::PathAndFeedback_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<pure_pursuit::action::PathAndFeedback_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pure_pursuit
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathAndFeedback_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pure_pursuit::action::PathAndFeedback_FeedbackMessage(_init);
}

void PathAndFeedback_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pure_pursuit::action::PathAndFeedback_FeedbackMessage *>(message_memory);
  typed_message->~PathAndFeedback_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathAndFeedback_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit::action::PathAndFeedback_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathAndFeedback_FeedbackMessage_message_members = {
  "pure_pursuit::action",  // message namespace
  "PathAndFeedback_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pure_pursuit::action::PathAndFeedback_FeedbackMessage),
  PathAndFeedback_FeedbackMessage_message_member_array,  // message members
  PathAndFeedback_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PathAndFeedback_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathAndFeedback_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathAndFeedback_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace pure_pursuit


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pure_pursuit::action::PathAndFeedback_FeedbackMessage>()
{
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pure_pursuit, action, PathAndFeedback_FeedbackMessage)() {
  return &::pure_pursuit::action::rosidl_typesupport_introspection_cpp::PathAndFeedback_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
