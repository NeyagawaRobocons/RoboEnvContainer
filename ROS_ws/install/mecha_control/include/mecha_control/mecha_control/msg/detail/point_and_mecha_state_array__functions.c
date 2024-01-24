// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice
#include "mecha_control/msg/detail/point_and_mecha_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "mecha_control/msg/detail/point_and_mecha_state__functions.h"

bool
mecha_control__msg__PointAndMechaStateArray__init(mecha_control__msg__PointAndMechaStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!mecha_control__msg__PointAndMechaState__Sequence__init(&msg->points, 0)) {
    mecha_control__msg__PointAndMechaStateArray__fini(msg);
    return false;
  }
  return true;
}

void
mecha_control__msg__PointAndMechaStateArray__fini(mecha_control__msg__PointAndMechaStateArray * msg)
{
  if (!msg) {
    return;
  }
  // points
  mecha_control__msg__PointAndMechaState__Sequence__fini(&msg->points);
}

bool
mecha_control__msg__PointAndMechaStateArray__are_equal(const mecha_control__msg__PointAndMechaStateArray * lhs, const mecha_control__msg__PointAndMechaStateArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!mecha_control__msg__PointAndMechaState__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
mecha_control__msg__PointAndMechaStateArray__copy(
  const mecha_control__msg__PointAndMechaStateArray * input,
  mecha_control__msg__PointAndMechaStateArray * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!mecha_control__msg__PointAndMechaState__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

mecha_control__msg__PointAndMechaStateArray *
mecha_control__msg__PointAndMechaStateArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaStateArray * msg = (mecha_control__msg__PointAndMechaStateArray *)allocator.allocate(sizeof(mecha_control__msg__PointAndMechaStateArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecha_control__msg__PointAndMechaStateArray));
  bool success = mecha_control__msg__PointAndMechaStateArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecha_control__msg__PointAndMechaStateArray__destroy(mecha_control__msg__PointAndMechaStateArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecha_control__msg__PointAndMechaStateArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecha_control__msg__PointAndMechaStateArray__Sequence__init(mecha_control__msg__PointAndMechaStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaStateArray * data = NULL;

  if (size) {
    data = (mecha_control__msg__PointAndMechaStateArray *)allocator.zero_allocate(size, sizeof(mecha_control__msg__PointAndMechaStateArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecha_control__msg__PointAndMechaStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecha_control__msg__PointAndMechaStateArray__fini(&data[i - 1]);
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
mecha_control__msg__PointAndMechaStateArray__Sequence__fini(mecha_control__msg__PointAndMechaStateArray__Sequence * array)
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
      mecha_control__msg__PointAndMechaStateArray__fini(&array->data[i]);
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

mecha_control__msg__PointAndMechaStateArray__Sequence *
mecha_control__msg__PointAndMechaStateArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__PointAndMechaStateArray__Sequence * array = (mecha_control__msg__PointAndMechaStateArray__Sequence *)allocator.allocate(sizeof(mecha_control__msg__PointAndMechaStateArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecha_control__msg__PointAndMechaStateArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecha_control__msg__PointAndMechaStateArray__Sequence__destroy(mecha_control__msg__PointAndMechaStateArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecha_control__msg__PointAndMechaStateArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecha_control__msg__PointAndMechaStateArray__Sequence__are_equal(const mecha_control__msg__PointAndMechaStateArray__Sequence * lhs, const mecha_control__msg__PointAndMechaStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecha_control__msg__PointAndMechaStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecha_control__msg__PointAndMechaStateArray__Sequence__copy(
  const mecha_control__msg__PointAndMechaStateArray__Sequence * input,
  mecha_control__msg__PointAndMechaStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecha_control__msg__PointAndMechaStateArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecha_control__msg__PointAndMechaStateArray * data =
      (mecha_control__msg__PointAndMechaStateArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecha_control__msg__PointAndMechaStateArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecha_control__msg__PointAndMechaStateArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecha_control__msg__PointAndMechaStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
