// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nucleo_agent:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__FUNCTIONS_H_
#define NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nucleo_agent/msg/rosidl_generator_c__visibility_control.h"

#include "nucleo_agent/msg/detail/sensor_states__struct.h"

/// Initialize msg/SensorStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nucleo_agent__msg__SensorStates
 * )) before or use
 * nucleo_agent__msg__SensorStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__SensorStates__init(nucleo_agent__msg__SensorStates * msg);

/// Finalize msg/SensorStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__SensorStates__fini(nucleo_agent__msg__SensorStates * msg);

/// Create msg/SensorStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nucleo_agent__msg__SensorStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
nucleo_agent__msg__SensorStates *
nucleo_agent__msg__SensorStates__create();

/// Destroy msg/SensorStates message.
/**
 * It calls
 * nucleo_agent__msg__SensorStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__SensorStates__destroy(nucleo_agent__msg__SensorStates * msg);

/// Check for msg/SensorStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__SensorStates__are_equal(const nucleo_agent__msg__SensorStates * lhs, const nucleo_agent__msg__SensorStates * rhs);

/// Copy a msg/SensorStates message.
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
nucleo_agent__msg__SensorStates__copy(
  const nucleo_agent__msg__SensorStates * input,
  nucleo_agent__msg__SensorStates * output);

/// Initialize array of msg/SensorStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * nucleo_agent__msg__SensorStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__SensorStates__Sequence__init(nucleo_agent__msg__SensorStates__Sequence * array, size_t size);

/// Finalize array of msg/SensorStates messages.
/**
 * It calls
 * nucleo_agent__msg__SensorStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__SensorStates__Sequence__fini(nucleo_agent__msg__SensorStates__Sequence * array);

/// Create array of msg/SensorStates messages.
/**
 * It allocates the memory for the array and calls
 * nucleo_agent__msg__SensorStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
nucleo_agent__msg__SensorStates__Sequence *
nucleo_agent__msg__SensorStates__Sequence__create(size_t size);

/// Destroy array of msg/SensorStates messages.
/**
 * It calls
 * nucleo_agent__msg__SensorStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
void
nucleo_agent__msg__SensorStates__Sequence__destroy(nucleo_agent__msg__SensorStates__Sequence * array);

/// Check for msg/SensorStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nucleo_agent
bool
nucleo_agent__msg__SensorStates__Sequence__are_equal(const nucleo_agent__msg__SensorStates__Sequence * lhs, const nucleo_agent__msg__SensorStates__Sequence * rhs);

/// Copy an array of msg/SensorStates messages.
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
nucleo_agent__msg__SensorStates__Sequence__copy(
  const nucleo_agent__msg__SensorStates__Sequence * input,
  nucleo_agent__msg__SensorStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__FUNCTIONS_H_
