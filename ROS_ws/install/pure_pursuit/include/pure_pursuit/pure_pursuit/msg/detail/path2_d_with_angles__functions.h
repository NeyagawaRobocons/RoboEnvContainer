// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__FUNCTIONS_H_
#define PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pure_pursuit/msg/rosidl_generator_c__visibility_control.h"

#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.h"

/// Initialize msg/Path2DWithAngles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pure_pursuit__msg__Path2DWithAngles
 * )) before or use
 * pure_pursuit__msg__Path2DWithAngles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__Path2DWithAngles__init(pure_pursuit__msg__Path2DWithAngles * msg);

/// Finalize msg/Path2DWithAngles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__Path2DWithAngles__fini(pure_pursuit__msg__Path2DWithAngles * msg);

/// Create msg/Path2DWithAngles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pure_pursuit__msg__Path2DWithAngles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__msg__Path2DWithAngles *
pure_pursuit__msg__Path2DWithAngles__create();

/// Destroy msg/Path2DWithAngles message.
/**
 * It calls
 * pure_pursuit__msg__Path2DWithAngles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__Path2DWithAngles__destroy(pure_pursuit__msg__Path2DWithAngles * msg);

/// Check for msg/Path2DWithAngles message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__Path2DWithAngles__are_equal(const pure_pursuit__msg__Path2DWithAngles * lhs, const pure_pursuit__msg__Path2DWithAngles * rhs);

/// Copy a msg/Path2DWithAngles message.
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
pure_pursuit__msg__Path2DWithAngles__copy(
  const pure_pursuit__msg__Path2DWithAngles * input,
  pure_pursuit__msg__Path2DWithAngles * output);

/// Initialize array of msg/Path2DWithAngles messages.
/**
 * It allocates the memory for the number of elements and calls
 * pure_pursuit__msg__Path2DWithAngles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__Path2DWithAngles__Sequence__init(pure_pursuit__msg__Path2DWithAngles__Sequence * array, size_t size);

/// Finalize array of msg/Path2DWithAngles messages.
/**
 * It calls
 * pure_pursuit__msg__Path2DWithAngles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__Path2DWithAngles__Sequence__fini(pure_pursuit__msg__Path2DWithAngles__Sequence * array);

/// Create array of msg/Path2DWithAngles messages.
/**
 * It allocates the memory for the array and calls
 * pure_pursuit__msg__Path2DWithAngles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
pure_pursuit__msg__Path2DWithAngles__Sequence *
pure_pursuit__msg__Path2DWithAngles__Sequence__create(size_t size);

/// Destroy array of msg/Path2DWithAngles messages.
/**
 * It calls
 * pure_pursuit__msg__Path2DWithAngles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
void
pure_pursuit__msg__Path2DWithAngles__Sequence__destroy(pure_pursuit__msg__Path2DWithAngles__Sequence * array);

/// Check for msg/Path2DWithAngles message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pure_pursuit
bool
pure_pursuit__msg__Path2DWithAngles__Sequence__are_equal(const pure_pursuit__msg__Path2DWithAngles__Sequence * lhs, const pure_pursuit__msg__Path2DWithAngles__Sequence * rhs);

/// Copy an array of msg/Path2DWithAngles messages.
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
pure_pursuit__msg__Path2DWithAngles__Sequence__copy(
  const pure_pursuit__msg__Path2DWithAngles__Sequence * input,
  pure_pursuit__msg__Path2DWithAngles__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__FUNCTIONS_H_
