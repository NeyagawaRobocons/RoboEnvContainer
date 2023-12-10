// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__BUILDER_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nucleo_agent/msg/detail/odometer_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nucleo_agent
{

namespace msg
{

namespace builder
{

class Init_OdometerData_angular_vel
{
public:
  explicit Init_OdometerData_angular_vel(::nucleo_agent::msg::OdometerData & msg)
  : msg_(msg)
  {}
  ::nucleo_agent::msg::OdometerData angular_vel(::nucleo_agent::msg::OdometerData::_angular_vel_type arg)
  {
    msg_.angular_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nucleo_agent::msg::OdometerData msg_;
};

class Init_OdometerData_rotation
{
public:
  explicit Init_OdometerData_rotation(::nucleo_agent::msg::OdometerData & msg)
  : msg_(msg)
  {}
  Init_OdometerData_angular_vel rotation(::nucleo_agent::msg::OdometerData::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_OdometerData_angular_vel(msg_);
  }

private:
  ::nucleo_agent::msg::OdometerData msg_;
};

class Init_OdometerData_header
{
public:
  Init_OdometerData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OdometerData_rotation header(::nucleo_agent::msg::OdometerData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OdometerData_rotation(msg_);
  }

private:
  ::nucleo_agent::msg::OdometerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nucleo_agent::msg::OdometerData>()
{
  return nucleo_agent::msg::builder::Init_OdometerData_header();
}

}  // namespace nucleo_agent

#endif  // NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__BUILDER_HPP_
