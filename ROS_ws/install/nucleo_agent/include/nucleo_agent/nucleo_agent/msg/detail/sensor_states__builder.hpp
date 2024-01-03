// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nucleo_agent:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nucleo_agent/msg/detail/sensor_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nucleo_agent
{

namespace msg
{

namespace builder
{

class Init_SensorStates_limit_switch_states
{
public:
  explicit Init_SensorStates_limit_switch_states(::nucleo_agent::msg::SensorStates & msg)
  : msg_(msg)
  {}
  ::nucleo_agent::msg::SensorStates limit_switch_states(::nucleo_agent::msg::SensorStates::_limit_switch_states_type arg)
  {
    msg_.limit_switch_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nucleo_agent::msg::SensorStates msg_;
};

class Init_SensorStates_potentiometer_angles
{
public:
  Init_SensorStates_potentiometer_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStates_limit_switch_states potentiometer_angles(::nucleo_agent::msg::SensorStates::_potentiometer_angles_type arg)
  {
    msg_.potentiometer_angles = std::move(arg);
    return Init_SensorStates_limit_switch_states(msg_);
  }

private:
  ::nucleo_agent::msg::SensorStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nucleo_agent::msg::SensorStates>()
{
  return nucleo_agent::msg::builder::Init_SensorStates_potentiometer_angles();
}

}  // namespace nucleo_agent

#endif  // NUCLEO_AGENT__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_
