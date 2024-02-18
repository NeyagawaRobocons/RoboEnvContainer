// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pure_pursuit:msg/PointAndAngle.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_HPP_
#define PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pure_pursuit__msg__PointAndAngle __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__msg__PointAndAngle __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointAndAngle_
{
  using Type = PointAndAngle_<ContainerAllocator>;

  explicit PointAndAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
    }
  }

  explicit PointAndAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;

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
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::msg::PointAndAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::msg::PointAndAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__msg__PointAndAngle
    std::shared_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__msg__PointAndAngle
    std::shared_ptr<pure_pursuit::msg::PointAndAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointAndAngle_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointAndAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointAndAngle_

// alias to use template instance with default allocator
using PointAndAngle =
  pure_pursuit::msg::PointAndAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__MSG__DETAIL__POINT_AND_ANGLE__STRUCT_HPP_
