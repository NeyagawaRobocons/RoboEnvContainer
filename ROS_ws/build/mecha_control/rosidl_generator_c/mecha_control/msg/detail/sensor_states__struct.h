// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_H_
#define MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'potentiometer_angles'
// Member 'limit_switch_states'
// Member 'cylinder_states'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorStates in the package mecha_control.
/**
  * mecha_control/msg/SensorStates.msg
 */
typedef struct mecha_control__msg__SensorStates
{
  /// ポテンショメータで測定される角度
  rosidl_runtime_c__double__Sequence potentiometer_angles;
  /// リミットスイッチのオン/オフ状態
  rosidl_runtime_c__boolean__Sequence limit_switch_states;
  /// シリンダの状態
  rosidl_runtime_c__boolean__Sequence cylinder_states;
} mecha_control__msg__SensorStates;

// Struct for a sequence of mecha_control__msg__SensorStates.
typedef struct mecha_control__msg__SensorStates__Sequence
{
  mecha_control__msg__SensorStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__msg__SensorStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_H_
