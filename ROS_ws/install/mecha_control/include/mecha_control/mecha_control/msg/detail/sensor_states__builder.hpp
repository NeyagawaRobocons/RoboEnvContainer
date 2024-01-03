// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_
#define MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/msg/detail/sensor_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace msg
{

namespace builder
{

class Init_SensorStates_cylinder_states
{
public:
  explicit Init_SensorStates_cylinder_states(::mecha_control::msg::SensorStates & msg)
  : msg_(msg)
  {}
  ::mecha_control::msg::SensorStates cylinder_states(::mecha_control::msg::SensorStates::_cylinder_states_type arg)
  {
    msg_.cylinder_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::msg::SensorStates msg_;
};

class Init_SensorStates_limit_switch_states
{
public:
  explicit Init_SensorStates_limit_switch_states(::mecha_control::msg::SensorStates & msg)
  : msg_(msg)
  {}
  Init_SensorStates_cylinder_states limit_switch_states(::mecha_control::msg::SensorStates::_limit_switch_states_type arg)
  {
    msg_.limit_switch_states = std::move(arg);
    return Init_SensorStates_cylinder_states(msg_);
  }

private:
  ::mecha_control::msg::SensorStates msg_;
};

class Init_SensorStates_potentiometer_angles
{
public:
  Init_SensorStates_potentiometer_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStates_limit_switch_states potentiometer_angles(::mecha_control::msg::SensorStates::_potentiometer_angles_type arg)
  {
    msg_.potentiometer_angles = std::move(arg);
    return Init_SensorStates_limit_switch_states(msg_);
  }

private:
  ::mecha_control::msg::SensorStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::msg::SensorStates>()
{
  return mecha_control::msg::builder::Init_SensorStates_potentiometer_angles();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__BUILDER_HPP_
