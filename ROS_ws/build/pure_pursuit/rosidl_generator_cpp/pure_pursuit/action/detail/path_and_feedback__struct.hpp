// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_HPP_
#define PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path_with_angles'
#include "pure_pursuit/msg/detail/path2_d_with_angles__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Goal __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_Goal_
{
  using Type = PathAndFeedback_Goal_<ContainerAllocator>;

  explicit PathAndFeedback_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_with_angles(_init)
  {
    (void)_init;
  }

  explicit PathAndFeedback_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_with_angles(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_with_angles_type =
    pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator>;
  _path_with_angles_type path_with_angles;
  using _feedback_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _feedback_indices_type feedback_indices;

  // setters for named parameter idiom
  Type & set__path_with_angles(
    const pure_pursuit::msg::Path2DWithAngles_<ContainerAllocator> & _arg)
  {
    this->path_with_angles = _arg;
    return *this;
  }
  Type & set__feedback_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->feedback_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Goal
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Goal
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_Goal_ & other) const
  {
    if (this->path_with_angles != other.path_with_angles) {
      return false;
    }
    if (this->feedback_indices != other.feedback_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_Goal_

// alias to use template instance with default allocator
using PathAndFeedback_Goal =
  pure_pursuit::action::PathAndFeedback_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit


#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Result __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Result __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_Result_
{
  using Type = PathAndFeedback_Result_<ContainerAllocator>;

  explicit PathAndFeedback_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_index = 0l;
    }
  }

  explicit PathAndFeedback_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_index = 0l;
    }
  }

  // field types and members
  using _final_index_type =
    int32_t;
  _final_index_type final_index;

  // setters for named parameter idiom
  Type & set__final_index(
    const int32_t & _arg)
  {
    this->final_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Result
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Result
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_Result_ & other) const
  {
    if (this->final_index != other.final_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_Result_

// alias to use template instance with default allocator
using PathAndFeedback_Result =
  pure_pursuit::action::PathAndFeedback_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit


#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_Feedback __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_Feedback_
{
  using Type = PathAndFeedback_Feedback_<ContainerAllocator>;

  explicit PathAndFeedback_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_index = 0l;
    }
  }

  explicit PathAndFeedback_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_index = 0l;
    }
  }

  // field types and members
  using _current_index_type =
    int32_t;
  _current_index_type current_index;

  // setters for named parameter idiom
  Type & set__current_index(
    const int32_t & _arg)
  {
    this->current_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Feedback
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_Feedback
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_Feedback_ & other) const
  {
    if (this->current_index != other.current_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_Feedback_

// alias to use template instance with default allocator
using PathAndFeedback_Feedback =
  pure_pursuit::action::PathAndFeedback_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Request __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_SendGoal_Request_
{
  using Type = PathAndFeedback_SendGoal_Request_<ContainerAllocator>;

  explicit PathAndFeedback_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PathAndFeedback_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pure_pursuit::action::PathAndFeedback_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Request
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Request
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_SendGoal_Request_

// alias to use template instance with default allocator
using PathAndFeedback_SendGoal_Request =
  pure_pursuit::action::PathAndFeedback_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Response __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_SendGoal_Response_
{
  using Type = PathAndFeedback_SendGoal_Response_<ContainerAllocator>;

  explicit PathAndFeedback_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PathAndFeedback_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Response
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_SendGoal_Response
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_SendGoal_Response_

// alias to use template instance with default allocator
using PathAndFeedback_SendGoal_Response =
  pure_pursuit::action::PathAndFeedback_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit

namespace pure_pursuit
{

namespace action
{

struct PathAndFeedback_SendGoal
{
  using Request = pure_pursuit::action::PathAndFeedback_SendGoal_Request;
  using Response = pure_pursuit::action::PathAndFeedback_SendGoal_Response;
};

}  // namespace action

}  // namespace pure_pursuit


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Request __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_GetResult_Request_
{
  using Type = PathAndFeedback_GetResult_Request_<ContainerAllocator>;

  explicit PathAndFeedback_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PathAndFeedback_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Request
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Request
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_GetResult_Request_

// alias to use template instance with default allocator
using PathAndFeedback_GetResult_Request =
  pure_pursuit::action::PathAndFeedback_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit


// Include directives for member types
// Member 'result'
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Response __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_GetResult_Response_
{
  using Type = PathAndFeedback_GetResult_Response_<ContainerAllocator>;

  explicit PathAndFeedback_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PathAndFeedback_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pure_pursuit::action::PathAndFeedback_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Response
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_GetResult_Response
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_GetResult_Response_

// alias to use template instance with default allocator
using PathAndFeedback_GetResult_Response =
  pure_pursuit::action::PathAndFeedback_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit

namespace pure_pursuit
{

namespace action
{

struct PathAndFeedback_GetResult
{
  using Request = pure_pursuit::action::PathAndFeedback_GetResult_Request;
  using Response = pure_pursuit::action::PathAndFeedback_GetResult_Response;
};

}  // namespace action

}  // namespace pure_pursuit


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pure_pursuit__action__PathAndFeedback_FeedbackMessage __declspec(deprecated)
#endif

namespace pure_pursuit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PathAndFeedback_FeedbackMessage_
{
  using Type = PathAndFeedback_FeedbackMessage_<ContainerAllocator>;

  explicit PathAndFeedback_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PathAndFeedback_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pure_pursuit::action::PathAndFeedback_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_FeedbackMessage
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pure_pursuit__action__PathAndFeedback_FeedbackMessage
    std::shared_ptr<pure_pursuit::action::PathAndFeedback_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathAndFeedback_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathAndFeedback_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathAndFeedback_FeedbackMessage_

// alias to use template instance with default allocator
using PathAndFeedback_FeedbackMessage =
  pure_pursuit::action::PathAndFeedback_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pure_pursuit

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pure_pursuit
{

namespace action
{

struct PathAndFeedback
{
  /// The goal message defined in the action definition.
  using Goal = pure_pursuit::action::PathAndFeedback_Goal;
  /// The result message defined in the action definition.
  using Result = pure_pursuit::action::PathAndFeedback_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pure_pursuit::action::PathAndFeedback_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pure_pursuit::action::PathAndFeedback_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pure_pursuit::action::PathAndFeedback_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pure_pursuit::action::PathAndFeedback_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PathAndFeedback PathAndFeedback;

}  // namespace action

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__STRUCT_HPP_
