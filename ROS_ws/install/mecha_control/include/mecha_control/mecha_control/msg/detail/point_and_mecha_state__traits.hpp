// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__TRAITS_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/msg/detail/point_and_mecha_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "mecha_control/msg/detail/mecha_state__traits.hpp"

namespace mecha_control
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointAndMechaState & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointAndMechaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointAndMechaState & msg, bool use_flow_style = false)
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
  const mecha_control::msg::PointAndMechaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::msg::PointAndMechaState & msg)
{
  return mecha_control::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::msg::PointAndMechaState>()
{
  return "mecha_control::msg::PointAndMechaState";
}

template<>
inline const char * name<mecha_control::msg::PointAndMechaState>()
{
  return "mecha_control/msg/PointAndMechaState";
}

template<>
struct has_fixed_size<mecha_control::msg::PointAndMechaState>
  : std::integral_constant<bool, has_fixed_size<mecha_control::msg::MechaState>::value> {};

template<>
struct has_bounded_size<mecha_control::msg::PointAndMechaState>
  : std::integral_constant<bool, has_bounded_size<mecha_control::msg::MechaState>::value> {};

template<>
struct is_message<mecha_control::msg::PointAndMechaState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__TRAITS_HPP_
