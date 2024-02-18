// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pure_pursuit:action/PathAndFeedback.idl
// generated code does not contain a copyright notice

#ifndef PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__BUILDER_HPP_
#define PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pure_pursuit/action/detail/path_and_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_Goal_feedback_indices
{
public:
  explicit Init_PathAndFeedback_Goal_feedback_indices(::pure_pursuit::action::PathAndFeedback_Goal & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::action::PathAndFeedback_Goal feedback_indices(::pure_pursuit::action::PathAndFeedback_Goal::_feedback_indices_type arg)
  {
    msg_.feedback_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_Goal msg_;
};

class Init_PathAndFeedback_Goal_path_with_angles
{
public:
  Init_PathAndFeedback_Goal_path_with_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathAndFeedback_Goal_feedback_indices path_with_angles(::pure_pursuit::action::PathAndFeedback_Goal::_path_with_angles_type arg)
  {
    msg_.path_with_angles = std::move(arg);
    return Init_PathAndFeedback_Goal_feedback_indices(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_Goal>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_Goal_path_with_angles();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_Result_final_index
{
public:
  Init_PathAndFeedback_Result_final_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pure_pursuit::action::PathAndFeedback_Result final_index(::pure_pursuit::action::PathAndFeedback_Result::_final_index_type arg)
  {
    msg_.final_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_Result>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_Result_final_index();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_Feedback_current_index
{
public:
  Init_PathAndFeedback_Feedback_current_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pure_pursuit::action::PathAndFeedback_Feedback current_index(::pure_pursuit::action::PathAndFeedback_Feedback::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_Feedback>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_Feedback_current_index();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_SendGoal_Request_goal
{
public:
  explicit Init_PathAndFeedback_SendGoal_Request_goal(::pure_pursuit::action::PathAndFeedback_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Request goal(::pure_pursuit::action::PathAndFeedback_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Request msg_;
};

class Init_PathAndFeedback_SendGoal_Request_goal_id
{
public:
  Init_PathAndFeedback_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathAndFeedback_SendGoal_Request_goal goal_id(::pure_pursuit::action::PathAndFeedback_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathAndFeedback_SendGoal_Request_goal(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_SendGoal_Request>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_SendGoal_Request_goal_id();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_SendGoal_Response_stamp
{
public:
  explicit Init_PathAndFeedback_SendGoal_Response_stamp(::pure_pursuit::action::PathAndFeedback_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Response stamp(::pure_pursuit::action::PathAndFeedback_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Response msg_;
};

class Init_PathAndFeedback_SendGoal_Response_accepted
{
public:
  Init_PathAndFeedback_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathAndFeedback_SendGoal_Response_stamp accepted(::pure_pursuit::action::PathAndFeedback_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PathAndFeedback_SendGoal_Response_stamp(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_SendGoal_Response>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_SendGoal_Response_accepted();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_GetResult_Request_goal_id
{
public:
  Init_PathAndFeedback_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pure_pursuit::action::PathAndFeedback_GetResult_Request goal_id(::pure_pursuit::action::PathAndFeedback_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_GetResult_Request>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_GetResult_Request_goal_id();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_GetResult_Response_result
{
public:
  explicit Init_PathAndFeedback_GetResult_Response_result(::pure_pursuit::action::PathAndFeedback_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::action::PathAndFeedback_GetResult_Response result(::pure_pursuit::action::PathAndFeedback_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_GetResult_Response msg_;
};

class Init_PathAndFeedback_GetResult_Response_status
{
public:
  Init_PathAndFeedback_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathAndFeedback_GetResult_Response_result status(::pure_pursuit::action::PathAndFeedback_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PathAndFeedback_GetResult_Response_result(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_GetResult_Response>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_GetResult_Response_status();
}

}  // namespace pure_pursuit


namespace pure_pursuit
{

namespace action
{

namespace builder
{

class Init_PathAndFeedback_FeedbackMessage_feedback
{
public:
  explicit Init_PathAndFeedback_FeedbackMessage_feedback(::pure_pursuit::action::PathAndFeedback_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pure_pursuit::action::PathAndFeedback_FeedbackMessage feedback(::pure_pursuit::action::PathAndFeedback_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_FeedbackMessage msg_;
};

class Init_PathAndFeedback_FeedbackMessage_goal_id
{
public:
  Init_PathAndFeedback_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathAndFeedback_FeedbackMessage_feedback goal_id(::pure_pursuit::action::PathAndFeedback_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathAndFeedback_FeedbackMessage_feedback(msg_);
  }

private:
  ::pure_pursuit::action::PathAndFeedback_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pure_pursuit::action::PathAndFeedback_FeedbackMessage>()
{
  return pure_pursuit::action::builder::Init_PathAndFeedback_FeedbackMessage_goal_id();
}

}  // namespace pure_pursuit

#endif  // PURE_PURSUIT__ACTION__DETAIL__PATH_AND_FEEDBACK__BUILDER_HPP_
