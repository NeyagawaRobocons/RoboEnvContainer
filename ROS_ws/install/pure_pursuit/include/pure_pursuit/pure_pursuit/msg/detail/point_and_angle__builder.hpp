// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__BUILDER_HPP_
#define PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pure_pursuit/msg/detail/point_and_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pure_pursuit
{

namespace msg
{

namespace builder
{

class Init_PointAndAngle_theta
{
public:
  explicit Init_PointAndAngle_theta(::pure_pursuit::msg::PointAndAngle & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::msg::PointAndAngle theta(::pure_pursuit::msg::PointAndAngle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::msg::PointAndAngle msg_;
};

class Init_PointAndAngle_y
{
public:
  explicit Init_PointAndAngle_y(::pure_pursuit::msg::PointAndAngle & msg)
  : msg_(msg)
  {}
  Init_PointAndAngle_theta y(::pure_pursuit::msg::PointAndAngle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointAndAngle_theta(msg_);
  }

private:
  ::pure_pursuit::msg::PointAndAngle msg_;
};

class Init_PointAndAngle_x
{
public:
  Init_PointAndAngle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointAndAngle_y x(::pure_pursuit::msg::PointAndAngle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointAndAngle_y(msg_);
  }

private:
  ::pure_pursuit::msg::PointAndAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::msg::PointAndAngle>()
{
  return pure_pursuit::msg::builder::Init_PointAndAngle_x();
}

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__BUILDER_HPP_
