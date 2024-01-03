// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__TRAITS_HPP_
#define MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/msg/detail/mecha_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecha_control
{

namespace msg
{

inline void to_flow_style_yaml(
  const MechaState & msg,
  std::ostream & out)
{
  out << "{";
  // member: daiza_state
  {
    out << "daiza_state: ";
    rosidl_generator_traits::character_value_to_yaml(msg.daiza_state, out);
    out << ", ";
  }

  // member: hina_state
  {
    out << "hina_state: ";
    rosidl_generator_traits::character_value_to_yaml(msg.hina_state, out);
    out << ", ";
  }

  // member: bonbori_state
  {
    out << "bonbori_state: ";
    rosidl_generator_traits::value_to_yaml(msg.bonbori_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MechaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: daiza_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "daiza_state: ";
    rosidl_generator_traits::character_value_to_yaml(msg.daiza_state, out);
    out << "\n";
  }

  // member: hina_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hina_state: ";
    rosidl_generator_traits::character_value_to_yaml(msg.hina_state, out);
    out << "\n";
  }

  // member: bonbori_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bonbori_state: ";
    rosidl_generator_traits::value_to_yaml(msg.bonbori_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MechaState & msg, bool use_flow_style = false)
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
  const mecha_control::msg::MechaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::msg::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::msg::MechaState & msg)
{
  return mecha_control::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::msg::MechaState>()
{
  return "mecha_control::msg::MechaState";
}

template<>
inline const char * name<mecha_control::msg::MechaState>()
{
  return "mecha_control/msg/MechaState";
}

template<>
struct has_fixed_size<mecha_control::msg::MechaState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::msg::MechaState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::msg::MechaState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__TRAITS_HPP_
