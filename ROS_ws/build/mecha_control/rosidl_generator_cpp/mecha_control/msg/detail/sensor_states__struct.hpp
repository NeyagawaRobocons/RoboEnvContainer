// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:msg/SensorStates.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_HPP_
#define MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecha_control__msg__SensorStates __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__msg__SensorStates __declspec(deprecated)
#endif

namespace mecha_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorStates_
{
  using Type = SensorStates_<ContainerAllocator>;

  explicit SensorStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SensorStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _potentiometer_angles_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _potentiometer_angles_type potentiometer_angles;
  using _limit_switch_states_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _limit_switch_states_type limit_switch_states;
  using _cylinder_states_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _cylinder_states_type cylinder_states;

  // setters for named parameter idiom
  Type & set__potentiometer_angles(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->potentiometer_angles = _arg;
    return *this;
  }
  Type & set__limit_switch_states(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->limit_switch_states = _arg;
    return *this;
  }
  Type & set__cylinder_states(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->cylinder_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::msg::SensorStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::msg::SensorStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::msg::SensorStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::msg::SensorStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::SensorStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::SensorStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::SensorStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::SensorStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::msg::SensorStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::msg::SensorStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__msg__SensorStates
    std::shared_ptr<mecha_control::msg::SensorStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__msg__SensorStates
    std::shared_ptr<mecha_control::msg::SensorStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorStates_ & other) const
  {
    if (this->potentiometer_angles != other.potentiometer_angles) {
      return false;
    }
    if (this->limit_switch_states != other.limit_switch_states) {
      return false;
    }
    if (this->cylinder_states != other.cylinder_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorStates_

// alias to use template instance with default allocator
using SensorStates =
  mecha_control::msg::SensorStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__SENSOR_STATES__STRUCT_HPP_
