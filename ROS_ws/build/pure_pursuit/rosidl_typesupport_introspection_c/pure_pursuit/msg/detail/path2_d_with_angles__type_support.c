// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pure_pursuit/msg/detail/path2_d_with_angles__rosidl_typesupport_introspection_c.h"
#include "pure_pursuit/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pure_pursuit/msg/detail/path2_d_with_angles__functions.h"
#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.h"


// Include directives for member types
// Member `path_with_angles`
#include "pure_pursuit/msg/point_and_angle.h"
// Member `path_with_angles`
#include "pure_pursuit/msg/detail/point_and_angle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pure_pursuit__msg__Path2DWithAngles__init(message_memory);
}

void pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_fini_function(void * message_memory)
{
  pure_pursuit__msg__Path2DWithAngles__fini(message_memory);
}

size_t pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__size_function__Path2DWithAngles__path_with_angles(
  const void * untyped_member)
{
  const pure_pursuit__msg__PointAndAngle__Sequence * member =
    (const pure_pursuit__msg__PointAndAngle__Sequence *)(untyped_member);
  return member->size;
}

const void * pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_const_function__Path2DWithAngles__path_with_angles(
  const void * untyped_member, size_t index)
{
  const pure_pursuit__msg__PointAndAngle__Sequence * member =
    (const pure_pursuit__msg__PointAndAngle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_function__Path2DWithAngles__path_with_angles(
  void * untyped_member, size_t index)
{
  pure_pursuit__msg__PointAndAngle__Sequence * member =
    (pure_pursuit__msg__PointAndAngle__Sequence *)(untyped_member);
  return &member->data[index];
}

void pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__fetch_function__Path2DWithAngles__path_with_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pure_pursuit__msg__PointAndAngle * item =
    ((const pure_pursuit__msg__PointAndAngle *)
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_const_function__Path2DWithAngles__path_with_angles(untyped_member, index));
  pure_pursuit__msg__PointAndAngle * value =
    (pure_pursuit__msg__PointAndAngle *)(untyped_value);
  *value = *item;
}

void pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__assign_function__Path2DWithAngles__path_with_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pure_pursuit__msg__PointAndAngle * item =
    ((pure_pursuit__msg__PointAndAngle *)
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_function__Path2DWithAngles__path_with_angles(untyped_member, index));
  const pure_pursuit__msg__PointAndAngle * value =
    (const pure_pursuit__msg__PointAndAngle *)(untyped_value);
  *item = *value;
}

bool pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__resize_function__Path2DWithAngles__path_with_angles(
  void * untyped_member, size_t size)
{
  pure_pursuit__msg__PointAndAngle__Sequence * member =
    (pure_pursuit__msg__PointAndAngle__Sequence *)(untyped_member);
  pure_pursuit__msg__PointAndAngle__Sequence__fini(member);
  return pure_pursuit__msg__PointAndAngle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_member_array[1] = {
  {
    "path_with_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pure_pursuit__msg__Path2DWithAngles, path_with_angles),  // bytes offset in struct
    NULL,  // default value
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__size_function__Path2DWithAngles__path_with_angles,  // size() function pointer
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_const_function__Path2DWithAngles__path_with_angles,  // get_const(index) function pointer
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__get_function__Path2DWithAngles__path_with_angles,  // get(index) function pointer
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__fetch_function__Path2DWithAngles__path_with_angles,  // fetch(index, &value) function pointer
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__assign_function__Path2DWithAngles__path_with_angles,  // assign(index, value) function pointer
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__resize_function__Path2DWithAngles__path_with_angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_members = {
  "pure_pursuit__msg",  // message namespace
  "Path2DWithAngles",  // message name
  1,  // number of fields
  sizeof(pure_pursuit__msg__Path2DWithAngles),
  pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_member_array,  // message members
  pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_type_support_handle = {
  0,
  &pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pure_pursuit
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, msg, Path2DWithAngles)() {
  pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pure_pursuit, msg, PointAndAngle)();
  if (!pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_type_support_handle.typesupport_identifier) {
    pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pure_pursuit__msg__Path2DWithAngles__rosidl_typesupport_introspection_c__Path2DWithAngles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
