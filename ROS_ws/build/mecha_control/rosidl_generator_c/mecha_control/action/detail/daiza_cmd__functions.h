// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mecha_control:action/DaizaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__FUNCTIONS_H_
#define MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mecha_control/msg/rosidl_generator_c__visibility_control.h"

#include "mecha_control/action/detail/daiza_cmd__struct.h"

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_Goal
 * )) before or use
 * mecha_control__action__DaizaCmd_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__init(mecha_control__action__DaizaCmd_Goal * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Goal__fini(mecha_control__action__DaizaCmd_Goal * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Goal *
mecha_control__action__DaizaCmd_Goal__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Goal__destroy(mecha_control__action__DaizaCmd_Goal * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__are_equal(const mecha_control__action__DaizaCmd_Goal * lhs, const mecha_control__action__DaizaCmd_Goal * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__copy(
  const mecha_control__action__DaizaCmd_Goal * input,
  mecha_control__action__DaizaCmd_Goal * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__Sequence__init(mecha_control__action__DaizaCmd_Goal__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Goal__Sequence__fini(mecha_control__action__DaizaCmd_Goal__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Goal__Sequence *
mecha_control__action__DaizaCmd_Goal__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Goal__Sequence__destroy(mecha_control__action__DaizaCmd_Goal__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__Sequence__are_equal(const mecha_control__action__DaizaCmd_Goal__Sequence * lhs, const mecha_control__action__DaizaCmd_Goal__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Goal__Sequence__copy(
  const mecha_control__action__DaizaCmd_Goal__Sequence * input,
  mecha_control__action__DaizaCmd_Goal__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_Result
 * )) before or use
 * mecha_control__action__DaizaCmd_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__init(mecha_control__action__DaizaCmd_Result * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Result__fini(mecha_control__action__DaizaCmd_Result * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Result *
mecha_control__action__DaizaCmd_Result__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Result__destroy(mecha_control__action__DaizaCmd_Result * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__are_equal(const mecha_control__action__DaizaCmd_Result * lhs, const mecha_control__action__DaizaCmd_Result * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__copy(
  const mecha_control__action__DaizaCmd_Result * input,
  mecha_control__action__DaizaCmd_Result * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__Sequence__init(mecha_control__action__DaizaCmd_Result__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Result__Sequence__fini(mecha_control__action__DaizaCmd_Result__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Result__Sequence *
mecha_control__action__DaizaCmd_Result__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Result__Sequence__destroy(mecha_control__action__DaizaCmd_Result__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__Sequence__are_equal(const mecha_control__action__DaizaCmd_Result__Sequence * lhs, const mecha_control__action__DaizaCmd_Result__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Result__Sequence__copy(
  const mecha_control__action__DaizaCmd_Result__Sequence * input,
  mecha_control__action__DaizaCmd_Result__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_Feedback
 * )) before or use
 * mecha_control__action__DaizaCmd_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__init(mecha_control__action__DaizaCmd_Feedback * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Feedback__fini(mecha_control__action__DaizaCmd_Feedback * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Feedback *
mecha_control__action__DaizaCmd_Feedback__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Feedback__destroy(mecha_control__action__DaizaCmd_Feedback * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__are_equal(const mecha_control__action__DaizaCmd_Feedback * lhs, const mecha_control__action__DaizaCmd_Feedback * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__copy(
  const mecha_control__action__DaizaCmd_Feedback * input,
  mecha_control__action__DaizaCmd_Feedback * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__Sequence__init(mecha_control__action__DaizaCmd_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Feedback__Sequence__fini(mecha_control__action__DaizaCmd_Feedback__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_Feedback__Sequence *
mecha_control__action__DaizaCmd_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_Feedback__Sequence__destroy(mecha_control__action__DaizaCmd_Feedback__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__Sequence__are_equal(const mecha_control__action__DaizaCmd_Feedback__Sequence * lhs, const mecha_control__action__DaizaCmd_Feedback__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_Feedback__Sequence__copy(
  const mecha_control__action__DaizaCmd_Feedback__Sequence * input,
  mecha_control__action__DaizaCmd_Feedback__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_SendGoal_Request
 * )) before or use
 * mecha_control__action__DaizaCmd_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__init(mecha_control__action__DaizaCmd_SendGoal_Request * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Request__fini(mecha_control__action__DaizaCmd_SendGoal_Request * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_SendGoal_Request *
mecha_control__action__DaizaCmd_SendGoal_Request__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Request__destroy(mecha_control__action__DaizaCmd_SendGoal_Request * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__are_equal(const mecha_control__action__DaizaCmd_SendGoal_Request * lhs, const mecha_control__action__DaizaCmd_SendGoal_Request * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__copy(
  const mecha_control__action__DaizaCmd_SendGoal_Request * input,
  mecha_control__action__DaizaCmd_SendGoal_Request * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__init(mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__fini(mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence *
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__destroy(mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__are_equal(const mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * lhs, const mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Request__Sequence__copy(
  const mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * input,
  mecha_control__action__DaizaCmd_SendGoal_Request__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_SendGoal_Response
 * )) before or use
 * mecha_control__action__DaizaCmd_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__init(mecha_control__action__DaizaCmd_SendGoal_Response * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Response__fini(mecha_control__action__DaizaCmd_SendGoal_Response * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_SendGoal_Response *
mecha_control__action__DaizaCmd_SendGoal_Response__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Response__destroy(mecha_control__action__DaizaCmd_SendGoal_Response * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__are_equal(const mecha_control__action__DaizaCmd_SendGoal_Response * lhs, const mecha_control__action__DaizaCmd_SendGoal_Response * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__copy(
  const mecha_control__action__DaizaCmd_SendGoal_Response * input,
  mecha_control__action__DaizaCmd_SendGoal_Response * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__init(mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__fini(mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence *
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__destroy(mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__are_equal(const mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * lhs, const mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_SendGoal_Response__Sequence__copy(
  const mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * input,
  mecha_control__action__DaizaCmd_SendGoal_Response__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_GetResult_Request
 * )) before or use
 * mecha_control__action__DaizaCmd_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__init(mecha_control__action__DaizaCmd_GetResult_Request * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Request__fini(mecha_control__action__DaizaCmd_GetResult_Request * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_GetResult_Request *
mecha_control__action__DaizaCmd_GetResult_Request__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Request__destroy(mecha_control__action__DaizaCmd_GetResult_Request * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__are_equal(const mecha_control__action__DaizaCmd_GetResult_Request * lhs, const mecha_control__action__DaizaCmd_GetResult_Request * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__copy(
  const mecha_control__action__DaizaCmd_GetResult_Request * input,
  mecha_control__action__DaizaCmd_GetResult_Request * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__init(mecha_control__action__DaizaCmd_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__fini(mecha_control__action__DaizaCmd_GetResult_Request__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_GetResult_Request__Sequence *
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__destroy(mecha_control__action__DaizaCmd_GetResult_Request__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__are_equal(const mecha_control__action__DaizaCmd_GetResult_Request__Sequence * lhs, const mecha_control__action__DaizaCmd_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Request__Sequence__copy(
  const mecha_control__action__DaizaCmd_GetResult_Request__Sequence * input,
  mecha_control__action__DaizaCmd_GetResult_Request__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_GetResult_Response
 * )) before or use
 * mecha_control__action__DaizaCmd_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__init(mecha_control__action__DaizaCmd_GetResult_Response * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Response__fini(mecha_control__action__DaizaCmd_GetResult_Response * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_GetResult_Response *
mecha_control__action__DaizaCmd_GetResult_Response__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Response__destroy(mecha_control__action__DaizaCmd_GetResult_Response * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__are_equal(const mecha_control__action__DaizaCmd_GetResult_Response * lhs, const mecha_control__action__DaizaCmd_GetResult_Response * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__copy(
  const mecha_control__action__DaizaCmd_GetResult_Response * input,
  mecha_control__action__DaizaCmd_GetResult_Response * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__init(mecha_control__action__DaizaCmd_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__fini(mecha_control__action__DaizaCmd_GetResult_Response__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_GetResult_Response__Sequence *
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__destroy(mecha_control__action__DaizaCmd_GetResult_Response__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__are_equal(const mecha_control__action__DaizaCmd_GetResult_Response__Sequence * lhs, const mecha_control__action__DaizaCmd_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_GetResult_Response__Sequence__copy(
  const mecha_control__action__DaizaCmd_GetResult_Response__Sequence * input,
  mecha_control__action__DaizaCmd_GetResult_Response__Sequence * output);

/// Initialize action/DaizaCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__action__DaizaCmd_FeedbackMessage
 * )) before or use
 * mecha_control__action__DaizaCmd_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__init(mecha_control__action__DaizaCmd_FeedbackMessage * msg);

/// Finalize action/DaizaCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_FeedbackMessage__fini(mecha_control__action__DaizaCmd_FeedbackMessage * msg);

/// Create action/DaizaCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_FeedbackMessage *
mecha_control__action__DaizaCmd_FeedbackMessage__create();

/// Destroy action/DaizaCmd message.
/**
 * It calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_FeedbackMessage__destroy(mecha_control__action__DaizaCmd_FeedbackMessage * msg);

/// Check for action/DaizaCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__are_equal(const mecha_control__action__DaizaCmd_FeedbackMessage * lhs, const mecha_control__action__DaizaCmd_FeedbackMessage * rhs);

/// Copy a action/DaizaCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__copy(
  const mecha_control__action__DaizaCmd_FeedbackMessage * input,
  mecha_control__action__DaizaCmd_FeedbackMessage * output);

/// Initialize array of action/DaizaCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__init(mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__fini(mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * array);

/// Create array of action/DaizaCmd messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence *
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DaizaCmd messages.
/**
 * It calls
 * mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__destroy(mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * array);

/// Check for action/DaizaCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__are_equal(const mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * lhs, const mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DaizaCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__action__DaizaCmd_FeedbackMessage__Sequence__copy(
  const mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * input,
  mecha_control__action__DaizaCmd_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__FUNCTIONS_H_
