# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mecha_control:action/HinaCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HinaCmd_Goal(type):
    """Metaclass of message 'HinaCmd_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': 0,
        'READY': 1,
        'UP': 2,
        'DOWN': 3,
        'POS_CARRY': 4,
        'POS_TAKE': 5,
        'POS_PLACE': 6,
        'GUIDE_EXPAND': 7,
        'GUIDE_CONTRACT': 8,
        'LATCH_UNLOCK': 9,
        'LATCH_UNLOCK_1': 10,
        'LATCH_UNLOCK_2': 11,
        'DOWN_AND_TAKE': 12,
        'UP_AND_CARRY': 13,
        'UP_AND_PLACE': 14,
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
                'mecha_control.action.HinaCmd_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'READY': cls.__constants['READY'],
            'UP': cls.__constants['UP'],
            'DOWN': cls.__constants['DOWN'],
            'POS_CARRY': cls.__constants['POS_CARRY'],
            'POS_TAKE': cls.__constants['POS_TAKE'],
            'POS_PLACE': cls.__constants['POS_PLACE'],
            'GUIDE_EXPAND': cls.__constants['GUIDE_EXPAND'],
            'GUIDE_CONTRACT': cls.__constants['GUIDE_CONTRACT'],
            'LATCH_UNLOCK': cls.__constants['LATCH_UNLOCK'],
            'LATCH_UNLOCK_1': cls.__constants['LATCH_UNLOCK_1'],
            'LATCH_UNLOCK_2': cls.__constants['LATCH_UNLOCK_2'],
            'DOWN_AND_TAKE': cls.__constants['DOWN_AND_TAKE'],
            'UP_AND_CARRY': cls.__constants['UP_AND_CARRY'],
            'UP_AND_PLACE': cls.__constants['UP_AND_PLACE'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_HinaCmd_Goal.__constants['STOP']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_HinaCmd_Goal.__constants['READY']

    @property
    def UP(self):
        """Message constant 'UP'."""
        return Metaclass_HinaCmd_Goal.__constants['UP']

    @property
    def DOWN(self):
        """Message constant 'DOWN'."""
        return Metaclass_HinaCmd_Goal.__constants['DOWN']

    @property
    def POS_CARRY(self):
        """Message constant 'POS_CARRY'."""
        return Metaclass_HinaCmd_Goal.__constants['POS_CARRY']

    @property
    def POS_TAKE(self):
        """Message constant 'POS_TAKE'."""
        return Metaclass_HinaCmd_Goal.__constants['POS_TAKE']

    @property
    def POS_PLACE(self):
        """Message constant 'POS_PLACE'."""
        return Metaclass_HinaCmd_Goal.__constants['POS_PLACE']

    @property
    def GUIDE_EXPAND(self):
        """Message constant 'GUIDE_EXPAND'."""
        return Metaclass_HinaCmd_Goal.__constants['GUIDE_EXPAND']

    @property
    def GUIDE_CONTRACT(self):
        """Message constant 'GUIDE_CONTRACT'."""
        return Metaclass_HinaCmd_Goal.__constants['GUIDE_CONTRACT']

    @property
    def LATCH_UNLOCK(self):
        """Message constant 'LATCH_UNLOCK'."""
        return Metaclass_HinaCmd_Goal.__constants['LATCH_UNLOCK']

    @property
    def LATCH_UNLOCK_1(self):
        """Message constant 'LATCH_UNLOCK_1'."""
        return Metaclass_HinaCmd_Goal.__constants['LATCH_UNLOCK_1']

    @property
    def LATCH_UNLOCK_2(self):
        """Message constant 'LATCH_UNLOCK_2'."""
        return Metaclass_HinaCmd_Goal.__constants['LATCH_UNLOCK_2']

    @property
    def DOWN_AND_TAKE(self):
        """Message constant 'DOWN_AND_TAKE'."""
        return Metaclass_HinaCmd_Goal.__constants['DOWN_AND_TAKE']

    @property
    def UP_AND_CARRY(self):
        """Message constant 'UP_AND_CARRY'."""
        return Metaclass_HinaCmd_Goal.__constants['UP_AND_CARRY']

    @property
    def UP_AND_PLACE(self):
        """Message constant 'UP_AND_PLACE'."""
        return Metaclass_HinaCmd_Goal.__constants['UP_AND_PLACE']


class HinaCmd_Goal(metaclass=Metaclass_HinaCmd_Goal):
    """
    Message class 'HinaCmd_Goal'.

    Constants:
      STOP
      READY
      UP
      DOWN
      POS_CARRY
      POS_TAKE
      POS_PLACE
      GUIDE_EXPAND
      GUIDE_CONTRACT
      LATCH_UNLOCK
      LATCH_UNLOCK_1
      LATCH_UNLOCK_2
      DOWN_AND_TAKE
      UP_AND_CARRY
      UP_AND_PLACE
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


