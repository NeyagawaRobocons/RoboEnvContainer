// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nucleo_agent:msg/SensorStates.idl
// generated code does not contain a copyright notice
#include "nucleo_agent/msg/detail/sensor_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `potentiometer_angles`
// Member `limit_switch_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nucleo_agent__msg__SensorStates__init(nucleo_agent__msg__SensorStates * msg)
{
  if (!msg) {
    return false;
  }
  // potentiometer_angles
  if (!rosidl_runtime_c__double__Sequence__init(&msg->potentiometer_angles, 0)) {
    nucleo_agent__msg__SensorStates__fini(msg);
    return false;
  }
  // limit_switch_states
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->limit_switch_states, 0)) {
    nucleo_agent__msg__SensorStates__fini(msg);
    return false;
  }
  return true;
}

void
nucleo_agent__msg__SensorStates__fini(nucleo_agent__msg__SensorStates * msg)
{
  if (!msg) {
    return;
  }
  // potentiometer_angles
  rosidl_runtime_c__double__Sequence__fini(&msg->potentiometer_angles);
  // limit_switch_states
  rosidl_runtime_c__boolean__Sequence__fini(&msg->limit_switch_states);
}

bool
nucleo_agent__msg__SensorStates__are_equal(const nucleo_agent__msg__SensorStates * lhs, const nucleo_agent__msg__SensorStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // potentiometer_angles
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->potentiometer_angles), &(rhs->potentiometer_angles)))
  {
    return false;
  }
  // limit_switch_states
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->limit_switch_states), &(rhs->limit_switch_states)))
  {
    return false;
  }
  return true;
}

bool
nucleo_agent__msg__SensorStates__copy(
  const nucleo_agent__msg__SensorStates * input,
  nucleo_agent__msg__SensorStates * output)
{
  if (!input || !output) {
    return false;
  }
  // potentiometer_angles
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->potentiometer_angles), &(output->potentiometer_angles)))
  {
    return false;
  }
  // limit_switch_states
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->limit_switch_states), &(output->limit_switch_states)))
  {
    return false;
  }
  return true;
}

nucleo_agent__msg__SensorStates *
nucleo_agent__msg__SensorStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__SensorStates * msg = (nucleo_agent__msg__SensorStates *)allocator.allocate(sizeof(nucleo_agent__msg__SensorStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nucleo_agent__msg__SensorStates));
  bool success = nucleo_agent__msg__SensorStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nucleo_agent__msg__SensorStates__destroy(nucleo_agent__msg__SensorStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nucleo_agent__msg__SensorStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nucleo_agent__msg__SensorStates__Sequence__init(nucleo_agent__msg__SensorStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__SensorStates * data = NULL;

  if (size) {
    data = (nucleo_agent__msg__SensorStates *)allocator.zero_allocate(size, sizeof(nucleo_agent__msg__SensorStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nucleo_agent__msg__SensorStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nucleo_agent__msg__SensorStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nucleo_agent__msg__SensorStates__Sequence__fini(nucleo_agent__msg__SensorStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nucleo_agent__msg__SensorStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nucleo_agent__msg__SensorStates__Sequence *
nucleo_agent__msg__SensorStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__SensorStates__Sequence * array = (nucleo_agent__msg__SensorStates__Sequence *)allocator.allocate(sizeof(nucleo_agent__msg__SensorStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nucleo_agent__msg__SensorStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nucleo_agent__msg__SensorStates__Sequence__destroy(nucleo_agent__msg__SensorStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nucleo_agent__msg__SensorStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nucleo_agent__msg__SensorStates__Sequence__are_equal(const nucleo_agent__msg__SensorStates__Sequence * lhs, const nucleo_agent__msg__SensorStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nucleo_agent__msg__SensorStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nucleo_agent__msg__SensorStates__Sequence__copy(
  const nucleo_agent__msg__SensorStates__Sequence * input,
  nucleo_agent__msg__SensorStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nucleo_agent__msg__SensorStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nucleo_agent__msg__SensorStates * data =
      (nucleo_agent__msg__SensorStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nucleo_agent__msg__SensorStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nucleo_agent__msg__SensorStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nucleo_agent__msg__SensorStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
