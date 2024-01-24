// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice
#include "mecha_control/msg/detail/point_and_mecha_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "mecha_control/msg/detail/mecha_state__functions.h"

bool
mecha_control__msg__PointAndMechaState__init(mecha_control__msg__PointAndMechaState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // angle
  // command
  if (!mecha_control__msg__MechaState__init(&msg->command)) {
    mecha_control__msg__PointAndMechaState__fini(msg);
    return false;
  }
  return true;
}

void
mecha_control__msg__PointAndMechaState__fini(mecha_control__msg__PointAndMechaState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // angle
  // command
  mecha_control__msg__MechaState__fini(&msg->command);
}

bool
mecha_control__msg__PointAndMechaState__are_equal(const mecha_control__msg__PointAndMechaState * lhs, const mecha_control__msg__PointAndMechaState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // command
  if (!mecha_control__msg__MechaState__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
mecha_control__msg__PointAndMechaState__copy(
  const mecha_control__msg__PointAndMechaState * input,
  mecha_control__msg__PointAndMechaState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // angle
  output->angle = input->angle;
  // command
  if (!mecha_control__msg__MechaState__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

mecha_control__msg__PointAndMechaState *
mecha_control__msg__PointAndMechaState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaState * msg = (mecha_control__msg__PointAndMechaState *)allocator.allocate(sizeof(mecha_control__msg__PointAndMechaState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecha_control__msg__PointAndMechaState));
  bool success = mecha_control__msg__PointAndMechaState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecha_control__msg__PointAndMechaState__destroy(mecha_control__msg__PointAndMechaState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecha_control__msg__PointAndMechaState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecha_control__msg__PointAndMechaState__Sequence__init(mecha_control__msg__PointAndMechaState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaState * data = NULL;

  if (size) {
    data = (mecha_control__msg__PointAndMechaState *)allocator.zero_allocate(size, sizeof(mecha_control__msg__PointAndMechaState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecha_control__msg__PointAndMechaState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecha_control__msg__PointAndMechaState__fini(&data[i - 1]);
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
mecha_control__msg__PointAndMechaState__Sequence__fini(mecha_control__msg__PointAndMechaState__Sequence * array)
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
      mecha_control__msg__PointAndMechaState__fini(&array->data[i]);
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

mecha_control__msg__PointAndMechaState__Sequence *
mecha_control__msg__PointAndMechaState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaState__Sequence * array = (mecha_control__msg__PointAndMechaState__Sequence *)allocator.allocate(sizeof(mecha_control__msg__PointAndMechaState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecha_control__msg__PointAndMechaState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecha_control__msg__PointAndMechaState__Sequence__destroy(mecha_control__msg__PointAndMechaState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecha_control__msg__PointAndMechaState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecha_control__msg__PointAndMechaState__Sequence__are_equal(const mecha_control__msg__PointAndMechaState__Sequence * lhs, const mecha_control__msg__PointAndMechaState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecha_control__msg__PointAndMechaState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecha_control__msg__PointAndMechaState__Sequence__copy(
  const mecha_control__msg__PointAndMechaState__Sequence * input,
  mecha_control__msg__PointAndMechaState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecha_control__msg__PointAndMechaState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecha_control__msg__PointAndMechaState * data =
      (mecha_control__msg__PointAndMechaState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecha_control__msg__PointAndMechaState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecha_control__msg__PointAndMechaState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecha_control__msg__PointAndMechaState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
