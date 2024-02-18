// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__TRAITS_HPP_
#define PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pure_pursuit/msg/detail/point_and_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pure_pursuit
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointAndAngle & msg,
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

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointAndAngle & msg,
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

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointAndAngle & msg, bool use_flow_style = false)
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

}  // namespace pure_pursuit

namespace rosidl_generator_traits
{

[[deprecated("use pure_pursuit::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pure_pursuit::msg::PointAndAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  pure_pursuit::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pure_pursuit::msg::to_yaml() instead")]]
inline std::string to_yaml(const pure_pursuit::msg::PointAndAngle & msg)
{
  return pure_pursuit::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pure_pursuit::msg::PointAndAngle>()
{
  return "pure_pursuit::msg::PointAndAngle";
}

template<>
inline const char * name<pure_pursuit::msg::PointAndAngle>()
{
  return "pure_pursuit/msg/PointAndAngle";
}

template<>
struct has_fixed_size<pure_pursuit::msg::PointAndAngle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pure_pursuit::msg::PointAndAngle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pure_pursuit::msg::PointAndAngle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__TRAITS_HPP_
