// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mecha_control:action/HinaCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mecha_control/action/detail/hina_cmd__struct.h"
#include "mecha_control/action/detail/hina_cmd__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_Goal_type_support_ids_t;

static const _HinaCmd_Goal_type_support_ids_t _HinaCmd_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_Goal_type_support_symbol_names_t _HinaCmd_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_Goal)),
  }
};

typedef struct _HinaCmd_Goal_type_support_data_t
{
  void * data[2];
} _HinaCmd_Goal_type_support_data_t;

static _HinaCmd_Goal_type_support_data_t _HinaCmd_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_Goal_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_Goal)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_Result_type_support_ids_t;

static const _HinaCmd_Result_type_support_ids_t _HinaCmd_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_Result_type_support_symbol_names_t _HinaCmd_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_Result)),
  }
};

typedef struct _HinaCmd_Result_type_support_data_t
{
  void * data[2];
} _HinaCmd_Result_type_support_data_t;

static _HinaCmd_Result_type_support_data_t _HinaCmd_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_Result_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_Result_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_Result_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_Result)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_Feedback_type_support_ids_t;

static const _HinaCmd_Feedback_type_support_ids_t _HinaCmd_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_Feedback_type_support_symbol_names_t _HinaCmd_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_Feedback)),
  }
};

typedef struct _HinaCmd_Feedback_type_support_data_t
{
  void * data[2];
} _HinaCmd_Feedback_type_support_data_t;

static _HinaCmd_Feedback_type_support_data_t _HinaCmd_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_Feedback_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_Feedback)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_SendGoal_Request_type_support_ids_t;

static const _HinaCmd_SendGoal_Request_type_support_ids_t _HinaCmd_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_SendGoal_Request_type_support_symbol_names_t _HinaCmd_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_SendGoal_Request)),
  }
};

typedef struct _HinaCmd_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _HinaCmd_SendGoal_Request_type_support_data_t;

static _HinaCmd_SendGoal_Request_type_support_data_t _HinaCmd_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_SendGoal_Request_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_SendGoal_Request)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_SendGoal_Response_type_support_ids_t;

static const _HinaCmd_SendGoal_Response_type_support_ids_t _HinaCmd_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_SendGoal_Response_type_support_symbol_names_t _HinaCmd_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_SendGoal_Response)),
  }
};

typedef struct _HinaCmd_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _HinaCmd_SendGoal_Response_type_support_data_t;

static _HinaCmd_SendGoal_Response_type_support_data_t _HinaCmd_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_SendGoal_Response_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_SendGoal_Response)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_SendGoal_type_support_ids_t;

static const _HinaCmd_SendGoal_type_support_ids_t _HinaCmd_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_SendGoal_type_support_symbol_names_t _HinaCmd_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_SendGoal)),
  }
};

typedef struct _HinaCmd_SendGoal_type_support_data_t
{
  void * data[2];
} _HinaCmd_SendGoal_type_support_data_t;

static _HinaCmd_SendGoal_type_support_data_t _HinaCmd_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_SendGoal_service_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HinaCmd_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_SendGoal)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_GetResult_Request_type_support_ids_t;

static const _HinaCmd_GetResult_Request_type_support_ids_t _HinaCmd_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_GetResult_Request_type_support_symbol_names_t _HinaCmd_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_GetResult_Request)),
  }
};

typedef struct _HinaCmd_GetResult_Request_type_support_data_t
{
  void * data[2];
} _HinaCmd_GetResult_Request_type_support_data_t;

static _HinaCmd_GetResult_Request_type_support_data_t _HinaCmd_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_GetResult_Request_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_GetResult_Request)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_GetResult_Response_type_support_ids_t;

static const _HinaCmd_GetResult_Response_type_support_ids_t _HinaCmd_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_GetResult_Response_type_support_symbol_names_t _HinaCmd_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_GetResult_Response)),
  }
};

typedef struct _HinaCmd_GetResult_Response_type_support_data_t
{
  void * data[2];
} _HinaCmd_GetResult_Response_type_support_data_t;

static _HinaCmd_GetResult_Response_type_support_data_t _HinaCmd_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_GetResult_Response_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_GetResult_Response)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_GetResult_type_support_ids_t;

static const _HinaCmd_GetResult_type_support_ids_t _HinaCmd_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_GetResult_type_support_symbol_names_t _HinaCmd_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_GetResult)),
  }
};

typedef struct _HinaCmd_GetResult_type_support_data_t
{
  void * data[2];
} _HinaCmd_GetResult_type_support_data_t;

static _HinaCmd_GetResult_type_support_data_t _HinaCmd_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_GetResult_service_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HinaCmd_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_GetResult)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__struct.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mecha_control
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _HinaCmd_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HinaCmd_FeedbackMessage_type_support_ids_t;

static const _HinaCmd_FeedbackMessage_type_support_ids_t _HinaCmd_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HinaCmd_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HinaCmd_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HinaCmd_FeedbackMessage_type_support_symbol_names_t _HinaCmd_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mecha_control, action, HinaCmd_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, action, HinaCmd_FeedbackMessage)),
  }
};

typedef struct _HinaCmd_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _HinaCmd_FeedbackMessage_type_support_data_t;

static _HinaCmd_FeedbackMessage_type_support_data_t _HinaCmd_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HinaCmd_FeedbackMessage_message_typesupport_map = {
  2,
  "mecha_control",
  &_HinaCmd_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_HinaCmd_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_HinaCmd_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HinaCmd_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HinaCmd_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mecha_control

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mecha_control, action, HinaCmd_FeedbackMessage)() {
  return &::mecha_control::action::rosidl_typesupport_c::HinaCmd_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "mecha_control/action/hina_cmd.h"
// already included above
// #include "mecha_control/action/detail/hina_cmd__type_support.h"

static rosidl_action_type_support_t _mecha_control__action__HinaCmd__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, mecha_control, action, HinaCmd)()
{
  // Thread-safe by always writing the same values to the static struct
  _mecha_control__action__HinaCmd__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mecha_control, action, HinaCmd_SendGoal)();
  _mecha_control__action__HinaCmd__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mecha_control, action, HinaCmd_GetResult)();
  _mecha_control__action__HinaCmd__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _mecha_control__action__HinaCmd__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, mecha_control, action, HinaCmd_FeedbackMessage)();
  _mecha_control__action__HinaCmd__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_mecha_control__action__HinaCmd__typesupport_c;
}

#ifdef __cplusplus
}
#endif
