// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__BUILDER_HPP_
#define PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pure_pursuit
{

namespace msg
{

namespace builder
{

class Init_Path2DWithAngles_path_with_angles
{
public:
  Init_Path2DWithAngles_path_with_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pure_pursuit::msg::Path2DWithAngles path_with_angles(::pure_pursuit::msg::Path2DWithAngles::_path_with_angles_type arg)
  {
    msg_.path_with_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::msg::Path2DWithAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::msg::Path2DWithAngles>()
{
  return pure_pursuit::msg::builder::Init_Path2DWithAngles_path_with_angles();
}

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__BUILDER_HPP_
