// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_H_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "mecha_control/msg/detail/point_and_mecha_state__struct.h"

/// Struct defined in msg/PointAndMechaStateArray in the package mecha_control.
/**
  * PointAndMechaStateArray.msg
 */
typedef struct mecha_control__msg__PointAndMechaStateArray
{
  /// パスポイントとMechaStateコマンドの配列
  mecha_control__msg__PointAndMechaState__Sequence points;
} mecha_control__msg__PointAndMechaStateArray;

// Struct for a sequence of mecha_control__msg__PointAndMechaStateArray.
typedef struct mecha_control__msg__PointAndMechaStateArray__Sequence
{
  mecha_control__msg__PointAndMechaStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__msg__PointAndMechaStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_H_
