// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:msg/PointAndMechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "mecha_control/msg/detail/mecha_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__msg__PointAndMechaState __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__msg__PointAndMechaState __declspec(deprecated)
#endif

namespace mecha_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointAndMechaState_
{
  using Type = PointAndMechaState_<ContainerAllocator>;

  explicit PointAndMechaState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->angle = 0.0;
    }
  }

  explicit PointAndMechaState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->angle = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _angle_type =
    double;
  _angle_type angle;
  using _command_type =
    mecha_control::msg::MechaState_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__command(
    const mecha_control::msg::MechaState_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::msg::PointAndMechaState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::msg::PointAndMechaState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::PointAndMechaState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::PointAndMechaState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__msg__PointAndMechaState
    std::shared_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__msg__PointAndMechaState
    std::shared_ptr<mecha_control::msg::PointAndMechaState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointAndMechaState_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointAndMechaState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointAndMechaState_

// alias to use template instance with default allocator
using PointAndMechaState =
  mecha_control::msg::PointAndMechaState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE__STRUCT_HPP_
