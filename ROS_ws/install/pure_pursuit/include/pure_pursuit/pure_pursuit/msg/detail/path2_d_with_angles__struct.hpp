// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pure_pursuit:msg/Path2DWithAngles.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_HPP_
#define PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path_with_angles'
#include "pure_pursuit/msg/detail/point_and_angle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__msg__Path2DWithAngles __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__msg__Path2DWithAngles __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path2DWithAngles_
{
  using Type = Path2DWithAngles_<ContainerAllocator>;

  explicit Path2DWithAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Path2DWithAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_with_angles_type =
    std::vector<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>>;
  _path_with_angles_type path_with_angles;

  // setters for named parameter idiom
  Type & set__path_with_angles(
    const std::vector<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pure_pursuit::msg::PointAndAngle_<ContainerAllocator>>> & _arg)
  {
    this->path_with_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__msg__Path2DWithAngles
    std::shared_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__msg__Path2DWithAngles
    std::shared_ptr<pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path2DWithAngles_ & other) const
  {
    if (this->path_with_angles != other.path_with_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path2DWithAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path2DWithAngles_

// alias to use template instance with default allocator
using Path2DWithAngles =
  pure_pursuit::msg::Path2DWithAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__MSG__DETAIL__PATH2_D_WITH_ANGLES__STRUCT_HPP_
