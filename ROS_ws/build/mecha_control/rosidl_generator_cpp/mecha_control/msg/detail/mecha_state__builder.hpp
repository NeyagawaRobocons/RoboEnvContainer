// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__BUILDER_HPP_
#define MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/msg/detail/mecha_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace msg
{

namespace builder
{

class Init_MechaState_bonbori_state
{
public:
  explicit Init_MechaState_bonbori_state(::mecha_control::msg::MechaState & msg)
  : msg_(msg)
  {}
  ::mecha_control::msg::MechaState bonbori_state(::mecha_control::msg::MechaState::_bonbori_state_type arg)
  {
    msg_.bonbori_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::msg::MechaState msg_;
};

class Init_MechaState_hina_state
{
public:
  explicit Init_MechaState_hina_state(::mecha_control::msg::MechaState & msg)
  : msg_(msg)
  {}
  Init_MechaState_bonbori_state hina_state(::mecha_control::msg::MechaState::_hina_state_type arg)
  {
    msg_.hina_state = std::move(arg);
    return Init_MechaState_bonbori_state(msg_);
  }

private:
  ::mecha_control::msg::MechaState msg_;
};

class Init_MechaState_daiza_state
{
public:
  Init_MechaState_daiza_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MechaState_hina_state daiza_state(::mecha_control::msg::MechaState::_daiza_state_type arg)
  {
    msg_.daiza_state = std::move(arg);
    return Init_MechaState_hina_state(msg_);
  }

private:
  ::mecha_control::msg::MechaState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::msg::MechaState>()
{
  return mecha_control::msg::builder::Init_MechaState_daiza_state();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__BUILDER_HPP_
