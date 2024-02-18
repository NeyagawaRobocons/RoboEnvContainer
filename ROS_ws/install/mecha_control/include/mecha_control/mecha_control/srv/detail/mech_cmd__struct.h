// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_H_
#define MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  mecha_control__srv__MechCmd_Request__STOP = 0
};

/// Constant 'READY'.
enum
{
  mecha_control__srv__MechCmd_Request__READY = 1
};

/// Constant 'EXPAND'.
enum
{
  mecha_control__srv__MechCmd_Request__EXPAND = 2
};

/// Constant 'CONTRACT'.
enum
{
  mecha_control__srv__MechCmd_Request__CONTRACT = 3
};

/// Constant 'CLAMP'.
enum
{
  mecha_control__srv__MechCmd_Request__CLAMP = 4
};

/// Constant 'UNCLAMP'.
enum
{
  mecha_control__srv__MechCmd_Request__UNCLAMP = 5
};

/// Constant 'EXPAND_AND_UNCLAMP'.
enum
{
  mecha_control__srv__MechCmd_Request__EXPAND_AND_UNCLAMP = 6
};

/// Constant 'CLAMP_AND_CONTRACT'.
enum
{
  mecha_control__srv__MechCmd_Request__CLAMP_AND_CONTRACT = 7
};

/// Constant 'EXPAND_AND_PLACE'.
enum
{
  mecha_control__srv__MechCmd_Request__EXPAND_AND_PLACE = 8
};

/// Constant 'EXPAND_AND_PLACE_AND_CONTRACT'.
enum
{
  mecha_control__srv__MechCmd_Request__EXPAND_AND_PLACE_AND_CONTRACT = 9
};

/// Struct defined in srv/MechCmd in the package mecha_control.
typedef struct mecha_control__srv__MechCmd_Request
{
  /// request fields
  uint8_t command;
} mecha_control__srv__MechCmd_Request;

// Struct for a sequence of mecha_control__srv__MechCmd_Request.
typedef struct mecha_control__srv__MechCmd_Request__Sequence
{
  mecha_control__srv__MechCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__srv__MechCmd_Request__Sequence;


// Constants defined in the message

/// Constant 'OK'.
enum
{
  mecha_control__srv__MechCmd_Response__OK = 0
};

/// Constant 'ERR_UNEXPECTED_ARG'.
enum
{
  mecha_control__srv__MechCmd_Response__ERR_UNEXPECTED_ARG = 1
};

/// Constant 'ERR_CANNOT_PROCESS'.
enum
{
  mecha_control__srv__MechCmd_Response__ERR_CANNOT_PROCESS = 2
};

/// Struct defined in srv/MechCmd in the package mecha_control.
typedef struct mecha_control__srv__MechCmd_Response
{
  /// response fields
  uint8_t result;
} mecha_control__srv__MechCmd_Response;

// Struct for a sequence of mecha_control__srv__MechCmd_Response.
typedef struct mecha_control__srv__MechCmd_Response__Sequence
{
  mecha_control__srv__MechCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__srv__MechCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_H_
