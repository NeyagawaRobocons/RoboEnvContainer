// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__FUNCTIONS_H_
#define PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pure_pursuit/msg/rosidl_generator_c__visibility_control.h"

#include "pure_pursuit/msg/detail/point_and_angle__struct.h"

/// Initialize msg/PointAndAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__msg__PointAndAngle
 * )) before or use
 * pure_pursuit__msg__PointAndAngle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__PointAndAngle__init(pure_pursuit__msg__PointAndAngle * msg);

/// Finalize msg/PointAndAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__PointAndAngle__fini(pure_pursuit__msg__PointAndAngle * msg);

/// Create msg/PointAndAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__msg__PointAndAngle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__msg__PointAndAngle *
pure_pursuit__msg__PointAndAngle__create();

/// Destroy msg/PointAndAngle message.
/**
 * It calls
 * pure_pursuit__msg__PointAndAngle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__PointAndAngle__destroy(pure_pursuit__msg__PointAndAngle * msg);

/// Check for msg/PointAndAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__PointAndAngle__are_equal(const pure_pursuit__msg__PointAndAngle * lhs, const pure_pursuit__msg__PointAndAngle * rhs);

/// Copy a msg/PointAndAngle message.
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
pure_pursuit__msg__PointAndAngle__copy(
  const pure_pursuit__msg__PointAndAngle * input,
  pure_pursuit__msg__PointAndAngle * output);

/// Initialize array of msg/PointAndAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__msg__PointAndAngle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__PointAndAngle__Sequence__init(pure_pursuit__msg__PointAndAngle__Sequence * array, size_t size);

/// Finalize array of msg/PointAndAngle messages.
/**
 * It calls
 * pure_pursuit__msg__PointAndAngle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__PointAndAngle__Sequence__fini(pure_pursuit__msg__PointAndAngle__Sequence * array);

/// Create array of msg/PointAndAngle messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__msg__PointAndAngle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__msg__PointAndAngle__Sequence *
pure_pursuit__msg__PointAndAngle__Sequence__create(size_t size);

/// Destroy array of msg/PointAndAngle messages.
/**
 * It calls
 * pure_pursuit__msg__PointAndAngle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__PointAndAngle__Sequence__destroy(pure_pursuit__msg__PointAndAngle__Sequence * array);

/// Check for msg/PointAndAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__PointAndAngle__Sequence__are_equal(const pure_pursuit__msg__PointAndAngle__Sequence * lhs, const pure_pursuit__msg__PointAndAngle__Sequence * rhs);

/// Copy an array of msg/PointAndAngle messages.
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
pure_pursuit__msg__PointAndAngle__Sequence__copy(
  const pure_pursuit__msg__PointAndAngle__Sequence * input,
  pure_pursuit__msg__PointAndAngle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__FUNCTIONS_H_
