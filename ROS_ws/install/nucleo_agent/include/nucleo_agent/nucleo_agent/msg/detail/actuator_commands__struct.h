// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_H_
#define NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_positions'
// Member 'cylinder_states'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorCommands in the package nucleo_agent.
typedef struct nucleo_agent__msg__ActuatorCommands
{
  /// モータの位置や角度を制御するための値
  rosidl_runtime_c__double__Sequence motor_positions;
  /// エアシリンダのオン/オフ状態
  rosidl_runtime_c__boolean__Sequence cylinder_states;
} nucleo_agent__msg__ActuatorCommands;

// Struct for a sequence of nucleo_agent__msg__ActuatorCommands.
typedef struct nucleo_agent__msg__ActuatorCommands__Sequence
{
  nucleo_agent__msg__ActuatorCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nucleo_agent__msg__ActuatorCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_H_
