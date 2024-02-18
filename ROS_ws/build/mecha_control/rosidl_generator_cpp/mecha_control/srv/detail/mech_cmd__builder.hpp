// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__SRV__DETAIL__MECH_CMD__BUILDER_HPP_
#define MECHA_CONTROL__SRV__DETAIL__MECH_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/srv/detail/mech_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace srv
{

namespace builder
{

class Init_MechCmd_Request_command
{
public:
  Init_MechCmd_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::srv::MechCmd_Request command(::mecha_control::srv::MechCmd_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::srv::MechCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::srv::MechCmd_Request>()
{
  return mecha_control::srv::builder::Init_MechCmd_Request_command();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace srv
{

namespace builder
{

class Init_MechCmd_Response_result
{
public:
  Init_MechCmd_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::srv::MechCmd_Response result(::mecha_control::srv::MechCmd_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::srv::MechCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::srv::MechCmd_Response>()
{
  return mecha_control::srv::builder::Init_MechCmd_Response_result();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__SRV__DETAIL__MECH_CMD__BUILDER_HPP_
