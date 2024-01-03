// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "nucleo_agent/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "nucleo_agent/msg/detail/actuator_commands__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace nucleo_agent
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
cdr_serialize(
  const nucleo_agent::msg::ActuatorCommands & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nucleo_agent::msg::ActuatorCommands & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
get_serialized_size(
  const nucleo_agent::msg::ActuatorCommands & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
max_serialized_size_ActuatorCommands(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nucleo_agent

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nucleo_agent
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nucleo_agent, msg, ActuatorCommands)();

#ifdef __cplusplus
}
#endif

#endif  // NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
