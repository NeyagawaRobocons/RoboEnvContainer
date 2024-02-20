// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mecha_control:action/DaizaCmd.idl
// generated code does not contain a copyright notice

#ifndef MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__BUILDER_HPP_
#define MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mecha_control/action/detail/daiza_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_Goal_command
{
public:
  Init_DaizaCmd_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::action::DaizaCmd_Goal command(::mecha_control::action::DaizaCmd_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_Goal>()
{
  return mecha_control::action::builder::Init_DaizaCmd_Goal_command();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_Result_result
{
public:
  Init_DaizaCmd_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::action::DaizaCmd_Result result(::mecha_control::action::DaizaCmd_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_Result>()
{
  return mecha_control::action::builder::Init_DaizaCmd_Result_result();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_Feedback_feedback
{
public:
  Init_DaizaCmd_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::action::DaizaCmd_Feedback feedback(::mecha_control::action::DaizaCmd_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_Feedback>()
{
  return mecha_control::action::builder::Init_DaizaCmd_Feedback_feedback();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_SendGoal_Request_goal
{
public:
  explicit Init_DaizaCmd_SendGoal_Request_goal(::mecha_control::action::DaizaCmd_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mecha_control::action::DaizaCmd_SendGoal_Request goal(::mecha_control::action::DaizaCmd_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_SendGoal_Request msg_;
};

class Init_DaizaCmd_SendGoal_Request_goal_id
{
public:
  Init_DaizaCmd_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DaizaCmd_SendGoal_Request_goal goal_id(::mecha_control::action::DaizaCmd_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DaizaCmd_SendGoal_Request_goal(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_SendGoal_Request>()
{
  return mecha_control::action::builder::Init_DaizaCmd_SendGoal_Request_goal_id();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_SendGoal_Response_stamp
{
public:
  explicit Init_DaizaCmd_SendGoal_Response_stamp(::mecha_control::action::DaizaCmd_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mecha_control::action::DaizaCmd_SendGoal_Response stamp(::mecha_control::action::DaizaCmd_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_SendGoal_Response msg_;
};

class Init_DaizaCmd_SendGoal_Response_accepted
{
public:
  Init_DaizaCmd_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DaizaCmd_SendGoal_Response_stamp accepted(::mecha_control::action::DaizaCmd_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DaizaCmd_SendGoal_Response_stamp(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_SendGoal_Response>()
{
  return mecha_control::action::builder::Init_DaizaCmd_SendGoal_Response_accepted();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_GetResult_Request_goal_id
{
public:
  Init_DaizaCmd_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mecha_control::action::DaizaCmd_GetResult_Request goal_id(::mecha_control::action::DaizaCmd_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_GetResult_Request>()
{
  return mecha_control::action::builder::Init_DaizaCmd_GetResult_Request_goal_id();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_GetResult_Response_result
{
public:
  explicit Init_DaizaCmd_GetResult_Response_result(::mecha_control::action::DaizaCmd_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mecha_control::action::DaizaCmd_GetResult_Response result(::mecha_control::action::DaizaCmd_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_GetResult_Response msg_;
};

class Init_DaizaCmd_GetResult_Response_status
{
public:
  Init_DaizaCmd_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DaizaCmd_GetResult_Response_result status(::mecha_control::action::DaizaCmd_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DaizaCmd_GetResult_Response_result(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_GetResult_Response>()
{
  return mecha_control::action::builder::Init_DaizaCmd_GetResult_Response_status();
}

}  // namespace mecha_control


namespace mecha_control
{

namespace action
{

namespace builder
{

class Init_DaizaCmd_FeedbackMessage_feedback
{
public:
  explicit Init_DaizaCmd_FeedbackMessage_feedback(::mecha_control::action::DaizaCmd_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mecha_control::action::DaizaCmd_FeedbackMessage feedback(::mecha_control::action::DaizaCmd_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_FeedbackMessage msg_;
};

class Init_DaizaCmd_FeedbackMessage_goal_id
{
public:
  Init_DaizaCmd_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DaizaCmd_FeedbackMessage_feedback goal_id(::mecha_control::action::DaizaCmd_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DaizaCmd_FeedbackMessage_feedback(msg_);
  }

private:
  ::mecha_control::action::DaizaCmd_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mecha_control::action::DaizaCmd_FeedbackMessage>()
{
  return mecha_control::action::builder::Init_DaizaCmd_FeedbackMessage_goal_id();
}

}  // namespace mecha_control

#endif  // MECHA_CONTROL__ACTION__DETAIL__DAIZA_CMD__BUILDER_HPP_
