// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__BUILDER_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/msg/detail/point_and_mecha_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace msg
{

namespace builder
{

class Init_PointAndMechaState_command
{
public:
  explicit Init_PointAndMechaState_command(::mecha_control::msg::PointAndMechaState & msg)
  : msg_(msg)
  {}
  ::mecha_control::msg::PointAndMechaState command(::mecha_control::msg::PointAndMechaState::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::msg::PointAndMechaState msg_;
};

class Init_PointAndMechaState_angle
{
public:
  explicit Init_PointAndMechaState_angle(::mecha_control::msg::PointAndMechaState & msg)
  : msg_(msg)
  {}
  Init_PointAndMechaState_command angle(::mecha_control::msg::PointAndMechaState::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_PointAndMechaState_command(msg_);
  }

private:
  ::mecha_control::msg::PointAndMechaState msg_;
};

class Init_PointAndMechaState_y
{
public:
  explicit Init_PointAndMechaState_y(::mecha_control::msg::PointAndMechaState & msg)
  : msg_(msg)
  {}
  Init_PointAndMechaState_angle y(::mecha_control::msg::PointAndMechaState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointAndMechaState_angle(msg_);
  }

private:
  ::mecha_control::msg::PointAndMechaState msg_;
};

class Init_PointAndMechaState_x
{
public:
  Init_PointAndMechaState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointAndMechaState_y x(::mecha_control::msg::PointAndMechaState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointAndMechaState_y(msg_);
  }

private:
  ::mecha_control::msg::PointAndMechaState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::msg::PointAndMechaState>()
{
  return mecha_control::msg::builder::Init_PointAndMechaState_x();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__BUILDER_HPP_
