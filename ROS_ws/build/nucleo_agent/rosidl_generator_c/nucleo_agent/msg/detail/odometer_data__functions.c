// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice
#include "nucleo_agent/msg/detail/odometer_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
nucleo_agent__msg__OdometerData__init(nucleo_agent__msg__OdometerData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nucleo_agent__msg__OdometerData__fini(msg);
    return false;
  }
  // rotation
  // angular_vel
  return true;
}

void
nucleo_agent__msg__OdometerData__fini(nucleo_agent__msg__OdometerData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rotation
  // angular_vel
}

bool
nucleo_agent__msg__OdometerData__are_equal(const nucleo_agent__msg__OdometerData * lhs, const nucleo_agent__msg__OdometerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // rotation
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rotation[i] != rhs->rotation[i]) {
      return false;
    }
  }
  // angular_vel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_vel[i] != rhs->angular_vel[i]) {
      return false;
    }
  }
  return true;
}

bool
nucleo_agent__msg__OdometerData__copy(
  const nucleo_agent__msg__OdometerData * input,
  nucleo_agent__msg__OdometerData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // rotation
  for (size_t i = 0; i < 3; ++i) {
    output->rotation[i] = input->rotation[i];
  }
  // angular_vel
  for (size_t i = 0; i < 3; ++i) {
    output->angular_vel[i] = input->angular_vel[i];
  }
  return true;
}

nucleo_agent__msg__OdometerData *
nucleo_agent__msg__OdometerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__OdometerData * msg = (nucleo_agent__msg__OdometerData *)allocator.allocate(sizeof(nucleo_agent__msg__OdometerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nucleo_agent__msg__OdometerData));
  bool success = nucleo_agent__msg__OdometerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nucleo_agent__msg__OdometerData__destroy(nucleo_agent__msg__OdometerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nucleo_agent__msg__OdometerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nucleo_agent__msg__OdometerData__Sequence__init(nucleo_agent__msg__OdometerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__OdometerData * data = NULL;

  if (size) {
    data = (nucleo_agent__msg__OdometerData *)allocator.zero_allocate(size, sizeof(nucleo_agent__msg__OdometerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nucleo_agent__msg__OdometerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nucleo_agent__msg__OdometerData__fini(&data[i - 1]);
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
nucleo_agent__msg__OdometerData__Sequence__fini(nucleo_agent__msg__OdometerData__Sequence * array)
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
      nucleo_agent__msg__OdometerData__fini(&array->data[i]);
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

nucleo_agent__msg__OdometerData__Sequence *
nucleo_agent__msg__OdometerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nucleo_agent__msg__OdometerData__Sequence * array = (nucleo_agent__msg__OdometerData__Sequence *)allocator.allocate(sizeof(nucleo_agent__msg__OdometerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nucleo_agent__msg__OdometerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nucleo_agent__msg__OdometerData__Sequence__destroy(nucleo_agent__msg__OdometerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nucleo_agent__msg__OdometerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nucleo_agent__msg__OdometerData__Sequence__are_equal(const nucleo_agent__msg__OdometerData__Sequence * lhs, const nucleo_agent__msg__OdometerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nucleo_agent__msg__OdometerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nucleo_agent__msg__OdometerData__Sequence__copy(
  const nucleo_agent__msg__OdometerData__Sequence * input,
  nucleo_agent__msg__OdometerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nucleo_agent__msg__OdometerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nucleo_agent__msg__OdometerData * data =
      (nucleo_agent__msg__OdometerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nucleo_agent__msg__OdometerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nucleo_agent__msg__OdometerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nucleo_agent__msg__OdometerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