class Metaclass_HinaCmd_Result(type):
    """Metaclass of message 'HinaCmd_Result'."""

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
                'mecha_control.action.HinaCmd_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__result

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
        return Metaclass_HinaCmd_Result.__constants['OK']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_HinaCmd_Result.__constants['ABORTED']

    @property
    def ERR_UNEXPECTED_ARG(self):
        """Message constant 'ERR_UNEXPECTED_ARG'."""
        return Metaclass_HinaCmd_Result.__constants['ERR_UNEXPECTED_ARG']

    @property
    def ERR_CANNOT_PROCESS(self):
        """Message constant 'ERR_CANNOT_PROCESS'."""
        return Metaclass_HinaCmd_Result.__constants['ERR_CANNOT_PROCESS']


class HinaCmd_Result(metaclass=Metaclass_HinaCmd_Result):
    """
    Message class 'HinaCmd_Result'.

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


class Metaclass_HinaCmd_Feedback(type):
    """Metaclass of message 'HinaCmd_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOPPING': 0,
        'PREV_ACTION_ABORTED': 1,
        'DOWN_AT_DOWN_AND_TAKE': 2,
        'UP_AT_UP_AND_PLACE': 3,
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
                'mecha_control.action.HinaCmd_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOPPING': cls.__constants['STOPPING'],
            'PREV_ACTION_ABORTED': cls.__constants['PREV_ACTION_ABORTED'],
            'DOWN_AT_DOWN_AND_TAKE': cls.__constants['DOWN_AT_DOWN_AND_TAKE'],
            'UP_AT_UP_AND_PLACE': cls.__constants['UP_AT_UP_AND_PLACE'],
        }

    @property
    def STOPPING(self):
        """Message constant 'STOPPING'."""
        return Metaclass_HinaCmd_Feedback.__constants['STOPPING']

    @property
    def PREV_ACTION_ABORTED(self):
        """Message constant 'PREV_ACTION_ABORTED'."""
        return Metaclass_HinaCmd_Feedback.__constants['PREV_ACTION_ABORTED']

    @property
    def DOWN_AT_DOWN_AND_TAKE(self):
        """Message constant 'DOWN_AT_DOWN_AND_TAKE'."""
        return Metaclass_HinaCmd_Feedback.__constants['DOWN_AT_DOWN_AND_TAKE']

    @property
    def UP_AT_UP_AND_PLACE(self):
        """Message constant 'UP_AT_UP_AND_PLACE'."""
        return Metaclass_HinaCmd_Feedback.__constants['UP_AT_UP_AND_PLACE']


class HinaCmd_Feedback(metaclass=Metaclass_HinaCmd_Feedback):
    """
    Message class 'HinaCmd_Feedback'.

    Constants:
      STOPPING
      PREV_ACTION_ABORTED
      DOWN_AT_DOWN_AND_TAKE
      UP_AT_UP_AND_PLACE
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


class Metaclass_HinaCmd_SendGoal_Request(type):
    """Metaclass of message 'HinaCmd_SendGoal_Request'."""

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
                'mecha_control.action.HinaCmd_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__send_goal__request

            from mecha_control.action import HinaCmd
            if HinaCmd.Goal.__class__._TYPE_SUPPORT is None:
                HinaCmd.Goal.__class__.__import_type_support__()

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


class HinaCmd_SendGoal_Request(metaclass=Metaclass_HinaCmd_SendGoal_Request):
    """Message class 'HinaCmd_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'mecha_control/HinaCmd_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'HinaCmd_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mecha_control.action._hina_cmd import HinaCmd_Goal
        self.goal = kwargs.get('goal', HinaCmd_Goal())

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
            from mecha_control.action._hina_cmd import HinaCmd_Goal
            assert \
                isinstance(value, HinaCmd_Goal), \
                "The 'goal' field must be a sub message of type 'HinaCmd_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HinaCmd_SendGoal_Response(type):
    """Metaclass of message 'HinaCmd_SendGoal_Response'."""

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
                'mecha_control.action.HinaCmd_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__send_goal__response

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


class HinaCmd_SendGoal_Response(metaclass=Metaclass_HinaCmd_SendGoal_Response):
    """Message class 'HinaCmd_SendGoal_Response'."""

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


class Metaclass_HinaCmd_SendGoal(type):
    """Metaclass of service 'HinaCmd_SendGoal'."""

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
                'mecha_control.action.HinaCmd_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__hina_cmd__send_goal

            from mecha_control.action import _hina_cmd
            if _hina_cmd.Metaclass_HinaCmd_SendGoal_Request._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_SendGoal_Request.__import_type_support__()
            if _hina_cmd.Metaclass_HinaCmd_SendGoal_Response._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_SendGoal_Response.__import_type_support__()


