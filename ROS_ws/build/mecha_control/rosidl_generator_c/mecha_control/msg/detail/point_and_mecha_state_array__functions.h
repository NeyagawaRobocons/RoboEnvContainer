// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__FUNCTIONS_H_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mecha_control/msg/rosidl_generator_c__visibility_control.h"

#include "mecha_control/msg/detail/point_and_mecha_state_array__struct.h"

/// Initialize msg/PointAndMechaStateArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mecha_control__msg__PointAndMechaStateArray
 * )) before or use
 * mecha_control__msg__PointAndMechaStateArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaStateArray__init(mecha_control__msg__PointAndMechaStateArray * msg);

/// Finalize msg/PointAndMechaStateArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaStateArray__fini(mecha_control__msg__PointAndMechaStateArray * msg);

/// Create msg/PointAndMechaStateArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mecha_control__msg__PointAndMechaStateArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__msg__PointAndMechaStateArray *
mecha_control__msg__PointAndMechaStateArray__create();

/// Destroy msg/PointAndMechaStateArray message.
/**
 * It calls
 * mecha_control__msg__PointAndMechaStateArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaStateArray__destroy(mecha_control__msg__PointAndMechaStateArray * msg);

/// Check for msg/PointAndMechaStateArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaStateArray__are_equal(const mecha_control__msg__PointAndMechaStateArray * lhs, const mecha_control__msg__PointAndMechaStateArray * rhs);

/// Copy a msg/PointAndMechaStateArray message.
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
mecha_control__msg__PointAndMechaStateArray__copy(
  const mecha_control__msg__PointAndMechaStateArray * input,
  mecha_control__msg__PointAndMechaStateArray * output);

/// Initialize array of msg/PointAndMechaStateArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * mecha_control__msg__PointAndMechaStateArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaStateArray__Sequence__init(mecha_control__msg__PointAndMechaStateArray__Sequence * array, size_t size);

/// Finalize array of msg/PointAndMechaStateArray messages.
/**
 * It calls
 * mecha_control__msg__PointAndMechaStateArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaStateArray__Sequence__fini(mecha_control__msg__PointAndMechaStateArray__Sequence * array);

/// Create array of msg/PointAndMechaStateArray messages.
/**
 * It allocates the memory for the array and calls
 * mecha_control__msg__PointAndMechaStateArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
mecha_control__msg__PointAndMechaStateArray__Sequence *
mecha_control__msg__PointAndMechaStateArray__Sequence__create(size_t size);

/// Destroy array of msg/PointAndMechaStateArray messages.
/**
 * It calls
 * mecha_control__msg__PointAndMechaStateArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
void
mecha_control__msg__PointAndMechaStateArray__Sequence__destroy(mecha_control__msg__PointAndMechaStateArray__Sequence * array);

/// Check for msg/PointAndMechaStateArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mecha_control
bool
mecha_control__msg__PointAndMechaStateArray__Sequence__are_equal(const mecha_control__msg__PointAndMechaStateArray__Sequence * lhs, const mecha_control__msg__PointAndMechaStateArray__Sequence * rhs);

/// Copy an array of msg/PointAndMechaStateArray messages.
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
mecha_control__msg__PointAndMechaStateArray__Sequence__copy(
  const mecha_control__msg__PointAndMechaStateArray__Sequence * input,
  mecha_control__msg__PointAndMechaStateArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__FUNCTIONS_H_
