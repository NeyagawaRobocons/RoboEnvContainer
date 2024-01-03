// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nucleo_agent:msg/SensorStates.idl
// generated code does not contain a copyright notice
#include "nucleo_agent/msg/detail/sensor_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nucleo_agent/msg/detail/sensor_states__struct.hpp"

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

namespace nucleo_agent
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
cdr_serialize(
  const nucleo_agent::msg::SensorStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: potentiometer_angles
  {
    cdr << ros_message.potentiometer_angles;
  }
  // Member: limit_switch_states
  {
    cdr << ros_message.limit_switch_states;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nucleo_agent::msg::SensorStates & ros_message)
{
  // Member: potentiometer_angles
  {
    cdr >> ros_message.potentiometer_angles;
  }

  // Member: limit_switch_states
  {
    cdr >> ros_message.limit_switch_states;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
get_serialized_size(
  const nucleo_agent::msg::SensorStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: potentiometer_angles
  {
    size_t array_size = ros_message.potentiometer_angles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.potentiometer_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limit_switch_states
  {
    size_t array_size = ros_message.limit_switch_states.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.limit_switch_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
max_serialized_size_SensorStates(
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


  // Member: potentiometer_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: limit_switch_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SensorStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nucleo_agent::msg::SensorStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nucleo_agent::msg::SensorStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nucleo_agent::msg::SensorStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorStates__callbacks = {
  "nucleo_agent::msg",
  "SensorStates",
  _SensorStates__cdr_serialize,
  _SensorStates__cdr_deserialize,
  _SensorStates__get_serialized_size,
  _SensorStates__max_serialized_size
};

static rosidl_message_type_support_t _SensorStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nucleo_agent

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nucleo_agent
const rosidl_message_type_support_t *
get_message_type_support_handle<nucleo_agent::msg::SensorStates>()
{
  return &nucleo_agent::msg::typesupport_fastrtps_cpp::_SensorStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nucleo_agent, msg, SensorStates)() {
  return &nucleo_agent::msg::typesupport_fastrtps_cpp::_SensorStates__handle;
}

#ifdef __cplusplus
}
#endif
