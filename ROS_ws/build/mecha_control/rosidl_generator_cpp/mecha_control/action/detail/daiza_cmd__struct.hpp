// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:action/DaizaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__STRUCT_HPP_
#define MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_Goal __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_Goal_
{
  using Type = DaizaCmd_Goal_<ContainerAllocator>;

  explicit DaizaCmd_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit DaizaCmd_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Goal
    std::shared_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Goal
    std::shared_ptr<mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_Goal_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_Goal_

// alias to use template instance with default allocator
using DaizaCmd_Goal =
  mecha_control::action::DaizaCmd_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::READY;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::EXPAND;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::CLAMP;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::UNCLAMP;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::EXPAND_AND_UNCLAMP;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::CLAMP_AND_CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::EXPAND_AND_PLACE;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Goal_<ContainerAllocator>::EXPAND_AND_PLACE_AND_CONTRACT;

}  // namespace action

}  // namespace mecha_control


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_Result __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_Result __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_Result_
{
  using Type = DaizaCmd_Result_<ContainerAllocator>;

  explicit DaizaCmd_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit DaizaCmd_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t ABORTED =
    1u;
  static constexpr uint8_t ERR_UNEXPECTED_ARG =
    2u;
  static constexpr uint8_t ERR_CANNOT_PROCESS =
    3u;

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Result
    std::shared_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Result
    std::shared_ptr<mecha_control::action::DaizaCmd_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_Result_

// alias to use template instance with default allocator
using DaizaCmd_Result =
  mecha_control::action::DaizaCmd_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Result_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Result_<ContainerAllocator>::ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Result_<ContainerAllocator>::ERR_UNEXPECTED_ARG;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Result_<ContainerAllocator>::ERR_CANNOT_PROCESS;

}  // namespace action

}  // namespace mecha_control


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_Feedback __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_Feedback_
{
  using Type = DaizaCmd_Feedback_<ContainerAllocator>;

  explicit DaizaCmd_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0;
    }
  }

  explicit DaizaCmd_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0;
    }
  }

  // field types and members
  using _feedback_type =
    uint8_t;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const uint8_t & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STOPPING =
    0u;
  static constexpr uint8_t PREV_ACTION_ABORTED =
    1u;
  static constexpr uint8_t EXPANDED_AT_EXPAND_AND_UNCLAMP =
    2u;
  static constexpr uint8_t CLAMPED_AT_CLAMP_AND_CONTRACT =
    3u;
  static constexpr uint8_t EXPANDED_AT_EXPAND_AND_PLACE =
    4u;
  static constexpr uint8_t EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT =
    5u;
  static constexpr uint8_t CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT =
    6u;

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Feedback
    std::shared_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_Feedback
    std::shared_ptr<mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_Feedback_

// alias to use template instance with default allocator
using DaizaCmd_Feedback =
  mecha_control::action::DaizaCmd_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::STOPPING;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::PREV_ACTION_ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::EXPANDED_AT_EXPAND_AND_UNCLAMP;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::CLAMPED_AT_CLAMP_AND_CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::EXPANDED_AT_EXPAND_AND_PLACE;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t DaizaCmd_Feedback_<ContainerAllocator>::CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT;

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mecha_control/action/detail/daiza_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Request __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_SendGoal_Request_
{
  using Type = DaizaCmd_SendGoal_Request_<ContainerAllocator>;

  explicit DaizaCmd_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DaizaCmd_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    mecha_control::action::DaizaCmd_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mecha_control::action::DaizaCmd_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Request
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Request
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_SendGoal_Request_

// alias to use template instance with default allocator
using DaizaCmd_SendGoal_Request =
  mecha_control::action::DaizaCmd_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Response __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_SendGoal_Response_
{
  using Type = DaizaCmd_SendGoal_Response_<ContainerAllocator>;

  explicit DaizaCmd_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DaizaCmd_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Response
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_SendGoal_Response
    std::shared_ptr<mecha_control::action::DaizaCmd_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_SendGoal_Response_

// alias to use template instance with default allocator
using DaizaCmd_SendGoal_Response =
  mecha_control::action::DaizaCmd_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control

namespace mecha_control
{

namespace action
{

struct DaizaCmd_SendGoal
{
  using Request = mecha_control::action::DaizaCmd_SendGoal_Request;
  using Response = mecha_control::action::DaizaCmd_SendGoal_Response;
};

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Request __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_GetResult_Request_
{
  using Type = DaizaCmd_GetResult_Request_<ContainerAllocator>;

  explicit DaizaCmd_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DaizaCmd_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Request
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Request
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_GetResult_Request_

// alias to use template instance with default allocator
using DaizaCmd_GetResult_Request =
  mecha_control::action::DaizaCmd_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'result'
// already included above
// #include "mecha_control/action/detail/daiza_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Response __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_GetResult_Response_
{
  using Type = DaizaCmd_GetResult_Response_<ContainerAllocator>;

  explicit DaizaCmd_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DaizaCmd_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    mecha_control::action::DaizaCmd_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mecha_control::action::DaizaCmd_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Response
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_GetResult_Response
    std::shared_ptr<mecha_control::action::DaizaCmd_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_GetResult_Response_

// alias to use template instance with default allocator
using DaizaCmd_GetResult_Response =
  mecha_control::action::DaizaCmd_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control

namespace mecha_control
{

namespace action
{

struct DaizaCmd_GetResult
{
  using Request = mecha_control::action::DaizaCmd_GetResult_Request;
  using Response = mecha_control::action::DaizaCmd_GetResult_Response;
};

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mecha_control/action/detail/daiza_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__DaizaCmd_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__DaizaCmd_FeedbackMessage __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DaizaCmd_FeedbackMessage_
{
  using Type = DaizaCmd_FeedbackMessage_<ContainerAllocator>;

  explicit DaizaCmd_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DaizaCmd_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mecha_control::action::DaizaCmd_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__DaizaCmd_FeedbackMessage
    std::shared_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__DaizaCmd_FeedbackMessage
    std::shared_ptr<mecha_control::action::DaizaCmd_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DaizaCmd_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DaizaCmd_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DaizaCmd_FeedbackMessage_

// alias to use template instance with default allocator
using DaizaCmd_FeedbackMessage =
  mecha_control::action::DaizaCmd_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace mecha_control
{

namespace action
{

struct DaizaCmd
{
  /// The goal message defined in the action definition.
  using Goal = mecha_control::action::DaizaCmd_Goal;
  /// The result message defined in the action definition.
  using Result = mecha_control::action::DaizaCmd_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mecha_control::action::DaizaCmd_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mecha_control::action::DaizaCmd_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mecha_control::action::DaizaCmd_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mecha_control::action::DaizaCmd_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DaizaCmd DaizaCmd;

}  // namespace action

}  // namespace mecha_control

#endif  // MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__STRUCT_HPP_
