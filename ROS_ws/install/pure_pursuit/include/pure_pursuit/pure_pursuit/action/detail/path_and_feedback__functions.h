// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__FUNCTIONS_H_
#define PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pure_pursuit/msg/rosidl_generator_c__visibility_control.h"

#include "pure_pursuit/action/detail/path_and_feedback__struct.h"

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_Goal
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__init(pure_pursuit__action__PathAndFeedback_Goal * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Goal__fini(pure_pursuit__action__PathAndFeedback_Goal * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Goal *
pure_pursuit__action__PathAndFeedback_Goal__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Goal__destroy(pure_pursuit__action__PathAndFeedback_Goal * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__are_equal(const pure_pursuit__action__PathAndFeedback_Goal * lhs, const pure_pursuit__action__PathAndFeedback_Goal * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__copy(
  const pure_pursuit__action__PathAndFeedback_Goal * input,
  pure_pursuit__action__PathAndFeedback_Goal * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__Sequence__init(pure_pursuit__action__PathAndFeedback_Goal__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Goal__Sequence__fini(pure_pursuit__action__PathAndFeedback_Goal__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Goal__Sequence *
pure_pursuit__action__PathAndFeedback_Goal__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Goal__Sequence__destroy(pure_pursuit__action__PathAndFeedback_Goal__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_Goal__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_Goal__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Goal__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_Goal__Sequence * input,
  pure_pursuit__action__PathAndFeedback_Goal__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_Result
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__init(pure_pursuit__action__PathAndFeedback_Result * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Result__fini(pure_pursuit__action__PathAndFeedback_Result * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Result *
pure_pursuit__action__PathAndFeedback_Result__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Result__destroy(pure_pursuit__action__PathAndFeedback_Result * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__are_equal(const pure_pursuit__action__PathAndFeedback_Result * lhs, const pure_pursuit__action__PathAndFeedback_Result * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__copy(
  const pure_pursuit__action__PathAndFeedback_Result * input,
  pure_pursuit__action__PathAndFeedback_Result * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__Sequence__init(pure_pursuit__action__PathAndFeedback_Result__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Result__Sequence__fini(pure_pursuit__action__PathAndFeedback_Result__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Result__Sequence *
pure_pursuit__action__PathAndFeedback_Result__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Result__Sequence__destroy(pure_pursuit__action__PathAndFeedback_Result__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_Result__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_Result__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Result__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_Result__Sequence * input,
  pure_pursuit__action__PathAndFeedback_Result__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_Feedback
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__init(pure_pursuit__action__PathAndFeedback_Feedback * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Feedback__fini(pure_pursuit__action__PathAndFeedback_Feedback * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Feedback *
pure_pursuit__action__PathAndFeedback_Feedback__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Feedback__destroy(pure_pursuit__action__PathAndFeedback_Feedback * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__are_equal(const pure_pursuit__action__PathAndFeedback_Feedback * lhs, const pure_pursuit__action__PathAndFeedback_Feedback * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__copy(
  const pure_pursuit__action__PathAndFeedback_Feedback * input,
  pure_pursuit__action__PathAndFeedback_Feedback * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__init(pure_pursuit__action__PathAndFeedback_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__fini(pure_pursuit__action__PathAndFeedback_Feedback__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_Feedback__Sequence *
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__destroy(pure_pursuit__action__PathAndFeedback_Feedback__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_Feedback__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_Feedback__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_Feedback__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_Feedback__Sequence * input,
  pure_pursuit__action__PathAndFeedback_Feedback__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__init(pure_pursuit__action__PathAndFeedback_SendGoal_Request * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Request__fini(pure_pursuit__action__PathAndFeedback_SendGoal_Request * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_SendGoal_Request *
pure_pursuit__action__PathAndFeedback_SendGoal_Request__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Request__destroy(pure_pursuit__action__PathAndFeedback_SendGoal_Request * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__are_equal(const pure_pursuit__action__PathAndFeedback_SendGoal_Request * lhs, const pure_pursuit__action__PathAndFeedback_SendGoal_Request * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__copy(
  const pure_pursuit__action__PathAndFeedback_SendGoal_Request * input,
  pure_pursuit__action__PathAndFeedback_SendGoal_Request * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__init(pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__fini(pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence *
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__destroy(pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * input,
  pure_pursuit__action__PathAndFeedback_SendGoal_Request__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__init(pure_pursuit__action__PathAndFeedback_SendGoal_Response * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Response__fini(pure_pursuit__action__PathAndFeedback_SendGoal_Response * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_SendGoal_Response *
pure_pursuit__action__PathAndFeedback_SendGoal_Response__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Response__destroy(pure_pursuit__action__PathAndFeedback_SendGoal_Response * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__are_equal(const pure_pursuit__action__PathAndFeedback_SendGoal_Response * lhs, const pure_pursuit__action__PathAndFeedback_SendGoal_Response * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__copy(
  const pure_pursuit__action__PathAndFeedback_SendGoal_Response * input,
  pure_pursuit__action__PathAndFeedback_SendGoal_Response * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__init(pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__fini(pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence *
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__destroy(pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * input,
  pure_pursuit__action__PathAndFeedback_SendGoal_Response__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_GetResult_Request
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__init(pure_pursuit__action__PathAndFeedback_GetResult_Request * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Request__fini(pure_pursuit__action__PathAndFeedback_GetResult_Request * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_GetResult_Request *
pure_pursuit__action__PathAndFeedback_GetResult_Request__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Request__destroy(pure_pursuit__action__PathAndFeedback_GetResult_Request * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__are_equal(const pure_pursuit__action__PathAndFeedback_GetResult_Request * lhs, const pure_pursuit__action__PathAndFeedback_GetResult_Request * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__copy(
  const pure_pursuit__action__PathAndFeedback_GetResult_Request * input,
  pure_pursuit__action__PathAndFeedback_GetResult_Request * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__init(pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__fini(pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence *
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__destroy(pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * input,
  pure_pursuit__action__PathAndFeedback_GetResult_Request__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_GetResult_Response
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__init(pure_pursuit__action__PathAndFeedback_GetResult_Response * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Response__fini(pure_pursuit__action__PathAndFeedback_GetResult_Response * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_GetResult_Response *
pure_pursuit__action__PathAndFeedback_GetResult_Response__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Response__destroy(pure_pursuit__action__PathAndFeedback_GetResult_Response * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__are_equal(const pure_pursuit__action__PathAndFeedback_GetResult_Response * lhs, const pure_pursuit__action__PathAndFeedback_GetResult_Response * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__copy(
  const pure_pursuit__action__PathAndFeedback_GetResult_Response * input,
  pure_pursuit__action__PathAndFeedback_GetResult_Response * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__init(pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__fini(pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence *
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__destroy(pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * input,
  pure_pursuit__action__PathAndFeedback_GetResult_Response__Sequence * output);

/// Initialize action/PathAndFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage
 * )) before or use
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__init(pure_pursuit__action__PathAndFeedback_FeedbackMessage * msg);

/// Finalize action/PathAndFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_FeedbackMessage__fini(pure_pursuit__action__PathAndFeedback_FeedbackMessage * msg);

/// Create action/PathAndFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_FeedbackMessage *
pure_pursuit__action__PathAndFeedback_FeedbackMessage__create();

/// Destroy action/PathAndFeedback message.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_FeedbackMessage__destroy(pure_pursuit__action__PathAndFeedback_FeedbackMessage * msg);

/// Check for action/PathAndFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__are_equal(const pure_pursuit__action__PathAndFeedback_FeedbackMessage * lhs, const pure_pursuit__action__PathAndFeedback_FeedbackMessage * rhs);

/// Copy a action/PathAndFeedback message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__copy(
  const pure_pursuit__action__PathAndFeedback_FeedbackMessage * input,
  pure_pursuit__action__PathAndFeedback_FeedbackMessage * output);

/// Initialize array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__init(pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__fini(pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * array);

/// Create array of action/PathAndFeedback messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence *
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PathAndFeedback messages.
/**
 * It calls
 * pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__destroy(pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * array);

/// Check for action/PathAndFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__are_equal(const pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * lhs, const pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PathAndFeedback messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence__copy(
  const pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * input,
  pure_pursuit__action__PathAndFeedback_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__FUNCTIONS_H_
