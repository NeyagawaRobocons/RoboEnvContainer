// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice
#include "mecha_control/msg/detail/mecha_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mecha_control__msg__MechaState__init(mecha_control__msg__MechaState * msg)
{
  if (!msg) {
    return false;
  }
  // daiza_state
  // hina_state
  // bonbori_state
  return true;
}

void
mecha_control__msg__MechaState__fini(mecha_control__msg__MechaState * msg)
{
  if (!msg) {
    return;
  }
  // daiza_state
  // hina_state
  // bonbori_state
}

bool
mecha_control__msg__MechaState__are_equal(const mecha_control__msg__MechaState * lhs, const mecha_control__msg__MechaState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // daiza_state
  if (lhs->daiza_state != rhs->daiza_state) {
    return false;
  }
  // hina_state
  if (lhs->hina_state != rhs->hina_state) {
    return false;
  }
  // bonbori_state
  if (lhs->bonbori_state != rhs->bonbori_state) {
    return false;
  }
  return true;
}

bool
mecha_control__msg__MechaState__copy(
  const mecha_control__msg__MechaState * input,
  mecha_control__msg__MechaState * output)
{
  if (!input || !output) {
    return false;
  }
  // daiza_state
  output->daiza_state = input->daiza_state;
  // hina_state
  output->hina_state = input->hina_state;
  // bonbori_state
  output->bonbori_state = input->bonbori_state;
  return true;
}

mecha_control__msg__MechaState *
mecha_control__msg__MechaState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__MechaState * msg = (mecha_control__msg__MechaState *)allocator.allocate(sizeof(mecha_control__msg__MechaState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecha_control__msg__MechaState));
  bool success = mecha_control__msg__MechaState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecha_control__msg__MechaState__destroy(mecha_control__msg__MechaState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecha_control__msg__MechaState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecha_control__msg__MechaState__Sequence__init(mecha_control__msg__MechaState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__MechaState * data = NULL;

  if (size) {
    data = (mecha_control__msg__MechaState *)allocator.zero_allocate(size, sizeof(mecha_control__msg__MechaState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecha_control__msg__MechaState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecha_control__msg__MechaState__fini(&data[i - 1]);
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
mecha_control__msg__MechaState__Sequence__fini(mecha_control__msg__MechaState__Sequence * array)
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
      mecha_control__msg__MechaState__fini(&array->data[i]);
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

mecha_control__msg__MechaState__Sequence *
mecha_control__msg__MechaState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__msg__MechaState__Sequence * array = (mecha_control__msg__MechaState__Sequence *)allocator.allocate(sizeof(mecha_control__msg__MechaState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecha_control__msg__MechaState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecha_control__msg__MechaState__Sequence__destroy(mecha_control__msg__MechaState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecha_control__msg__MechaState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecha_control__msg__MechaState__Sequence__are_equal(const mecha_control__msg__MechaState__Sequence * lhs, const mecha_control__msg__MechaState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecha_control__msg__MechaState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecha_control__msg__MechaState__Sequence__copy(
  const mecha_control__msg__MechaState__Sequence * input,
  mecha_control__msg__MechaState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecha_control__msg__MechaState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecha_control__msg__MechaState * data =
      (mecha_control__msg__MechaState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecha_control__msg__MechaState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecha_control__msg__MechaState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecha_control__msg__MechaState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
