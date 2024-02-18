// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice
#include "mecha_control/srv/detail/mech_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mecha_control__srv__MechCmd_Request__init(mecha_control__srv__MechCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  return true;
}

void
mecha_control__srv__MechCmd_Request__fini(mecha_control__srv__MechCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
}

bool
mecha_control__srv__MechCmd_Request__are_equal(const mecha_control__srv__MechCmd_Request * lhs, const mecha_control__srv__MechCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
mecha_control__srv__MechCmd_Request__copy(
  const mecha_control__srv__MechCmd_Request * input,
  mecha_control__srv__MechCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  return true;
}

mecha_control__srv__MechCmd_Request *
mecha_control__srv__MechCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Request * msg = (mecha_control__srv__MechCmd_Request *)allocator.allocate(sizeof(mecha_control__srv__MechCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecha_control__srv__MechCmd_Request));
  bool success = mecha_control__srv__MechCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecha_control__srv__MechCmd_Request__destroy(mecha_control__srv__MechCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecha_control__srv__MechCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecha_control__srv__MechCmd_Request__Sequence__init(mecha_control__srv__MechCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Request * data = NULL;

  if (size) {
    data = (mecha_control__srv__MechCmd_Request *)allocator.zero_allocate(size, sizeof(mecha_control__srv__MechCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecha_control__srv__MechCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecha_control__srv__MechCmd_Request__fini(&data[i - 1]);
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
mecha_control__srv__MechCmd_Request__Sequence__fini(mecha_control__srv__MechCmd_Request__Sequence * array)
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
      mecha_control__srv__MechCmd_Request__fini(&array->data[i]);
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

mecha_control__srv__MechCmd_Request__Sequence *
mecha_control__srv__MechCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Request__Sequence * array = (mecha_control__srv__MechCmd_Request__Sequence *)allocator.allocate(sizeof(mecha_control__srv__MechCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecha_control__srv__MechCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecha_control__srv__MechCmd_Request__Sequence__destroy(mecha_control__srv__MechCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecha_control__srv__MechCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecha_control__srv__MechCmd_Request__Sequence__are_equal(const mecha_control__srv__MechCmd_Request__Sequence * lhs, const mecha_control__srv__MechCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecha_control__srv__MechCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecha_control__srv__MechCmd_Request__Sequence__copy(
  const mecha_control__srv__MechCmd_Request__Sequence * input,
  mecha_control__srv__MechCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecha_control__srv__MechCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecha_control__srv__MechCmd_Request * data =
      (mecha_control__srv__MechCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecha_control__srv__MechCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecha_control__srv__MechCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecha_control__srv__MechCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mecha_control__srv__MechCmd_Response__init(mecha_control__srv__MechCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
mecha_control__srv__MechCmd_Response__fini(mecha_control__srv__MechCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
mecha_control__srv__MechCmd_Response__are_equal(const mecha_control__srv__MechCmd_Response * lhs, const mecha_control__srv__MechCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
mecha_control__srv__MechCmd_Response__copy(
  const mecha_control__srv__MechCmd_Response * input,
  mecha_control__srv__MechCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

mecha_control__srv__MechCmd_Response *
mecha_control__srv__MechCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Response * msg = (mecha_control__srv__MechCmd_Response *)allocator.allocate(sizeof(mecha_control__srv__MechCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecha_control__srv__MechCmd_Response));
  bool success = mecha_control__srv__MechCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecha_control__srv__MechCmd_Response__destroy(mecha_control__srv__MechCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecha_control__srv__MechCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecha_control__srv__MechCmd_Response__Sequence__init(mecha_control__srv__MechCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Response * data = NULL;

  if (size) {
    data = (mecha_control__srv__MechCmd_Response *)allocator.zero_allocate(size, sizeof(mecha_control__srv__MechCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecha_control__srv__MechCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecha_control__srv__MechCmd_Response__fini(&data[i - 1]);
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
mecha_control__srv__MechCmd_Response__Sequence__fini(mecha_control__srv__MechCmd_Response__Sequence * array)
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
      mecha_control__srv__MechCmd_Response__fini(&array->data[i]);
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

mecha_control__srv__MechCmd_Response__Sequence *
mecha_control__srv__MechCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecha_control__srv__MechCmd_Response__Sequence * array = (mecha_control__srv__MechCmd_Response__Sequence *)allocator.allocate(sizeof(mecha_control__srv__MechCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecha_control__srv__MechCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecha_control__srv__MechCmd_Response__Sequence__destroy(mecha_control__srv__MechCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecha_control__srv__MechCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecha_control__srv__MechCmd_Response__Sequence__are_equal(const mecha_control__srv__MechCmd_Response__Sequence * lhs, const mecha_control__srv__MechCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecha_control__srv__MechCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecha_control__srv__MechCmd_Response__Sequence__copy(
  const mecha_control__srv__MechCmd_Response__Sequence * input,
  mecha_control__srv__MechCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecha_control__srv__MechCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecha_control__srv__MechCmd_Response * data =
      (mecha_control__srv__MechCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecha_control__srv__MechCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecha_control__srv__MechCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecha_control__srv__MechCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
