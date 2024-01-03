// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nucleo_agent:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__TRAITS_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nucleo_agent/msg/detail/sensor_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nucleo_agent
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: potentiometer_angles
  {
    if (msg.potentiometer_angles.size() == 0) {
      out << "potentiometer_angles: []";
    } else {
      out << "potentiometer_angles: [";
      size_t pending_items = msg.potentiometer_angles.size();
      for (auto item : msg.potentiometer_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_switch_states
  {
    if (msg.limit_switch_states.size() == 0) {
      out << "limit_switch_states: []";
    } else {
      out << "limit_switch_states: [";
      size_t pending_items = msg.limit_switch_states.size();
      for (auto item : msg.limit_switch_states) {
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
  const SensorStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: potentiometer_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.potentiometer_angles.size() == 0) {
      out << "potentiometer_angles: []\n";
    } else {
      out << "potentiometer_angles:\n";
      for (auto item : msg.potentiometer_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_switch_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_switch_states.size() == 0) {
      out << "limit_switch_states: []\n";
    } else {
      out << "limit_switch_states:\n";
      for (auto item : msg.limit_switch_states) {
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

inline std::string to_yaml(const SensorStates & msg, bool use_flow_style = false)
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

}  // namespace nucleo_agent

namespace rosidl_generator_traits
{

[[deprecated("use nucleo_agent::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nucleo_agent::msg::SensorStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  nucleo_agent::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nucleo_agent::msg::to_yaml() instead")]]
inline std::string to_yaml(const nucleo_agent::msg::SensorStates & msg)
{
  return nucleo_agent::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nucleo_agent::msg::SensorStates>()
{
  return "nucleo_agent::msg::SensorStates";
}

template<>
inline const char * name<nucleo_agent::msg::SensorStates>()
{
  return "nucleo_agent/msg/SensorStates";
}

template<>
struct has_fixed_size<nucleo_agent::msg::SensorStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nucleo_agent::msg::SensorStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nucleo_agent::msg::SensorStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__TRAITS_HPP_
