// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_H_
#define PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointAndAngle in the package pure_pursuit.
/**
  * PointAndAngle.msg
 */
typedef struct pure_pursuit__msg__PointAndAngle
{
  double x;
  double y;
  double theta;
} pure_pursuit__msg__PointAndAngle;

// Struct for a sequence of pure_pursuit__msg__PointAndAngle.
typedef struct pure_pursuit__msg__PointAndAngle__Sequence
{
  pure_pursuit__msg__PointAndAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__msg__PointAndAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_H_
