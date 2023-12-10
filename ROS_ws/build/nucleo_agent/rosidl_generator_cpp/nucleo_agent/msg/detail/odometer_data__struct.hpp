// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nucleo_agent:msg/OdometerData.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nucleo_agent__msg__OdometerData __attribute__((deprecated))
#else
# define DEPRECATED__nucleo_agent__msg__OdometerData __declspec(deprecated)
#endif

namespace nucleo_agent
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OdometerData_
{
  using Type = OdometerData_<ContainerAllocator>;

  explicit OdometerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->rotation.begin(), this->rotation.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular_vel.begin(), this->angular_vel.end(), 0.0);
    }
  }

  explicit OdometerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rotation(_alloc),
    angular_vel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->rotation.begin(), this->rotation.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular_vel.begin(), this->angular_vel.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rotation_type =
    std::array<double, 3>;
  _rotation_type rotation;
  using _angular_vel_type =
    std::array<double, 3>;
  _angular_vel_type angular_vel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rotation(
    const std::array<double, 3> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__angular_vel(
    const std::array<double, 3> & _arg)
  {
    this->angular_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nucleo_agent::msg::OdometerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const nucleo_agent::msg::OdometerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nucleo_agent::msg::OdometerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nucleo_agent::msg::OdometerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nucleo_agent__msg__OdometerData
    std::shared_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nucleo_agent__msg__OdometerData
    std::shared_ptr<nucleo_agent::msg::OdometerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdometerData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->angular_vel != other.angular_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdometerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdometerData_

// alias to use template instance with default allocator
using OdometerData =
  nucleo_agent::msg::OdometerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nucleo_agent

#endif  // NUCLEO_AGENT__MSG__DETAIL__ODOMETER_DATA__STRUCT_HPP_
