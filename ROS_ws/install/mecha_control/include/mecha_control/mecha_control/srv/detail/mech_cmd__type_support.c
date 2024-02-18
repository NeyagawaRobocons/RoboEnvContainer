// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mecha_control:srv/MechCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mecha_control/srv/detail/mech_cmd__rosidl_typesupport_introspection_c.h"
#include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mecha_control/srv/detail/mech_cmd__functions.h"
#include "mecha_control/srv/detail/mech_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecha_control__srv__MechCmd_Request__init(message_memory);
}

void mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_fini_function(void * message_memory)
{
  mecha_control__srv__MechCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__srv__MechCmd_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_members = {
  "mecha_control__srv",  // message namespace
  "MechCmd_Request",  // message name
  1,  // number of fields
  sizeof(mecha_control__srv__MechCmd_Request),
  mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_member_array,  // message members
  mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_type_support_handle = {
  0,
  &mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Request)() {
  if (!mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_type_support_handle.typesupport_identifier) {
    mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecha_control__srv__MechCmd_Request__rosidl_typesupport_introspection_c__MechCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mecha_control/srv/detail/mech_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mecha_control/srv/detail/mech_cmd__functions.h"
// already included above
// #include "mecha_control/srv/detail/mech_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mecha_control__srv__MechCmd_Response__init(message_memory);
}

void mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_fini_function(void * message_memory)
{
  mecha_control__srv__MechCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecha_control__srv__MechCmd_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_members = {
  "mecha_control__srv",  // message namespace
  "MechCmd_Response",  // message name
  1,  // number of fields
  sizeof(mecha_control__srv__MechCmd_Response),
  mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_member_array,  // message members
  mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_type_support_handle = {
  0,
  &mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Response)() {
  if (!mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_type_support_handle.typesupport_identifier) {
    mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mecha_control__srv__MechCmd_Response__rosidl_typesupport_introspection_c__MechCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mecha_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mecha_control/srv/detail/mech_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_members = {
  "mecha_control__srv",  // service namespace
  "MechCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_Request_message_type_support_handle,
  NULL  // response message
  // mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_type_support_handle = {
  0,
  &mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mecha_control
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd)() {
  if (!mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_type_support_handle.typesupport_identifier) {
    mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mecha_control, srv, MechCmd_Response)()->data;
  }

  return &mecha_control__srv__detail__mech_cmd__rosidl_typesupport_introspection_c__MechCmd_service_type_support_handle;
}
