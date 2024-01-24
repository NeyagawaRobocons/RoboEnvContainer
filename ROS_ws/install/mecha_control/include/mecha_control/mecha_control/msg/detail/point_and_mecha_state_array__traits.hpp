// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__TRAITS_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/msg/detail/point_and_mecha_state_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "mecha_control/msg/detail/point_and_mecha_state__traits.hpp"

namespace mecha_control
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointAndMechaStateArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
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
  const PointAndMechaStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointAndMechaStateArray & msg, bool use_flow_style = false)
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
  const mecha_control::msg::PointAndMechaStateArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::msg::PointAndMechaStateArray & msg)
{
  return mecha_control::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::msg::PointAndMechaStateArray>()
{
  return "mecha_control::msg::PointAndMechaStateArray";
}

template<>
inline const char * name<mecha_control::msg::PointAndMechaStateArray>()
{
  return "mecha_control/msg/PointAndMechaStateArray";
}

template<>
struct has_fixed_size<mecha_control::msg::PointAndMechaStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mecha_control::msg::PointAndMechaStateArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mecha_control::msg::PointAndMechaStateArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__TRAITS_HPP_
