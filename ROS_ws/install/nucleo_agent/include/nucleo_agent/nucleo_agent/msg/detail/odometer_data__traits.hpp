// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__TRAITS_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nucleo_agent/msg/detail/odometer_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nucleo_agent
{

namespace msg
{

inline void to_flow_style_yaml(
  const OdometerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rotation
  {
    if (msg.rotation.size() == 0) {
      out << "rotation: []";
    } else {
      out << "rotation: [";
      size_t pending_items = msg.rotation.size();
      for (auto item : msg.rotation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_vel
  {
    if (msg.angular_vel.size() == 0) {
      out << "angular_vel: []";
    } else {
      out << "angular_vel: [";
      size_t pending_items = msg.angular_vel.size();
      for (auto item : msg.angular_vel) {
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
  const OdometerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotation.size() == 0) {
      out << "rotation: []\n";
    } else {
      out << "rotation:\n";
      for (auto item : msg.rotation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_vel.size() == 0) {
      out << "angular_vel: []\n";
    } else {
      out << "angular_vel:\n";
      for (auto item : msg.angular_vel) {
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

inline std::string to_yaml(const OdometerData & msg, bool use_flow_style = false)
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
  const nucleo_agent::msg::OdometerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  nucleo_agent::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nucleo_agent::msg::to_yaml() instead")]]
inline std::string to_yaml(const nucleo_agent::msg::OdometerData & msg)
{
  return nucleo_agent::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nucleo_agent::msg::OdometerData>()
{
  return "nucleo_agent::msg::OdometerData";
}

template<>
inline const char * name<nucleo_agent::msg::OdometerData>()
{
  return "nucleo_agent/msg/OdometerData";
}

template<>
struct has_fixed_size<nucleo_agent::msg::OdometerData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nucleo_agent::msg::OdometerData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nucleo_agent::msg::OdometerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__TRAITS_HPP_
