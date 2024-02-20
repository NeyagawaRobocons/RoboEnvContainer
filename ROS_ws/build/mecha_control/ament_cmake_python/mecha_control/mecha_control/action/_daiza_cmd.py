# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mecha_control:action/DaizaCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DaizaCmd_Goal(type):
    """Metaclass of message 'DaizaCmd_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': 0,
        'READY': 1,
        'EXPAND': 2,
        'CONTRACT': 3,
        'CLAMP': 4,
        'UNCLAMP': 5,
        'EXPAND_AND_UNCLAMP': 6,
        'CLAMP_AND_CONTRACT': 7,
        'EXPAND_AND_PLACE': 8,
        'EXPAND_AND_PLACE_AND_CONTRACT': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'READY': cls.__constants['READY'],
            'EXPAND': cls.__constants['EXPAND'],
            'CONTRACT': cls.__constants['CONTRACT'],
            'CLAMP': cls.__constants['CLAMP'],
            'UNCLAMP': cls.__constants['UNCLAMP'],
            'EXPAND_AND_UNCLAMP': cls.__constants['EXPAND_AND_UNCLAMP'],
            'CLAMP_AND_CONTRACT': cls.__constants['CLAMP_AND_CONTRACT'],
            'EXPAND_AND_PLACE': cls.__constants['EXPAND_AND_PLACE'],
            'EXPAND_AND_PLACE_AND_CONTRACT': cls.__constants['EXPAND_AND_PLACE_AND_CONTRACT'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_DaizaCmd_Goal.__constants['STOP']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_DaizaCmd_Goal.__constants['READY']

    @property
    def EXPAND(self):
        """Message constant 'EXPAND'."""
        return Metaclass_DaizaCmd_Goal.__constants['EXPAND']

    @property
    def CONTRACT(self):
        """Message constant 'CONTRACT'."""
        return Metaclass_DaizaCmd_Goal.__constants['CONTRACT']

    @property
    def CLAMP(self):
        """Message constant 'CLAMP'."""
        return Metaclass_DaizaCmd_Goal.__constants['CLAMP']

    @property
    def UNCLAMP(self):
        """Message constant 'UNCLAMP'."""
        return Metaclass_DaizaCmd_Goal.__constants['UNCLAMP']

    @property
    def EXPAND_AND_UNCLAMP(self):
        """Message constant 'EXPAND_AND_UNCLAMP'."""
        return Metaclass_DaizaCmd_Goal.__constants['EXPAND_AND_UNCLAMP']

    @property
    def CLAMP_AND_CONTRACT(self):
        """Message constant 'CLAMP_AND_CONTRACT'."""
        return Metaclass_DaizaCmd_Goal.__constants['CLAMP_AND_CONTRACT']

    @property
    def EXPAND_AND_PLACE(self):
        """Message constant 'EXPAND_AND_PLACE'."""
        return Metaclass_DaizaCmd_Goal.__constants['EXPAND_AND_PLACE']

    @property
    def EXPAND_AND_PLACE_AND_CONTRACT(self):
        """Message constant 'EXPAND_AND_PLACE_AND_CONTRACT'."""
        return Metaclass_DaizaCmd_Goal.__constants['EXPAND_AND_PLACE_AND_CONTRACT']


class DaizaCmd_Goal(metaclass=Metaclass_DaizaCmd_Goal):
    """
    Message class 'DaizaCmd_Goal'.

    Constants:
      STOP
      READY
      EXPAND
      CONTRACT
      CLAMP
      UNCLAMP
      EXPAND_AND_UNCLAMP
      CLAMP_AND_CONTRACT
      EXPAND_AND_PLACE
      EXPAND_AND_PLACE_AND_CONTRACT
    """

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_Result(type):
    """Metaclass of message 'DaizaCmd_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'ABORTED': 1,
        'ERR_UNEXPECTED_ARG': 2,
        'ERR_CANNOT_PROCESS': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'ABORTED': cls.__constants['ABORTED'],
            'ERR_UNEXPECTED_ARG': cls.__constants['ERR_UNEXPECTED_ARG'],
            'ERR_CANNOT_PROCESS': cls.__constants['ERR_CANNOT_PROCESS'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_DaizaCmd_Result.__constants['OK']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_DaizaCmd_Result.__constants['ABORTED']

    @property
    def ERR_UNEXPECTED_ARG(self):
        """Message constant 'ERR_UNEXPECTED_ARG'."""
        return Metaclass_DaizaCmd_Result.__constants['ERR_UNEXPECTED_ARG']

    @property
    def ERR_CANNOT_PROCESS(self):
        """Message constant 'ERR_CANNOT_PROCESS'."""
        return Metaclass_DaizaCmd_Result.__constants['ERR_CANNOT_PROCESS']


class DaizaCmd_Result(metaclass=Metaclass_DaizaCmd_Result):
    """
    Message class 'DaizaCmd_Result'.

    Constants:
      OK
      ABORTED
      ERR_UNEXPECTED_ARG
      ERR_CANNOT_PROCESS
    """

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_Feedback(type):
    """Metaclass of message 'DaizaCmd_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOPPING': 0,
        'PREV_ACTION_ABORTED': 1,
        'EXPANDED_AT_EXPAND_AND_UNCLAMP': 2,
        'CLAMPED_AT_CLAMP_AND_CONTRACT': 3,
        'EXPANDED_AT_EXPAND_AND_PLACE': 4,
        'EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT': 5,
        'CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOPPING': cls.__constants['STOPPING'],
            'PREV_ACTION_ABORTED': cls.__constants['PREV_ACTION_ABORTED'],
            'EXPANDED_AT_EXPAND_AND_UNCLAMP': cls.__constants['EXPANDED_AT_EXPAND_AND_UNCLAMP'],
            'CLAMPED_AT_CLAMP_AND_CONTRACT': cls.__constants['CLAMPED_AT_CLAMP_AND_CONTRACT'],
            'EXPANDED_AT_EXPAND_AND_PLACE': cls.__constants['EXPANDED_AT_EXPAND_AND_PLACE'],
            'EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT': cls.__constants['EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT'],
            'CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT': cls.__constants['CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT'],
        }

    @property
    def STOPPING(self):
        """Message constant 'STOPPING'."""
        return Metaclass_DaizaCmd_Feedback.__constants['STOPPING']

    @property
    def PREV_ACTION_ABORTED(self):
        """Message constant 'PREV_ACTION_ABORTED'."""
        return Metaclass_DaizaCmd_Feedback.__constants['PREV_ACTION_ABORTED']

    @property
    def EXPANDED_AT_EXPAND_AND_UNCLAMP(self):
        """Message constant 'EXPANDED_AT_EXPAND_AND_UNCLAMP'."""
        return Metaclass_DaizaCmd_Feedback.__constants['EXPANDED_AT_EXPAND_AND_UNCLAMP']

    @property
    def CLAMPED_AT_CLAMP_AND_CONTRACT(self):
        """Message constant 'CLAMPED_AT_CLAMP_AND_CONTRACT'."""
        return Metaclass_DaizaCmd_Feedback.__constants['CLAMPED_AT_CLAMP_AND_CONTRACT']

    @property
    def EXPANDED_AT_EXPAND_AND_PLACE(self):
        """Message constant 'EXPANDED_AT_EXPAND_AND_PLACE'."""
        return Metaclass_DaizaCmd_Feedback.__constants['EXPANDED_AT_EXPAND_AND_PLACE']

    @property
    def EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT(self):
        """Message constant 'EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT'."""
        return Metaclass_DaizaCmd_Feedback.__constants['EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT']

    @property
    def CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT(self):
        """Message constant 'CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT'."""
        return Metaclass_DaizaCmd_Feedback.__constants['CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT']


class DaizaCmd_Feedback(metaclass=Metaclass_DaizaCmd_Feedback):
    """
    Message class 'DaizaCmd_Feedback'.

    Constants:
      STOPPING
      PREV_ACTION_ABORTED
      EXPANDED_AT_EXPAND_AND_UNCLAMP
      CLAMPED_AT_CLAMP_AND_CONTRACT
      EXPANDED_AT_EXPAND_AND_PLACE
      EXPANDED_AT_EXPAND_AND_PLACE_AND_CONTRACT
      CLAMPED_AT_EXPAND_AND_PLACE_AND_CONTRACT
    """

    __slots__ = [
        '_feedback',
    ]

    _fields_and_field_types = {
        'feedback': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback = kwargs.get('feedback', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feedback' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'feedback' field must be an unsigned integer in [0, 255]"
        self._feedback = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_SendGoal_Request(type):
    """Metaclass of message 'DaizaCmd_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__send_goal__request

            from mecha_control.action import DaizaCmd
            if DaizaCmd.Goal.__class__._TYPE_SUPPORT is None:
                DaizaCmd.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DaizaCmd_SendGoal_Request(metaclass=Metaclass_DaizaCmd_SendGoal_Request):
    """Message class 'DaizaCmd_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'mecha_control/DaizaCmd_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'DaizaCmd_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mecha_control.action._daiza_cmd import DaizaCmd_Goal
        self.goal = kwargs.get('goal', DaizaCmd_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from mecha_control.action._daiza_cmd import DaizaCmd_Goal
            assert \
                isinstance(value, DaizaCmd_Goal), \
                "The 'goal' field must be a sub message of type 'DaizaCmd_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_SendGoal_Response(type):
    """Metaclass of message 'DaizaCmd_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DaizaCmd_SendGoal_Response(metaclass=Metaclass_DaizaCmd_SendGoal_Response):
    """Message class 'DaizaCmd_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_DaizaCmd_SendGoal(type):
    """Metaclass of service 'DaizaCmd_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__daiza_cmd__send_goal

            from mecha_control.action import _daiza_cmd
            if _daiza_cmd.Metaclass_DaizaCmd_SendGoal_Request._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_SendGoal_Request.__import_type_support__()
            if _daiza_cmd.Metaclass_DaizaCmd_SendGoal_Response._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_SendGoal_Response.__import_type_support__()


class DaizaCmd_SendGoal(metaclass=Metaclass_DaizaCmd_SendGoal):
    from mecha_control.action._daiza_cmd import DaizaCmd_SendGoal_Request as Request
    from mecha_control.action._daiza_cmd import DaizaCmd_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_GetResult_Request(type):
    """Metaclass of message 'DaizaCmd_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DaizaCmd_GetResult_Request(metaclass=Metaclass_DaizaCmd_GetResult_Request):
    """Message class 'DaizaCmd_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_GetResult_Response(type):
    """Metaclass of message 'DaizaCmd_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__get_result__response

            from mecha_control.action import DaizaCmd
            if DaizaCmd.Result.__class__._TYPE_SUPPORT is None:
                DaizaCmd.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DaizaCmd_GetResult_Response(metaclass=Metaclass_DaizaCmd_GetResult_Response):
    """Message class 'DaizaCmd_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'mecha_control/DaizaCmd_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'DaizaCmd_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from mecha_control.action._daiza_cmd import DaizaCmd_Result
        self.result = kwargs.get('result', DaizaCmd_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from mecha_control.action._daiza_cmd import DaizaCmd_Result
            assert \
                isinstance(value, DaizaCmd_Result), \
                "The 'result' field must be a sub message of type 'DaizaCmd_Result'"
        self._result = value


class Metaclass_DaizaCmd_GetResult(type):
    """Metaclass of service 'DaizaCmd_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__daiza_cmd__get_result

            from mecha_control.action import _daiza_cmd
            if _daiza_cmd.Metaclass_DaizaCmd_GetResult_Request._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_GetResult_Request.__import_type_support__()
            if _daiza_cmd.Metaclass_DaizaCmd_GetResult_Response._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_GetResult_Response.__import_type_support__()


class DaizaCmd_GetResult(metaclass=Metaclass_DaizaCmd_GetResult):
    from mecha_control.action._daiza_cmd import DaizaCmd_GetResult_Request as Request
    from mecha_control.action._daiza_cmd import DaizaCmd_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DaizaCmd_FeedbackMessage(type):
    """Metaclass of message 'DaizaCmd_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__daiza_cmd__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__daiza_cmd__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__daiza_cmd__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__daiza_cmd__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__daiza_cmd__feedback_message

            from mecha_control.action import DaizaCmd
            if DaizaCmd.Feedback.__class__._TYPE_SUPPORT is None:
                DaizaCmd.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DaizaCmd_FeedbackMessage(metaclass=Metaclass_DaizaCmd_FeedbackMessage):
    """Message class 'DaizaCmd_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'mecha_control/DaizaCmd_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'DaizaCmd_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mecha_control.action._daiza_cmd import DaizaCmd_Feedback
        self.feedback = kwargs.get('feedback', DaizaCmd_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from mecha_control.action._daiza_cmd import DaizaCmd_Feedback
            assert \
                isinstance(value, DaizaCmd_Feedback), \
                "The 'feedback' field must be a sub message of type 'DaizaCmd_Feedback'"
        self._feedback = value


class Metaclass_DaizaCmd(type):
    """Metaclass of action 'DaizaCmd'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mecha_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mecha_control.action.DaizaCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__daiza_cmd

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from mecha_control.action import _daiza_cmd
            if _daiza_cmd.Metaclass_DaizaCmd_SendGoal._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_SendGoal.__import_type_support__()
            if _daiza_cmd.Metaclass_DaizaCmd_GetResult._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_GetResult.__import_type_support__()
            if _daiza_cmd.Metaclass_DaizaCmd_FeedbackMessage._TYPE_SUPPORT is None:
                _daiza_cmd.Metaclass_DaizaCmd_FeedbackMessage.__import_type_support__()


class DaizaCmd(metaclass=Metaclass_DaizaCmd):

    # The goal message defined in the action definition.
    from mecha_control.action._daiza_cmd import DaizaCmd_Goal as Goal
    # The result message defined in the action definition.
    from mecha_control.action._daiza_cmd import DaizaCmd_Result as Result
    # The feedback message defined in the action definition.
    from mecha_control.action._daiza_cmd import DaizaCmd_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from mecha_control.action._daiza_cmd import DaizaCmd_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from mecha_control.action._daiza_cmd import DaizaCmd_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from mecha_control.action._daiza_cmd import DaizaCmd_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
