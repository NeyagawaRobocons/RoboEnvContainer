// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_
#define MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/msg/detail/actuator_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace msg
{

namespace builder
{

class Init_ActuatorCommands_cylinder_states
{
public:
  explicit Init_ActuatorCommands_cylinder_states(::mecha_control::msg::ActuatorCommands & msg)
  : msg_(msg)
  {}
  ::mecha_control::msg::ActuatorCommands cylinder_states(::mecha_control::msg::ActuatorCommands::_cylinder_states_type arg)
  {
    msg_.cylinder_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::msg::ActuatorCommands msg_;
};

class Init_ActuatorCommands_motor_positions
{
public:
  Init_ActuatorCommands_motor_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorCommands_cylinder_states motor_positions(::mecha_control::msg::ActuatorCommands::_motor_positions_type arg)
  {
    msg_.motor_positions = std::move(arg);
    return Init_ActuatorCommands_cylinder_states(msg_);
  }

private:
  ::mecha_control::msg::ActuatorCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::msg::ActuatorCommands>()
{
  return mecha_control::msg::builder::Init_ActuatorCommands_motor_positions();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_
