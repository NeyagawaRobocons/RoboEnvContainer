// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_H_
#define PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_with_angles'
#include "pure_pursuit/msg/detail/point_and_angle__struct.h"

/// Struct defined in msg/Path2DWithAngles in the package pure_pursuit.
/**
  * Path2DWithAngles.msg
 */
typedef struct pure_pursuit__msg__Path2DWithAngles
{
  pure_pursuit__msg__PointAndAngle__Sequence path_with_angles;
} pure_pursuit__msg__Path2DWithAngles;

// Struct for a sequence of pure_pursuit__msg__Path2DWithAngles.
typedef struct pure_pursuit__msg__Path2DWithAngles__Sequence
{
  pure_pursuit__msg__Path2DWithAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__msg__Path2DWithAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_H_
