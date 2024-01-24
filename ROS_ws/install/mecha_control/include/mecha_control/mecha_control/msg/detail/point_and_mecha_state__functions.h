// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__FUNCTIONS_H_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mecha_control/msg/rosidl_generator_c__visibility_control.h"

#include "mecha_control/msg/detail/point_and_mecha_state__struct.h"

/// Initialize msg/PointAndMechaState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__msg__PointAndMechaState
 * )) before or use
 * mecha_control__msg__PointAndMechaState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaState__init(mecha_control__msg__PointAndMechaState * msg);

/// Finalize msg/PointAndMechaState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaState__fini(mecha_control__msg__PointAndMechaState * msg);

/// Create msg/PointAndMechaState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__msg__PointAndMechaState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__msg__PointAndMechaState *
mecha_control__msg__PointAndMechaState__create();

/// Destroy msg/PointAndMechaState message.
/**
 * It calls
 * mecha_control__msg__PointAndMechaState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaState__destroy(mecha_control__msg__PointAndMechaState * msg);

/// Check for msg/PointAndMechaState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaState__are_equal(const mecha_control__msg__PointAndMechaState * lhs, const mecha_control__msg__PointAndMechaState * rhs);

/// Copy a msg/PointAndMechaState message.
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
mecha_control__msg__PointAndMechaState__copy(
  const mecha_control__msg__PointAndMechaState * input,
  mecha_control__msg__PointAndMechaState * output);

/// Initialize array of msg/PointAndMechaState messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__msg__PointAndMechaState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaState__Sequence__init(mecha_control__msg__PointAndMechaState__Sequence * array, size_t size);

/// Finalize array of msg/PointAndMechaState messages.
/**
 * It calls
 * mecha_control__msg__PointAndMechaState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaState__Sequence__fini(mecha_control__msg__PointAndMechaState__Sequence * array);

/// Create array of msg/PointAndMechaState messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__msg__PointAndMechaState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__msg__PointAndMechaState__Sequence *
mecha_control__msg__PointAndMechaState__Sequence__create(size_t size);

/// Destroy array of msg/PointAndMechaState messages.
/**
 * It calls
 * mecha_control__msg__PointAndMechaState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaState__Sequence__destroy(mecha_control__msg__PointAndMechaState__Sequence * array);

/// Check for msg/PointAndMechaState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaState__Sequence__are_equal(const mecha_control__msg__PointAndMechaState__Sequence * lhs, const mecha_control__msg__PointAndMechaState__Sequence * rhs);

/// Copy an array of msg/PointAndMechaState messages.
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
mecha_control__msg__PointAndMechaState__Sequence__copy(
  const mecha_control__msg__PointAndMechaState__Sequence * input,
  mecha_control__msg__PointAndMechaState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__FUNCTIONS_H_
