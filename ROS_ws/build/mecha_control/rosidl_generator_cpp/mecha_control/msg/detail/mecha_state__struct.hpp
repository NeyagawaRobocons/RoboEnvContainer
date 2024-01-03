// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:msg/MechaState.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_HPP_
#define MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecha_control__msg__MechaState __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__msg__MechaState __declspec(deprecated)
#endif

namespace mecha_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MechaState_
{
  using Type = MechaState_<ContainerAllocator>;

  explicit MechaState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->daiza_state = 0;
      this->hina_state = 0;
      this->bonbori_state = false;
    }
  }

  explicit MechaState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->daiza_state = 0;
      this->hina_state = 0;
      this->bonbori_state = false;
    }
  }

  // field types and members
  using _daiza_state_type =
    unsigned char;
  _daiza_state_type daiza_state;
  using _hina_state_type =
    unsigned char;
  _hina_state_type hina_state;
  using _bonbori_state_type =
    bool;
  _bonbori_state_type bonbori_state;

  // setters for named parameter idiom
  Type & set__daiza_state(
    const unsigned char & _arg)
  {
    this->daiza_state = _arg;
    return *this;
  }
  Type & set__hina_state(
    const unsigned char & _arg)
  {
    this->hina_state = _arg;
    return *this;
  }
  Type & set__bonbori_state(
    const bool & _arg)
  {
    this->bonbori_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::msg::MechaState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::msg::MechaState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::msg::MechaState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::msg::MechaState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::MechaState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::MechaState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::msg::MechaState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::msg::MechaState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::msg::MechaState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::msg::MechaState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__msg__MechaState
    std::shared_ptr<mecha_control::msg::MechaState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__msg__MechaState
    std::shared_ptr<mecha_control::msg::MechaState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MechaState_ & other) const
  {
    if (this->daiza_state != other.daiza_state) {
      return false;
    }
    if (this->hina_state != other.hina_state) {
      return false;
    }
    if (this->bonbori_state != other.bonbori_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MechaState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MechaState_

// alias to use template instance with default allocator
using MechaState =
  mecha_control::msg::MechaState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mecha_control

#endif  // MECHA_CONTROL__MSG__DETAIL__MECHA_STATE__STRUCT_HPP_
