// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__SRV__DETAIL__MECH_CMD__TRAITS_HPP_
#define MECHA_CONTROL__SRV__DETAIL__MECH_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/srv/detail/mech_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecha_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const MechCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MechCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MechCmd_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::srv::MechCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::srv::MechCmd_Request & msg)
{
  return mecha_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::srv::MechCmd_Request>()
{
  return "mecha_control::srv::MechCmd_Request";
}

template<>
inline const char * name<mecha_control::srv::MechCmd_Request>()
{
  return "mecha_control/srv/MechCmd_Request";
}

template<>
struct has_fixed_size<mecha_control::srv::MechCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::srv::MechCmd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::srv::MechCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecha_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const MechCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MechCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MechCmd_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::srv::MechCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::srv::MechCmd_Response & msg)
{
  return mecha_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::srv::MechCmd_Response>()
{
  return "mecha_control::srv::MechCmd_Response";
}

template<>
inline const char * name<mecha_control::srv::MechCmd_Response>()
{
  return "mecha_control/srv/MechCmd_Response";
}

template<>
struct has_fixed_size<mecha_control::srv::MechCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::srv::MechCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::srv::MechCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecha_control::srv::MechCmd>()
{
  return "mecha_control::srv::MechCmd";
}

template<>
inline const char * name<mecha_control::srv::MechCmd>()
{
  return "mecha_control/srv/MechCmd";
}

template<>
struct has_fixed_size<mecha_control::srv::MechCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<mecha_control::srv::MechCmd_Request>::value &&
    has_fixed_size<mecha_control::srv::MechCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecha_control::srv::MechCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<mecha_control::srv::MechCmd_Request>::value &&
    has_bounded_size<mecha_control::srv::MechCmd_Response>::value
  >
{
};

template<>
struct is_service<mecha_control::srv::MechCmd>
  : std::true_type
{
};

template<>
struct is_service_request<mecha_control::srv::MechCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecha_control::srv::MechCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHA_CONTROL__SRV__DETAIL__MECH_CMD__TRAITS_HPP_
