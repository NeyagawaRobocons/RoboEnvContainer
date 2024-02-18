// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
#include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pure_pursuit/action/detail/path_and_feedback__functions.h"
#include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `path_with_angles`
#include "pure_pursuit/msg/path2_d_with_angles.h"
// Member `path_with_angles`
#include "pure_pursuit/msg/detail/path2_d_with_angles__rosidl_typesupport_introspection_c.h"
// Member `feedback_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_Goal__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_Goal__fini(message_memory);
}

size_t pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__size_function__PathAndFeedback_Goal__feedback_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_const_function__PathAndFeedback_Goal__feedback_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_function__PathAndFeedback_Goal__feedback_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__fetch_function__PathAndFeedback_Goal__feedback_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_const_function__PathAndFeedback_Goal__feedback_indices(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__assign_function__PathAndFeedback_Goal__feedback_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_function__PathAndFeedback_Goal__feedback_indices(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__resize_function__PathAndFeedback_Goal__feedback_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_member_array[2] = {
  {
    "path_with_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_Goal, path_with_angles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_Goal, feedback_indices),  // bytes offset in struct
    NULL,  // default value
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__size_function__PathAndFeedback_Goal__feedback_indices,  // size() function pointer
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_const_function__PathAndFeedback_Goal__feedback_indices,  // get_const(index) function pointer
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__get_function__PathAndFeedback_Goal__feedback_indices,  // get(index) function pointer
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__fetch_function__PathAndFeedback_Goal__feedback_indices,  // fetch(index, &value) function pointer
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__assign_function__PathAndFeedback_Goal__feedback_indices,  // assign(index, value) function pointer
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__resize_function__PathAndFeedback_Goal__feedback_indices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_Goal",  // message name
  2,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_Goal),
  pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Goal)() {
  pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, msg, Path2DWithAngles)();
  if (!pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_Goal__rosidl_typesupport_introspection_c__PathAndFeedback_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_Result__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_member_array[1] = {
  {
    "final_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_Result, final_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_Result",  // message name
  1,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_Result),
  pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Result)() {
  if (!pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_Result__rosidl_typesupport_introspection_c__PathAndFeedback_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_Feedback__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_member_array[1] = {
  {
    "current_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_Feedback, current_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_Feedback",  // message name
  1,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_Feedback),
  pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Feedback)() {
  if (!pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_Feedback__rosidl_typesupport_introspection_c__PathAndFeedback_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pure_pursuit/action/path_and_feedback.h"
// Member `goal`
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_SendGoal_Request),
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Request)() {
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Goal)();
  if (!pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_SendGoal_Request__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_SendGoal_Response),
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Response)() {
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_SendGoal_Response__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_members = {
  "pure_pursuit__action",  // service namespace
  "PathAndFeedback_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_type_support_handle = {
  0,
  &pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal)() {
  if (!pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_SendGoal_Response)()->data;
  }

  return &pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_GetResult_Request__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_GetResult_Request),
  pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Request)() {
  pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_GetResult_Request__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pure_pursuit/action/path_and_feedback.h"
// Member `result`
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_GetResult_Response__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_GetResult_Response),
  pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Response)() {
  pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Result)();
  if (!pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_GetResult_Response__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_members = {
  "pure_pursuit__action",  // service namespace
  "PathAndFeedback_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_type_support_handle = {
  0,
  &pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult)() {
  if (!pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_GetResult_Response)()->data;
  }

  return &pure_pursuit__action__detail__path_and_feedback__rosidl_typesupport_introspection_c__PathAndFeedback_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__functions.h"
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pure_pursuit/action/path_and_feedback.h"
// Member `feedback`
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__init(message_memory);
}

void pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_fini_function(void * message_memory)
{
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__action__PathAndFeedback_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_members = {
  "pure_pursuit__action",  // message namespace
  "PathAndFeedback_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pure_pursuit__action__PathAndFeedback_FeedbackMessage),
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_member_array,  // message members
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_type_support_handle = {
  0,
  &pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_FeedbackMessage)() {
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, action, PathAndFeedback_Feedback)();
  if (!pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__action__PathAndFeedback_FeedbackMessage__rosidl_typesupport_introspection_c__PathAndFeedback_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
