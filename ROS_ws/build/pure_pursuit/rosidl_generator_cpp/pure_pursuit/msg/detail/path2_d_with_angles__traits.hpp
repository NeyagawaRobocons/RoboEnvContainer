// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__TRAITS_HPP_
#define PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path_with_angles'
#include "pure_pursuit/msg/detail/point_and_angle__traits.hpp"

namespace pure_pursuit
{

namespace msg
{

inline void to_flow_style_yaml(
  const Path2DWithAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_with_angles
  {
    if (msg.path_with_angles.size() == 0) {
      out << "path_with_angles: []";
    } else {
      out << "path_with_angles: [";
      size_t pending_items = msg.path_with_angles.size();
      for (auto item : msg.path_with_angles) {
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
  const Path2DWithAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_with_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_with_angles.size() == 0) {
      out << "path_with_angles: []\n";
    } else {
      out << "path_with_angles:\n";
      for (auto item : msg.path_with_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path2DWithAngles & msg, bool use_flow_style = false)
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
  const pure_pursuit::msg::Path2DWithAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  pure_pursuit::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pure_pursuit::msg::to_yaml() instead")]]
inline std::string to_yaml(const pure_pursuit::msg::Path2DWithAngles & msg)
{
  return pure_pursuit::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pure_pursuit::msg::Path2DWithAngles>()
{
  return "pure_pursuit::msg::Path2DWithAngles";
}

template<>
inline const char * name<pure_pursuit::msg::Path2DWithAngles>()
{
  return "pure_pursuit/msg/Path2DWithAngles";
}

template<>
struct has_fixed_size<pure_pursuit::msg::Path2DWithAngles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pure_pursuit::msg::Path2DWithAngles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pure_pursuit::msg::Path2DWithAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__TRAITS_HPP_
