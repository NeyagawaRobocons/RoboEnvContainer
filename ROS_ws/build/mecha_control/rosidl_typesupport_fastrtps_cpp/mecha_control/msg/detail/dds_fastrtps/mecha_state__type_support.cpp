// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice
#include "mecha_control/msg/detail/mecha_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mecha_control/msg/detail/mecha_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mecha_control
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecha_control
cdr_serialize(
  const mecha_control::msg::MechaState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: daiza_state
  cdr << ros_message.daiza_state;
  // Member: hina_state
  cdr << ros_message.hina_state;
  // Member: bonbori_state
  cdr << (ros_message.bonbori_state ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecha_control
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mecha_control::msg::MechaState & ros_message)
{
  // Member: daiza_state
  cdr >> ros_message.daiza_state;

  // Member: hina_state
  cdr >> ros_message.hina_state;

  // Member: bonbori_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bonbori_state = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecha_control
get_serialized_size(
  const mecha_control::msg::MechaState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: daiza_state
  {
    size_t item_size = sizeof(ros_message.daiza_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hina_state
  {
    size_t item_size = sizeof(ros_message.hina_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bonbori_state
  {
    size_t item_size = sizeof(ros_message.bonbori_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mecha_control
max_serialized_size_MechaState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: daiza_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hina_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bonbori_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MechaState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mecha_control::msg::MechaState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MechaState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mecha_control::msg::MechaState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MechaState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mecha_control::msg::MechaState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MechaState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MechaState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MechaState__callbacks = {
  "mecha_control::msg",
  "MechaState",
  _MechaState__cdr_serialize,
  _MechaState__cdr_deserialize,
  _MechaState__get_serialized_size,
  _MechaState__max_serialized_size
};

static rosidl_message_type_support_t _MechaState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MechaState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mecha_control

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mecha_control
const rosidl_message_type_support_t *
get_message_type_support_handle<mecha_control::msg::MechaState>()
{
  return &mecha_control::msg::typesupport_fastrtps_cpp::_MechaState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mecha_control, msg, MechaState)() {
  return &mecha_control::msg::typesupport_fastrtps_cpp::_MechaState__handle;
}

#ifdef __cplusplus
}
#endif
