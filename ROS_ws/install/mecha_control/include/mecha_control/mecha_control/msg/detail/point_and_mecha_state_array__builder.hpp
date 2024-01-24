// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__BUILDER_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/msg/detail/point_and_mecha_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace msg
{

namespace builder
{

class Init_PointAndMechaStateArray_points
{
public:
  Init_PointAndMechaStateArray_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::msg::PointAndMechaStateArray points(::mecha_control::msg::PointAndMechaStateArray::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::msg::PointAndMechaStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::msg::PointAndMechaStateArray>()
{
  return mecha_control::msg::builder::Init_PointAndMechaStateArray_points();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__BUILDER_HPP_
