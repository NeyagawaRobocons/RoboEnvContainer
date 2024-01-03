// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nucleo_agent/msg/detail/actuator_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nucleo_agent
{

namespace msg
{

namespace builder
{

class Init_ActuatorCommands_cylinder_states
{
public:
  explicit Init_ActuatorCommands_cylinder_states(::nucleo_agent::msg::ActuatorCommands & msg)
  : msg_(msg)
  {}
  ::nucleo_agent::msg::ActuatorCommands cylinder_states(::nucleo_agent::msg::ActuatorCommands::_cylinder_states_type arg)
  {
    msg_.cylinder_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nucleo_agent::msg::ActuatorCommands msg_;
};

class Init_ActuatorCommands_motor_positions
{
public:
  Init_ActuatorCommands_motor_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorCommands_cylinder_states motor_positions(::nucleo_agent::msg::ActuatorCommands::_motor_positions_type arg)
  {
    msg_.motor_positions = std::move(arg);
    return Init_ActuatorCommands_cylinder_states(msg_);
  }

private:
  ::nucleo_agent::msg::ActuatorCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nucleo_agent::msg::ActuatorCommands>()
{
  return nucleo_agent::msg::builder::Init_ActuatorCommands_motor_positions();
}

}  // namespace nucleo_agent

#endif  // NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__BUILDER_HPP_
