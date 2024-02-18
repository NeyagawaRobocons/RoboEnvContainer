// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice
#include "pure_pursuit/msg/detail/point_and_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pure_pursuit__msg__PointAndAngle__init(pure_pursuit__msg__PointAndAngle * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
pure_pursuit__msg__PointAndAngle__fini(pure_pursuit__msg__PointAndAngle * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
pure_pursuit__msg__PointAndAngle__are_equal(const pure_pursuit__msg__PointAndAngle * lhs, const pure_pursuit__msg__PointAndAngle * rhs)
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
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
pure_pursuit__msg__PointAndAngle__copy(
  const pure_pursuit__msg__PointAndAngle * input,
  pure_pursuit__msg__PointAndAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

pure_pursuit__msg__PointAndAngle *
pure_pursuit__msg__PointAndAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__PointAndAngle * msg = (pure_pursuit__msg__PointAndAngle *)allocator.allocate(sizeof(pure_pursuit__msg__PointAndAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pure_pursuit__msg__PointAndAngle));
  bool success = pure_pursuit__msg__PointAndAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pure_pursuit__msg__PointAndAngle__destroy(pure_pursuit__msg__PointAndAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pure_pursuit__msg__PointAndAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pure_pursuit__msg__PointAndAngle__Sequence__init(pure_pursuit__msg__PointAndAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__PointAndAngle * data = NULL;

  if (size) {
    data = (pure_pursuit__msg__PointAndAngle *)allocator.zero_allocate(size, sizeof(pure_pursuit__msg__PointAndAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pure_pursuit__msg__PointAndAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pure_pursuit__msg__PointAndAngle__fini(&data[i - 1]);
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
pure_pursuit__msg__PointAndAngle__Sequence__fini(pure_pursuit__msg__PointAndAngle__Sequence * array)
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
      pure_pursuit__msg__PointAndAngle__fini(&array->data[i]);
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

pure_pursuit__msg__PointAndAngle__Sequence *
pure_pursuit__msg__PointAndAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__PointAndAngle__Sequence * array = (pure_pursuit__msg__PointAndAngle__Sequence *)allocator.allocate(sizeof(pure_pursuit__msg__PointAndAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pure_pursuit__msg__PointAndAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pure_pursuit__msg__PointAndAngle__Sequence__destroy(pure_pursuit__msg__PointAndAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pure_pursuit__msg__PointAndAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pure_pursuit__msg__PointAndAngle__Sequence__are_equal(const pure_pursuit__msg__PointAndAngle__Sequence * lhs, const pure_pursuit__msg__PointAndAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pure_pursuit__msg__PointAndAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pure_pursuit__msg__PointAndAngle__Sequence__copy(
  const pure_pursuit__msg__PointAndAngle__Sequence * input,
  pure_pursuit__msg__PointAndAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pure_pursuit__msg__PointAndAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pure_pursuit__msg__PointAndAngle * data =
      (pure_pursuit__msg__PointAndAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pure_pursuit__msg__PointAndAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pure_pursuit__msg__PointAndAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pure_pursuit__msg__PointAndAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
