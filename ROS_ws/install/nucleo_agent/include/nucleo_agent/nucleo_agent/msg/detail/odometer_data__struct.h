// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_H_
#define NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OdometerData in the package nucleo_agent.
/**
  * 計測輪の角変位のデータ
 */
typedef struct nucleo_agent__msg__OdometerData
{
  std_msgs__msg__Header header;
  /// 各計測輪の角変位
  double rotation[3];
  /// 各計測輪の角速度
  double angular_vel[3];
} nucleo_agent__msg__OdometerData;

// Struct for a sequence of nucleo_agent__msg__OdometerData.
typedef struct nucleo_agent__msg__OdometerData__Sequence
{
  nucleo_agent__msg__OdometerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nucleo_agent__msg__OdometerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_H_
