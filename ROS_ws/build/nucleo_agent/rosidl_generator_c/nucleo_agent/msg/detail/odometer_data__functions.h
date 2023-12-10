// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__FUNCTIONS_H_
#define NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nucleo_agent/msg/rosidl_generator_c__visibility_control.h"

#include "nucleo_agent/msg/detail/odometer_data__struct.h"

/// Initialize msg/OdometerData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nucleo_agent__msg__OdometerData
 * )) before or use
 * nucleo_agent__msg__OdometerData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__init(nucleo_agent__msg__OdometerData * msg);

/// Finalize msg/OdometerData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__OdometerData__fini(nucleo_agent__msg__OdometerData * msg);

/// Create msg/OdometerData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nucleo_agent__msg__OdometerData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
nucleo_agent__msg__OdometerData *
nucleo_agent__msg__OdometerData__create();

/// Destroy msg/OdometerData message.
/**
 * It calls
 * nucleo_agent__msg__OdometerData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__OdometerData__destroy(nucleo_agent__msg__OdometerData * msg);

/// Check for msg/OdometerData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__are_equal(const nucleo_agent__msg__OdometerData * lhs, const nucleo_agent__msg__OdometerData * rhs);

/// Copy a msg/OdometerData message.
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
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__copy(
  const nucleo_agent__msg__OdometerData * input,
  nucleo_agent__msg__OdometerData * output);

/// Initialize array of msg/OdometerData messages.
/**
 * It allocates the memory for the number of elements and calls
 * nucleo_agent__msg__OdometerData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__Sequence__init(nucleo_agent__msg__OdometerData__Sequence * array, size_t size);

/// Finalize array of msg/OdometerData messages.
/**
 * It calls
 * nucleo_agent__msg__OdometerData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__OdometerData__Sequence__fini(nucleo_agent__msg__OdometerData__Sequence * array);

/// Create array of msg/OdometerData messages.
/**
 * It allocates the memory for the array and calls
 * nucleo_agent__msg__OdometerData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
nucleo_agent__msg__OdometerData__Sequence *
nucleo_agent__msg__OdometerData__Sequence__create(size_t size);

/// Destroy array of msg/OdometerData messages.
/**
 * It calls
 * nucleo_agent__msg__OdometerData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__OdometerData__Sequence__destroy(nucleo_agent__msg__OdometerData__Sequence * array);

/// Check for msg/OdometerData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__Sequence__are_equal(const nucleo_agent__msg__OdometerData__Sequence * lhs, const nucleo_agent__msg__OdometerData__Sequence * rhs);

/// Copy an array of msg/OdometerData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__OdometerData__Sequence__copy(
  const nucleo_agent__msg__OdometerData__Sequence * input,
  nucleo_agent__msg__OdometerData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__FUNCTIONS_H_
