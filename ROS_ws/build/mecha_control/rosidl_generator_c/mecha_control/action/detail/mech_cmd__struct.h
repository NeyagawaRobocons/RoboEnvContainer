// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:action/MechCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__MECH_CMD__STRUCT_H_
#define MECHA_CONTROL__ACTION__DETAIL__MECH_CMD__STRUCT_H_

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
  mecha_control__action__MechCmd_Goal__STOP = 0
};

/// Constant 'READY'.
enum
{
  mecha_control__action__MechCmd_Goal__READY = 1
};

/// Constant 'EXPAND'.
enum
{
  mecha_control__action__MechCmd_Goal__EXPAND = 2
};

/// Constant 'CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Goal__CONTRACT = 3
};

/// Constant 'CLAMP'.
enum
{
  mecha_control__action__MechCmd_Goal__CLAMP = 4
};

/// Constant 'UNCLAMP'.
enum
{
  mecha_control__action__MechCmd_Goal__UNCLAMP = 5
};

/// Constant 'EXPAND_AND_UNCLAMP'.
enum
{
  mecha_control__action__MechCmd_Goal__EXPAND_AND_UNCLAMP = 6
};

/// Constant 'CLAMP_AND_CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Goal__CLAMP_AND_CONTRACT = 7
};

/// Constant 'EXPAND_AND_PLACE'.
enum
{
  mecha_control__action__MechCmd_Goal__EXPAND_AND_PLACE = 8
};

/// Constant 'EXPAND_AND_PLACE_AND_CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Goal__EXPAND_AND_PLACE_AND_CONTRACT = 9
};

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_Goal
{
  /// goal fields
  uint8_t command;
} mecha_control__action__MechCmd_Goal;

// Struct for a sequence of mecha_control__action__MechCmd_Goal.
typedef struct mecha_control__action__MechCmd_Goal__Sequence
{
  mecha_control__action__MechCmd_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_Goal__Sequence;


// Constants defined in the message

/// Constant 'OK'.
enum
{
  mecha_control__action__MechCmd_Result__OK = 0
};

/// Constant 'ABORTED'.
enum
{
  mecha_control__action__MechCmd_Result__ABORTED = 1
};

/// Constant 'ERR_UNEXPECTED_ARG'.
enum
{
  mecha_control__action__MechCmd_Result__ERR_UNEXPECTED_ARG = 2
};

/// Constant 'ERR_CANNOT_PROCESS'.
enum
{
  mecha_control__action__MechCmd_Result__ERR_CANNOT_PROCESS = 3
};

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_Result
{
  /// result fields
  uint8_t result;
} mecha_control__action__MechCmd_Result;

// Struct for a sequence of mecha_control__action__MechCmd_Result.
typedef struct mecha_control__action__MechCmd_Result__Sequence
{
  mecha_control__action__MechCmd_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_Result__Sequence;


// Constants defined in the message

/// Constant 'STOPPING'.
enum
{
  mecha_control__action__MechCmd_Feedback__STOPPING = 0
};

/// Constant 'PREV_ACTION_ABORTED'.
enum
{
  mecha_control__action__MechCmd_Feedback__PREV_ACTION_ABORTED = 1
};

/// Constant 'EXPANDED_AT_EXPAND_AND_UNCLAMP'.
enum
{
  mecha_control__action__MechCmd_Feedback__EXPANDED_AT_EXPAND_AND_UNCLAMP = 2
};

/// Constant 'CLAMPED_AT_CLAMP_AND_CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Feedback__CLAMPED_AT_CLAMP_AND_CONTRACT = 3
};

/// Constant 'EXPANDED_AT_EXPAND_AND_PLACE'.
enum
{
  mecha_control__action__MechCmd_Feedback__EXPANDED_AT_EXPAND_AND_PLACE = 4
};

/// Constant 'EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Feedback__EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT = 5
};

/// Constant 'CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT'.
enum
{
  mecha_control__action__MechCmd_Feedback__CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT = 6
};

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_Feedback
{
  /// feedback fields
  uint8_t feedback;
} mecha_control__action__MechCmd_Feedback;

// Struct for a sequence of mecha_control__action__MechCmd_Feedback.
typedef struct mecha_control__action__MechCmd_Feedback__Sequence
{
  mecha_control__action__MechCmd_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mecha_control/action/detail/mech_cmd__struct.h"

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mecha_control__action__MechCmd_Goal goal;
} mecha_control__action__MechCmd_SendGoal_Request;

// Struct for a sequence of mecha_control__action__MechCmd_SendGoal_Request.
typedef struct mecha_control__action__MechCmd_SendGoal_Request__Sequence
{
  mecha_control__action__MechCmd_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mecha_control__action__MechCmd_SendGoal_Response;

// Struct for a sequence of mecha_control__action__MechCmd_SendGoal_Response.
typedef struct mecha_control__action__MechCmd_SendGoal_Response__Sequence
{
  mecha_control__action__MechCmd_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mecha_control__action__MechCmd_GetResult_Request;

// Struct for a sequence of mecha_control__action__MechCmd_GetResult_Request.
typedef struct mecha_control__action__MechCmd_GetResult_Request__Sequence
{
  mecha_control__action__MechCmd_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mecha_control/action/detail/mech_cmd__struct.h"

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_GetResult_Response
{
  int8_t status;
  mecha_control__action__MechCmd_Result result;
} mecha_control__action__MechCmd_GetResult_Response;

// Struct for a sequence of mecha_control__action__MechCmd_GetResult_Response.
typedef struct mecha_control__action__MechCmd_GetResult_Response__Sequence
{
  mecha_control__action__MechCmd_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mecha_control/action/detail/mech_cmd__struct.h"

/// Struct defined in action/MechCmd in the package mecha_control.
typedef struct mecha_control__action__MechCmd_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mecha_control__action__MechCmd_Feedback feedback;
} mecha_control__action__MechCmd_FeedbackMessage;

// Struct for a sequence of mecha_control__action__MechCmd_FeedbackMessage.
typedef struct mecha_control__action__MechCmd_FeedbackMessage__Sequence
{
  mecha_control__action__MechCmd_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__MechCmd_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__ACTION__DETAIL__MECH_CMD__STRUCT_H_
