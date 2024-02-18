// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice
#include "pure_pursuit/msg/detail/path2_d_with_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path_with_angles`
#include "pure_pursuit/msg/detail/point_and_angle__functions.h"

bool
pure_pursuit__msg__Path2DWithAngles__init(pure_pursuit__msg__Path2DWithAngles * msg)
{
  if (!msg) {
    return false;
  }
  // path_with_angles
  if (!pure_pursuit__msg__PointAndAngle__Sequence__init(&msg->path_with_angles, 0)) {
    pure_pursuit__msg__Path2DWithAngles__fini(msg);
    return false;
  }
  return true;
}

void
pure_pursuit__msg__Path2DWithAngles__fini(pure_pursuit__msg__Path2DWithAngles * msg)
{
  if (!msg) {
    return;
  }
  // path_with_angles
  pure_pursuit__msg__PointAndAngle__Sequence__fini(&msg->path_with_angles);
}

bool
pure_pursuit__msg__Path2DWithAngles__are_equal(const pure_pursuit__msg__Path2DWithAngles * lhs, const pure_pursuit__msg__Path2DWithAngles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_with_angles
  if (!pure_pursuit__msg__PointAndAngle__Sequence__are_equal(
      &(lhs->path_with_angles), &(rhs->path_with_angles)))
  {
    return false;
  }
  return true;
}

bool
pure_pursuit__msg__Path2DWithAngles__copy(
  const pure_pursuit__msg__Path2DWithAngles * input,
  pure_pursuit__msg__Path2DWithAngles * output)
{
  if (!input || !output) {
    return false;
  }
  // path_with_angles
  if (!pure_pursuit__msg__PointAndAngle__Sequence__copy(
      &(input->path_with_angles), &(output->path_with_angles)))
  {
    return false;
  }
  return true;
}

pure_pursuit__msg__Path2DWithAngles *
pure_pursuit__msg__Path2DWithAngles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__Path2DWithAngles * msg = (pure_pursuit__msg__Path2DWithAngles *)allocator.allocate(sizeof(pure_pursuit__msg__Path2DWithAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pure_pursuit__msg__Path2DWithAngles));
  bool success = pure_pursuit__msg__Path2DWithAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pure_pursuit__msg__Path2DWithAngles__destroy(pure_pursuit__msg__Path2DWithAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pure_pursuit__msg__Path2DWithAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pure_pursuit__msg__Path2DWithAngles__Sequence__init(pure_pursuit__msg__Path2DWithAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__Path2DWithAngles * data = NULL;

  if (size) {
    data = (pure_pursuit__msg__Path2DWithAngles *)allocator.zero_allocate(size, sizeof(pure_pursuit__msg__Path2DWithAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pure_pursuit__msg__Path2DWithAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pure_pursuit__msg__Path2DWithAngles__fini(&data[i - 1]);
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
pure_pursuit__msg__Path2DWithAngles__Sequence__fini(pure_pursuit__msg__Path2DWithAngles__Sequence * array)
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
      pure_pursuit__msg__Path2DWithAngles__fini(&array->data[i]);
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

pure_pursuit__msg__Path2DWithAngles__Sequence *
pure_pursuit__msg__Path2DWithAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pure_pursuit__msg__Path2DWithAngles__Sequence * array = (pure_pursuit__msg__Path2DWithAngles__Sequence *)allocator.allocate(sizeof(pure_pursuit__msg__Path2DWithAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pure_pursuit__msg__Path2DWithAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pure_pursuit__msg__Path2DWithAngles__Sequence__destroy(pure_pursuit__msg__Path2DWithAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pure_pursuit__msg__Path2DWithAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pure_pursuit__msg__Path2DWithAngles__Sequence__are_equal(const pure_pursuit__msg__Path2DWithAngles__Sequence * lhs, const pure_pursuit__msg__Path2DWithAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pure_pursuit__msg__Path2DWithAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pure_pursuit__msg__Path2DWithAngles__Sequence__copy(
  const pure_pursuit__msg__Path2DWithAngles__Sequence * input,
  pure_pursuit__msg__Path2DWithAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pure_pursuit__msg__Path2DWithAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pure_pursuit__msg__Path2DWithAngles * data =
      (pure_pursuit__msg__Path2DWithAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pure_pursuit__msg__Path2DWithAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pure_pursuit__msg__Path2DWithAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pure_pursuit__msg__Path2DWithAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
