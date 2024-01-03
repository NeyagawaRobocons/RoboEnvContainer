// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nucleo_agent:msg/ActuatorCommands.idl
// generated code does not contain a copyright notice

#ifndef NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_HPP_
#define NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nucleo_agent__msg__ActuatorCommands __attribute__((deprecated))
#else
# define DEPRECATED__nucleo_agent__msg__ActuatorCommands __declspec(deprecated)
#endif

namespace nucleo_agent
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorCommands_
{
  using Type = ActuatorCommands_<ContainerAllocator>;

  explicit ActuatorCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActuatorCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motor_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _motor_positions_type motor_positions;
  using _cylinder_states_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _cylinder_states_type cylinder_states;

  // setters for named parameter idiom
  Type & set__motor_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->motor_positions = _arg;
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
    nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nucleo_agent__msg__ActuatorCommands
    std::shared_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nucleo_agent__msg__ActuatorCommands
    std::shared_ptr<nucleo_agent::msg::ActuatorCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorCommands_ & other) const
  {
    if (this->motor_positions != other.motor_positions) {
      return false;
    }
    if (this->cylinder_states != other.cylinder_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorCommands_

// alias to use template instance with default allocator
using ActuatorCommands =
  nucleo_agent::msg::ActuatorCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nucleo_agent

#endif  // NUCLEO_AGENT__MSG__DETAIL__ACTUATOR_COMMANDS__STRUCT_HPP_
