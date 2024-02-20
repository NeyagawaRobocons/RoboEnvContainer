// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecha_control:action/HinaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_H_
#define MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_H_

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
  mecha_control__action__HinaCmd_Goal__STOP = 0
};

/// Constant 'READY'.
enum
{
  mecha_control__action__HinaCmd_Goal__READY = 1
};

/// Constant 'UP'.
enum
{
  mecha_control__action__HinaCmd_Goal__UP = 2
};

/// Constant 'DOWN'.
enum
{
  mecha_control__action__HinaCmd_Goal__DOWN = 3
};

/// Constant 'POS_CARRY'.
enum
{
  mecha_control__action__HinaCmd_Goal__POS_CARRY = 4
};

/// Constant 'POS_TAKE'.
enum
{
  mecha_control__action__HinaCmd_Goal__POS_TAKE = 5
};

/// Constant 'POS_PLACE'.
enum
{
  mecha_control__action__HinaCmd_Goal__POS_PLACE = 6
};

/// Constant 'GUIDE_EXPAND'.
enum
{
  mecha_control__action__HinaCmd_Goal__GUIDE_EXPAND = 7
};

/// Constant 'GUIDE_CONTRACT'.
enum
{
  mecha_control__action__HinaCmd_Goal__GUIDE_CONTRACT = 8
};

/// Constant 'LATCH_UNLOCK'.
enum
{
  mecha_control__action__HinaCmd_Goal__LATCH_UNLOCK = 9
};

/// Constant 'LATCH_UNLOCK_1'.
enum
{
  mecha_control__action__HinaCmd_Goal__LATCH_UNLOCK_1 = 10
};

/// Constant 'LATCH_UNLOCK_2'.
enum
{
  mecha_control__action__HinaCmd_Goal__LATCH_UNLOCK_2 = 11
};

/// Constant 'DOWN_AND_TAKE'.
enum
{
  mecha_control__action__HinaCmd_Goal__DOWN_AND_TAKE = 12
};

/// Constant 'UP_AND_CARRY'.
enum
{
  mecha_control__action__HinaCmd_Goal__UP_AND_CARRY = 13
};

/// Constant 'UP_AND_PLACE'.
enum
{
  mecha_control__action__HinaCmd_Goal__UP_AND_PLACE = 14
};

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_Goal
{
  /// goal fields
  uint8_t command;
} mecha_control__action__HinaCmd_Goal;

// Struct for a sequence of mecha_control__action__HinaCmd_Goal.
typedef struct mecha_control__action__HinaCmd_Goal__Sequence
{
  mecha_control__action__HinaCmd_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_Goal__Sequence;


// Constants defined in the message

/// Constant 'OK'.
enum
{
  mecha_control__action__HinaCmd_Result__OK = 0
};

/// Constant 'ABORTED'.
enum
{
  mecha_control__action__HinaCmd_Result__ABORTED = 1
};

/// Constant 'ERR_UNEXPECTED_ARG'.
enum
{
  mecha_control__action__HinaCmd_Result__ERR_UNEXPECTED_ARG = 2
};

/// Constant 'ERR_CANNOT_PROCESS'.
enum
{
  mecha_control__action__HinaCmd_Result__ERR_CANNOT_PROCESS = 3
};

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_Result
{
  /// result fields
  uint8_t result;
} mecha_control__action__HinaCmd_Result;

// Struct for a sequence of mecha_control__action__HinaCmd_Result.
typedef struct mecha_control__action__HinaCmd_Result__Sequence
{
  mecha_control__action__HinaCmd_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_Result__Sequence;


// Constants defined in the message

/// Constant 'STOPPING'.
enum
{
  mecha_control__action__HinaCmd_Feedback__STOPPING = 0
};

/// Constant 'PREV_ACTION_ABORTED'.
enum
{
  mecha_control__action__HinaCmd_Feedback__PREV_ACTION_ABORTED = 1
};

/// Constant 'DOWN_AT_DOWN_AND_TAKE'.
enum
{
  mecha_control__action__HinaCmd_Feedback__DOWN_AT_DOWN_AND_TAKE = 2
};

/// Constant 'UP_AT_UP_AND_PLACE'.
enum
{
  mecha_control__action__HinaCmd_Feedback__UP_AT_UP_AND_PLACE = 3
};

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_Feedback
{
  /// feedback fields
  uint8_t feedback;
} mecha_control__action__HinaCmd_Feedback;

// Struct for a sequence of mecha_control__action__HinaCmd_Feedback.
typedef struct mecha_control__action__HinaCmd_Feedback__Sequence
{
  mecha_control__action__HinaCmd_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mecha_control/action/detail/hina_cmd__struct.h"

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mecha_control__action__HinaCmd_Goal goal;
} mecha_control__action__HinaCmd_SendGoal_Request;

// Struct for a sequence of mecha_control__action__HinaCmd_SendGoal_Request.
typedef struct mecha_control__action__HinaCmd_SendGoal_Request__Sequence
{
  mecha_control__action__HinaCmd_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mecha_control__action__HinaCmd_SendGoal_Response;

// Struct for a sequence of mecha_control__action__HinaCmd_SendGoal_Response.
typedef struct mecha_control__action__HinaCmd_SendGoal_Response__Sequence
{
  mecha_control__action__HinaCmd_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mecha_control__action__HinaCmd_GetResult_Request;

// Struct for a sequence of mecha_control__action__HinaCmd_GetResult_Request.
typedef struct mecha_control__action__HinaCmd_GetResult_Request__Sequence
{
  mecha_control__action__HinaCmd_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_GetResult_Response
{
  int8_t status;
  mecha_control__action__HinaCmd_Result result;
} mecha_control__action__HinaCmd_GetResult_Response;

// Struct for a sequence of mecha_control__action__HinaCmd_GetResult_Response.
typedef struct mecha_control__action__HinaCmd_GetResult_Response__Sequence
{
  mecha_control__action__HinaCmd_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"

/// Struct defined in action/HinaCmd in the package mecha_control.
typedef struct mecha_control__action__HinaCmd_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mecha_control__action__HinaCmd_Feedback feedback;
} mecha_control__action__HinaCmd_FeedbackMessage;

// Struct for a sequence of mecha_control__action__HinaCmd_FeedbackMessage.
typedef struct mecha_control__action__HinaCmd_FeedbackMessage__Sequence
{
  mecha_control__action__HinaCmd_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecha_control__action__HinaCmd_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_H_
