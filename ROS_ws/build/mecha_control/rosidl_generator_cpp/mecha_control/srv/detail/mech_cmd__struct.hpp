// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_HPP_
#define MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecha_control__srv__MechCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__srv__MechCmd_Request __declspec(deprecated)
#endif

namespace mecha_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MechCmd_Request_
{
  using Type = MechCmd_Request_<ContainerAllocator>;

  explicit MechCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit MechCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOP =
    0u;
  static constexpr uint8_t READY =
    1u;
  static constexpr uint8_t EXPAND =
    2u;
  static constexpr uint8_t CONTRACT =
    3u;
  static constexpr uint8_t CLAMP =
    4u;
  static constexpr uint8_t UNCLAMP =
    5u;
  static constexpr uint8_t EXPAND_AND_UNCLAMP =
    6u;
  static constexpr uint8_t CLAMP_AND_CONTRACT =
    7u;
  static constexpr uint8_t EXPAND_AND_PLACE =
    8u;
  static constexpr uint8_t EXPAND_AND_PLACE_AND_CONTRACT =
    9u;

  // pointer types
  using RawPtr =
    mecha_control::srv::MechCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::srv::MechCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::srv::MechCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::srv::MechCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__srv__MechCmd_Request
    std::shared_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__srv__MechCmd_Request
    std::shared_ptr<mecha_control::srv::MechCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MechCmd_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const MechCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MechCmd_Request_

// alias to use template instance with default allocator
using MechCmd_Request =
  mecha_control::srv::MechCmd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::READY;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::EXPAND;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::CLAMP;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::UNCLAMP;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::EXPAND_AND_UNCLAMP;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::CLAMP_AND_CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::EXPAND_AND_PLACE;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Request_<ContainerAllocator>::EXPAND_AND_PLACE_AND_CONTRACT;

}  // namespace srv

}  // namespace mecha_control


#ifndef _WIN32
# define DEPRECATED__mecha_control__srv__MechCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__srv__MechCmd_Response __declspec(deprecated)
#endif

namespace mecha_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MechCmd_Response_
{
  using Type = MechCmd_Response_<ContainerAllocator>;

  explicit MechCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit MechCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OK =
    0u;
  static constexpr uint8_t ERR_UNEXPECTED_ARG =
    1u;
  static constexpr uint8_t ERR_CANNOT_PROCESS =
    2u;

  // pointer types
  using RawPtr =
    mecha_control::srv::MechCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::srv::MechCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::srv::MechCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::srv::MechCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__srv__MechCmd_Response
    std::shared_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__srv__MechCmd_Response
    std::shared_ptr<mecha_control::srv::MechCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MechCmd_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MechCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MechCmd_Response_

// alias to use template instance with default allocator
using MechCmd_Response =
  mecha_control::srv::MechCmd_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Response_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Response_<ContainerAllocator>::ERR_UNEXPECTED_ARG;
template<typename ContainerAllocator>
constexpr uint8_t MechCmd_Response_<ContainerAllocator>::ERR_CANNOT_PROCESS;

}  // namespace srv

}  // namespace mecha_control

namespace mecha_control
{

namespace srv
{

struct MechCmd
{
  using Request = mecha_control::srv::MechCmd_Request;
  using Response = mecha_control::srv::MechCmd_Response;
};

}  // namespace srv

}  // namespace mecha_control

#endif  // MECHA_CONTROL__SRV__DETAIL__MECH_CMD__STRUCT_HPP_