class HinaCmd_SendGoal(metaclass=Metaclass_HinaCmd_SendGoal):
    from mecha_control.action._hina_cmd import HinaCmd_SendGoal_Request as Request
    from mecha_control.action._hina_cmd import HinaCmd_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HinaCmd_GetResult_Request(type):
    """Metaclass of message 'HinaCmd_GetResult_Request'."""

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
                'mecha_control.action.HinaCmd_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__get_result__request

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


class HinaCmd_GetResult_Request(metaclass=Metaclass_HinaCmd_GetResult_Request):
    """Message class 'HinaCmd_GetResult_Request'."""

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


class Metaclass_HinaCmd_GetResult_Response(type):
    """Metaclass of message 'HinaCmd_GetResult_Response'."""

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
                'mecha_control.action.HinaCmd_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__get_result__response

            from mecha_control.action import HinaCmd
            if HinaCmd.Result.__class__._TYPE_SUPPORT is None:
                HinaCmd.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HinaCmd_GetResult_Response(metaclass=Metaclass_HinaCmd_GetResult_Response):
    """Message class 'HinaCmd_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'mecha_control/HinaCmd_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'HinaCmd_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from mecha_control.action._hina_cmd import HinaCmd_Result
        self.result = kwargs.get('result', HinaCmd_Result())

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
            from mecha_control.action._hina_cmd import HinaCmd_Result
            assert \
                isinstance(value, HinaCmd_Result), \
                "The 'result' field must be a sub message of type 'HinaCmd_Result'"
        self._result = value


class Metaclass_HinaCmd_GetResult(type):
    """Metaclass of service 'HinaCmd_GetResult'."""

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
                'mecha_control.action.HinaCmd_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__hina_cmd__get_result

            from mecha_control.action import _hina_cmd
            if _hina_cmd.Metaclass_HinaCmd_GetResult_Request._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_GetResult_Request.__import_type_support__()
            if _hina_cmd.Metaclass_HinaCmd_GetResult_Response._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_GetResult_Response.__import_type_support__()


class HinaCmd_GetResult(metaclass=Metaclass_HinaCmd_GetResult):
    from mecha_control.action._hina_cmd import HinaCmd_GetResult_Request as Request
    from mecha_control.action._hina_cmd import HinaCmd_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HinaCmd_FeedbackMessage(type):
    """Metaclass of message 'HinaCmd_FeedbackMessage'."""

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
                'mecha_control.action.HinaCmd_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__hina_cmd__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__hina_cmd__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__hina_cmd__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__hina_cmd__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__hina_cmd__feedback_message

            from mecha_control.action import HinaCmd
            if HinaCmd.Feedback.__class__._TYPE_SUPPORT is None:
                HinaCmd.Feedback.__class__.__import_type_support__()

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


class HinaCmd_FeedbackMessage(metaclass=Metaclass_HinaCmd_FeedbackMessage):
    """Message class 'HinaCmd_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'mecha_control/HinaCmd_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mecha_control', 'action'], 'HinaCmd_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mecha_control.action._hina_cmd import HinaCmd_Feedback
        self.feedback = kwargs.get('feedback', HinaCmd_Feedback())

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
            from mecha_control.action._hina_cmd import HinaCmd_Feedback
            assert \
                isinstance(value, HinaCmd_Feedback), \
                "The 'feedback' field must be a sub message of type 'HinaCmd_Feedback'"
        self._feedback = value


class Metaclass_HinaCmd(type):
    """Metaclass of action 'HinaCmd'."""

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
                'mecha_control.action.HinaCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__hina_cmd

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from mecha_control.action import _hina_cmd
            if _hina_cmd.Metaclass_HinaCmd_SendGoal._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_SendGoal.__import_type_support__()
            if _hina_cmd.Metaclass_HinaCmd_GetResult._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_GetResult.__import_type_support__()
            if _hina_cmd.Metaclass_HinaCmd_FeedbackMessage._TYPE_SUPPORT is None:
                _hina_cmd.Metaclass_HinaCmd_FeedbackMessage.__import_type_support__()


class HinaCmd(metaclass=Metaclass_HinaCmd):

    # The goal message defined in the action definition.
    from mecha_control.action._hina_cmd import HinaCmd_Goal as Goal
    # The result message defined in the action definition.
    from mecha_control.action._hina_cmd import HinaCmd_Result as Result
    # The feedback message defined in the action definition.
    from mecha_control.action._hina_cmd import HinaCmd_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from mecha_control.action._hina_cmd import HinaCmd_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from mecha_control.action._hina_cmd import HinaCmd_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from mecha_control.action._hina_cmd import HinaCmd_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
