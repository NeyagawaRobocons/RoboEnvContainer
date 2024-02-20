// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecha_control:action/DaizaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__TRAITS_HPP_
#define MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mecha_control/action/detail/daiza_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_Goal & msg,
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
  const DaizaCmd_Goal & msg,
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

inline std::string to_yaml(const DaizaCmd_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_Goal & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_Goal>()
{
  return "mecha_control::action::DaizaCmd_Goal";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_Goal>()
{
  return "mecha_control/action/DaizaCmd_Goal";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_Result & msg,
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
  const DaizaCmd_Result & msg,
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

inline std::string to_yaml(const DaizaCmd_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_Result & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_Result>()
{
  return "mecha_control::action::DaizaCmd_Result";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_Result>()
{
  return "mecha_control/action/DaizaCmd_Result";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_Feedback & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_Feedback>()
{
  return "mecha_control::action::DaizaCmd_Feedback";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_Feedback>()
{
  return "mecha_control/action/DaizaCmd_Feedback";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mecha_control/action/detail/daiza_cmd__traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_SendGoal_Request & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_SendGoal_Request>()
{
  return "mecha_control::action::DaizaCmd_SendGoal_Request";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_SendGoal_Request>()
{
  return "mecha_control/action/DaizaCmd_SendGoal_Request";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mecha_control::action::DaizaCmd_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mecha_control::action::DaizaCmd_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_SendGoal_Response & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_SendGoal_Response>()
{
  return "mecha_control::action::DaizaCmd_SendGoal_Response";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_SendGoal_Response>()
{
  return "mecha_control/action/DaizaCmd_SendGoal_Response";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_SendGoal>()
{
  return "mecha_control::action::DaizaCmd_SendGoal";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_SendGoal>()
{
  return "mecha_control/action/DaizaCmd_SendGoal";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mecha_control::action::DaizaCmd_SendGoal_Request>::value &&
    has_fixed_size<mecha_control::action::DaizaCmd_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mecha_control::action::DaizaCmd_SendGoal_Request>::value &&
    has_bounded_size<mecha_control::action::DaizaCmd_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mecha_control::action::DaizaCmd_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mecha_control::action::DaizaCmd_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecha_control::action::DaizaCmd_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_GetResult_Request & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_GetResult_Request>()
{
  return "mecha_control::action::DaizaCmd_GetResult_Request";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_GetResult_Request>()
{
  return "mecha_control/action/DaizaCmd_GetResult_Request";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mecha_control/action/detail/daiza_cmd__traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_GetResult_Response & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_GetResult_Response>()
{
  return "mecha_control::action::DaizaCmd_GetResult_Response";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_GetResult_Response>()
{
  return "mecha_control/action/DaizaCmd_GetResult_Response";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mecha_control::action::DaizaCmd_Result>::value> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mecha_control::action::DaizaCmd_Result>::value> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_GetResult>()
{
  return "mecha_control::action::DaizaCmd_GetResult";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_GetResult>()
{
  return "mecha_control/action/DaizaCmd_GetResult";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mecha_control::action::DaizaCmd_GetResult_Request>::value &&
    has_fixed_size<mecha_control::action::DaizaCmd_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mecha_control::action::DaizaCmd_GetResult_Request>::value &&
    has_bounded_size<mecha_control::action::DaizaCmd_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mecha_control::action::DaizaCmd_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mecha_control::action::DaizaCmd_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecha_control::action::DaizaCmd_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mecha_control/action/detail/daiza_cmd__traits.hpp"

namespace mecha_control
{

namespace action
{

inline void to_flow_style_yaml(
  const DaizaCmd_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DaizaCmd_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DaizaCmd_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace mecha_control

namespace rosidl_generator_traits
{

[[deprecated("use mecha_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mecha_control::action::DaizaCmd_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  mecha_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mecha_control::action::to_yaml() instead")]]
inline std::string to_yaml(const mecha_control::action::DaizaCmd_FeedbackMessage & msg)
{
  return mecha_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<mecha_control::action::DaizaCmd_FeedbackMessage>()
{
  return "mecha_control::action::DaizaCmd_FeedbackMessage";
}

template<>
inline const char * name<mecha_control::action::DaizaCmd_FeedbackMessage>()
{
  return "mecha_control/action/DaizaCmd_FeedbackMessage";
}

template<>
struct has_fixed_size<mecha_control::action::DaizaCmd_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mecha_control::action::DaizaCmd_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mecha_control::action::DaizaCmd_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mecha_control::action::DaizaCmd_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mecha_control::action::DaizaCmd_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<mecha_control::action::DaizaCmd>
  : std::true_type
{
};

template<>
struct is_action_goal<mecha_control::action::DaizaCmd_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mecha_control::action::DaizaCmd_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mecha_control::action::DaizaCmd_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__TRAITS_HPP_
