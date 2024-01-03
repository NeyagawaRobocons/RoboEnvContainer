// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_H_
#define MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MechaState in the package mecha_control.
/**
  * mecha_control/msg/MechaState.msg
  * 0: 準備
  * 1: 展開
  * 2: 回収
  * 3: 設置
  * false: ぼんぼりオフ
  * true: ぼんぼり点灯
 */
typedef struct mecha_control__msg__MechaState
{
  uint8_t daiza_state;
  uint8_t hina_state;
  bool bonbori_state;
} mecha_control__msg__MechaState;

// Struct for a sequence of mecha_control__msg__MechaState.
typedef struct mecha_control__msg__MechaState__Sequence
{
  mecha_control__msg__MechaState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__msg__MechaState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_H_
