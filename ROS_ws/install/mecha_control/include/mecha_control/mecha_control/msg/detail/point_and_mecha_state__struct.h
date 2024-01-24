// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_H_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "mecha_control/msg/detail/mecha_state__struct.h"

/// Struct defined in msg/PointAndMechaState in the package mecha_control.
/**
  * PointAndMechaState.msg
 */
typedef struct mecha_control__msg__PointAndMechaState
{
  /// X座標
  double x;
  /// Y座標
  double y;
  /// ロボットの向き（ラジアンまたは度）
  double angle;
  /// そのポイントでのコマンド
  mecha_control__msg__MechaState command;
} mecha_control__msg__PointAndMechaState;

// Struct for a sequence of mecha_control__msg__PointAndMechaState.
typedef struct mecha_control__msg__PointAndMechaState__Sequence
{
  mecha_control__msg__PointAndMechaState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__msg__PointAndMechaState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_H_
