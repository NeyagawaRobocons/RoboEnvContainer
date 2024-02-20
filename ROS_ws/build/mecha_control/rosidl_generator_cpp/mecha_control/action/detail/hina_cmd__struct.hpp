// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mecha_control:action/HinaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_HPP_
#define MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_Goal __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_Goal __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_Goal_
{
  using Type = HinaCmd_Goal_<ContainerAllocator>;

  explicit HinaCmd_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit HinaCmd_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t UP =
    2u;
  static constexpr uint8_t DOWN =
    3u;
  static constexpr uint8_t POS_CARRY =
    4u;
  static constexpr uint8_t POS_TAKE =
    5u;
  static constexpr uint8_t POS_PLACE =
    6u;
  static constexpr uint8_t GUIDE_EXPAND =
    7u;
  static constexpr uint8_t GUIDE_CONTRACT =
    8u;
  static constexpr uint8_t LATCH_UNLOCK =
    9u;
  static constexpr uint8_t LATCH_UNLOCK_1 =
    10u;
  static constexpr uint8_t LATCH_UNLOCK_2 =
    11u;
  static constexpr uint8_t DOWN_AND_TAKE =
    12u;
  static constexpr uint8_t UP_AND_CARRY =
    13u;
  static constexpr uint8_t UP_AND_PLACE =
    14u;

  // pointer types
  using RawPtr =
    mecha_control::action::HinaCmd_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_Goal
    std::shared_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_Goal
    std::shared_ptr<mecha_control::action::HinaCmd_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_Goal_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_Goal_

// alias to use template instance with default allocator
using HinaCmd_Goal =
  mecha_control::action::HinaCmd_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::READY;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::UP;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::DOWN;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::POS_CARRY;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::POS_TAKE;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::POS_PLACE;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::GUIDE_EXPAND;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::GUIDE_CONTRACT;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::LATCH_UNLOCK;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::LATCH_UNLOCK_1;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::LATCH_UNLOCK_2;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::DOWN_AND_TAKE;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::UP_AND_CARRY;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Goal_<ContainerAllocator>::UP_AND_PLACE;

}  // namespace action

}  // namespace mecha_control


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_Result __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_Result __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_Result_
{
  using Type = HinaCmd_Result_<ContainerAllocator>;

  explicit HinaCmd_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit HinaCmd_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_Result
    std::shared_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_Result
    std::shared_ptr<mecha_control::action::HinaCmd_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_Result_

// alias to use template instance with default allocator
using HinaCmd_Result =
  mecha_control::action::HinaCmd_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Result_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Result_<ContainerAllocator>::ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Result_<ContainerAllocator>::ERR_UNEXPECTED_ARG;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Result_<ContainerAllocator>::ERR_CANNOT_PROCESS;

}  // namespace action

}  // namespace mecha_control


#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_Feedback __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_Feedback_
{
  using Type = HinaCmd_Feedback_<ContainerAllocator>;

  explicit HinaCmd_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0;
    }
  }

  explicit HinaCmd_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t DOWN_AT_DOWN_AND_TAKE =
    2u;
  static constexpr uint8_t UP_AT_UP_AND_PLACE =
    3u;

  // pointer types
  using RawPtr =
    mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_Feedback
    std::shared_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_Feedback
    std::shared_ptr<mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_Feedback_

// alias to use template instance with default allocator
using HinaCmd_Feedback =
  mecha_control::action::HinaCmd_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Feedback_<ContainerAllocator>::STOPPING;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Feedback_<ContainerAllocator>::PREV_ACTION_ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Feedback_<ContainerAllocator>::DOWN_AT_DOWN_AND_TAKE;
template<typename ContainerAllocator>
constexpr uint8_t HinaCmd_Feedback_<ContainerAllocator>::UP_AT_UP_AND_PLACE;

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "mecha_control/action/detail/hina_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Request __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_SendGoal_Request_
{
  using Type = HinaCmd_SendGoal_Request_<ContainerAllocator>;

  explicit HinaCmd_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit HinaCmd_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const mecha_control::action::HinaCmd_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Request
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Request
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_SendGoal_Request_

// alias to use template instance with default allocator
using HinaCmd_SendGoal_Request =
  mecha_control::action::HinaCmd_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Response __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_SendGoal_Response_
{
  using Type = HinaCmd_SendGoal_Response_<ContainerAllocator>;

  explicit HinaCmd_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit HinaCmd_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Response
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_SendGoal_Response
    std::shared_ptr<mecha_control::action::HinaCmd_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_SendGoal_Response_

// alias to use template instance with default allocator
using HinaCmd_SendGoal_Response =
  mecha_control::action::HinaCmd_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control

namespace mecha_control
{

namespace action
{

struct HinaCmd_SendGoal
{
  using Request = mecha_control::action::HinaCmd_SendGoal_Request;
  using Response = mecha_control::action::HinaCmd_SendGoal_Response;
};

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_GetResult_Request __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_GetResult_Request_
{
  using Type = HinaCmd_GetResult_Request_<ContainerAllocator>;

  explicit HinaCmd_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit HinaCmd_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_GetResult_Request
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_GetResult_Request
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_GetResult_Request_

// alias to use template instance with default allocator
using HinaCmd_GetResult_Request =
  mecha_control::action::HinaCmd_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'result'
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_GetResult_Response __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_GetResult_Response_
{
  using Type = HinaCmd_GetResult_Response_<ContainerAllocator>;

  explicit HinaCmd_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit HinaCmd_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const mecha_control::action::HinaCmd_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_GetResult_Response
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_GetResult_Response
    std::shared_ptr<mecha_control::action::HinaCmd_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_GetResult_Response_

// alias to use template instance with default allocator
using HinaCmd_GetResult_Response =
  mecha_control::action::HinaCmd_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace mecha_control

namespace mecha_control
{

namespace action
{

struct HinaCmd_GetResult
{
  using Request = mecha_control::action::HinaCmd_GetResult_Request;
  using Response = mecha_control::action::HinaCmd_GetResult_Response;
};

}  // namespace action

}  // namespace mecha_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mecha_control__action__HinaCmd_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__mecha_control__action__HinaCmd_FeedbackMessage __declspec(deprecated)
#endif

namespace mecha_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HinaCmd_FeedbackMessage_
{
  using Type = HinaCmd_FeedbackMessage_<ContainerAllocator>;

  explicit HinaCmd_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit HinaCmd_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mecha_control::action::HinaCmd_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const mecha_control::action::HinaCmd_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mecha_control__action__HinaCmd_FeedbackMessage
    std::shared_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mecha_control__action__HinaCmd_FeedbackMessage
    std::shared_ptr<mecha_control::action::HinaCmd_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HinaCmd_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const HinaCmd_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HinaCmd_FeedbackMessage_

// alias to use template instance with default allocator
using HinaCmd_FeedbackMessage =
  mecha_control::action::HinaCmd_FeedbackMessage_<std::allocator<void>>;

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

struct HinaCmd
{
  /// The goal message defined in the action definition.
  using Goal = mecha_control::action::HinaCmd_Goal;
  /// The result message defined in the action definition.
  using Result = mecha_control::action::HinaCmd_Result;
  /// The feedback message defined in the action definition.
  using Feedback = mecha_control::action::HinaCmd_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = mecha_control::action::HinaCmd_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = mecha_control::action::HinaCmd_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = mecha_control::action::HinaCmd_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct HinaCmd HinaCmd;

}  // namespace action

}  // namespace mecha_control

#endif  // MECHA_CONTROL__ACTION__DETAIL__HINA_CMD__STRUCT_HPP_
