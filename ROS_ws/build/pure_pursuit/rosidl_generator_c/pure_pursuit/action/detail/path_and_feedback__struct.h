// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_H_
#define PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_with_angles'
#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.h"
// Member 'feedback_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_Goal
{
  /// ゴール定義
  pure_pursuit__msg__Path2DWithAngles path_with_angles;
  rosidl_runtime_c__int32__Sequence feedback_indices;
} pure_pursuit__action__PathAndFeedback_Goal;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_Goal.
typedef struct pure_pursuit__action__PathAndFeedback_Goal__Sequence
{
  pure_pursuit__action__PathAndFeedback_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_Result
{
  int32_t final_index;
} pure_pursuit__action__PathAndFeedback_Result;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_Result.
typedef struct pure_pursuit__action__PathAndFeedback_Result__Sequence
{
  pure_pursuit__action__PathAndFeedback_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_Feedback
{
  int32_t current_index;
} pure_pursuit__action__PathAndFeedback_Feedback;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_Feedback.
typedef struct pure_pursuit__action__PathAndFeedback_Feedback__Sequence
{
  pure_pursuit__action__PathAndFeedback_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pure_pursuit/action/detail/path_and_feedback__struct.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pure_pursuit__action__PathAndFeedback_Goal goal;
} pure_pursuit__action__PathAndFeedback_SendGoal_Request;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_SendGoal_Request.
typedef struct pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence
{
  pure_pursuit__action__PathAndFeedback_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pure_pursuit__action__PathAndFeedback_SendGoal_Response;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_SendGoal_Response.
typedef struct pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence
{
  pure_pursuit__action__PathAndFeedback_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pure_pursuit__action__PathAndFeedback_GetResult_Request;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_GetResult_Request.
typedef struct pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence
{
  pure_pursuit__action__PathAndFeedback_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_GetResult_Response
{
  int8_t status;
  pure_pursuit__action__PathAndFeedback_Result result;
} pure_pursuit__action__PathAndFeedback_GetResult_Response;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_GetResult_Response.
typedef struct pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence
{
  pure_pursuit__action__PathAndFeedback_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.h"

/// Struct defined in action/PathAndFeedback in the package pure_pursuit.
typedef struct pure_pursuit__action__PathAndFeedback_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pure_pursuit__action__PathAndFeedback_Feedback feedback;
} pure_pursuit__action__PathAndFeedback_FeedbackMessage;

// Struct for a sequence of pure_pursuit__action__PathAndFeedback_FeedbackMessage.
typedef struct pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence
{
  pure_pursuit__action__PathAndFeedback_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_H_
