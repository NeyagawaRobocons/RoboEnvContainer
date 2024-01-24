// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:msg/PointAndMechaStateArray.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_HPP_
#define MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "mecha_control/msg/detail/point_and_mecha_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__msg__PointAndMechaStateArray __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__msg__PointAndMechaStateArray __declspec(deprecated)
#endif

namespace mecha_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointAndMechaStateArray_
{
  using Type = PointAndMechaStateArray_<ContainerAllocator>;

  explicit PointAndMechaStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PointAndMechaStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<mecha_control::msg::PointAndMechaState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecha_control::msg::PointAndMechaState_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<mecha_control::msg::PointAndMechaState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mecha_control::msg::PointAndMechaState_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__msg__PointAndMechaStateArray
    std::shared_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__msg__PointAndMechaStateArray
    std::shared_ptr<mecha_control::msg::PointAndMechaStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointAndMechaStateArray_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointAndMechaStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointAndMechaStateArray_

// alias to use template instance with default allocator
using PointAndMechaStateArray =
  mecha_control::msg::PointAndMechaStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__POINT_AND_MECHA_STATE_ARRAY__STRUCT_HPP_
