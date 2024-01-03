// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__TRAITS_HPP_
#define MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/msg/detail/actuator_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecha_control
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuatorCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_positions
  {
    if (msg.motor_positions.size() == 0) {
      out << "motor_positions: []";
    } else {
      out << "motor_positions: [";
      size_t pending_items = msg.motor_positions.size();
      for (auto item : msg.motor_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cylinder_states
  {
    if (msg.cylinder_states.size() == 0) {
      out << "cylinder_states: []";
    } else {
      out << "cylinder_states: [";
      size_t pending_items = msg.cylinder_states.size();
      for (auto item : msg.cylinder_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_positions.size() == 0) {
      out << "motor_positions: []\n";
    } else {
      out << "motor_positions:\n";
      for (auto item : msg.motor_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cylinder_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cylinder_states.size() == 0) {
      out << "cylinder_states: []\n";
    } else {
      out << "cylinder_states:\n";
      for (auto item : msg.cylinder_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorCommands & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::msg::ActuatorCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::msg::ActuatorCommands & msg)
{
  return mecha_control::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::msg::ActuatorCommands>()
{
  return "mecha_control::msg::ActuatorCommands";
}

template<>
inline const char * name<mecha_control::msg::ActuatorCommands>()
{
  return "mecha_control/msg/ActuatorCommands";
}

template<>
struct has_fixed_size<mecha_control::msg::ActuatorCommands>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mecha_control::msg::ActuatorCommands>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mecha_control::msg::ActuatorCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__TRAITS_HPP_
