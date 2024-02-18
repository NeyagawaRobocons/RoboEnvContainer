# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pure_pursuit:action/PathAndFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'feedback_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathAndFeedback_Goal(type):
    """Metaclass of message 'PathAndFeedback_Goal'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__goal

            from pure_pursuit.msg import Path2DWithAngles
            if Path2DWithAngles.__class__._TYPE_SUPPORT is None:
                Path2DWithAngles.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathAndFeedback_Goal(metaclass=Metaclass_PathAndFeedback_Goal):
    """Message class 'PathAndFeedback_Goal'."""

    __slots__ = [
        '_path_with_angles',
        '_feedback_indices',
    ]

    _fields_and_field_types = {
        'path_with_angles': 'pure_pursuit/Path2DWithAngles',
        'feedback_indices': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['pure_pursuit', 'msg'], 'Path2DWithAngles'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from pure_pursuit.msg import Path2DWithAngles
        self.path_with_angles = kwargs.get('path_with_angles', Path2DWithAngles())
        self.feedback_indices = array.array('i', kwargs.get('feedback_indices', []))

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
        if self.path_with_angles != other.path_with_angles:
            return False
        if self.feedback_indices != other.feedback_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path_with_angles(self):
        """Message field 'path_with_angles'."""
        return self._path_with_angles

    @path_with_angles.setter
    def path_with_angles(self, value):
        if __debug__:
            from pure_pursuit.msg import Path2DWithAngles
            assert \
                isinstance(value, Path2DWithAngles), \
                "The 'path_with_angles' field must be a sub message of type 'Path2DWithAngles'"
        self._path_with_angles = value

    @builtins.property
    def feedback_indices(self):
        """Message field 'feedback_indices'."""
        return self._feedback_indices

    @feedback_indices.setter
    def feedback_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'feedback_indices' array.array() must have the type code of 'i'"
            self._feedback_indices = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'feedback_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._feedback_indices = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_Result(type):
    """Metaclass of message 'PathAndFeedback_Result'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathAndFeedback_Result(metaclass=Metaclass_PathAndFeedback_Result):
    """Message class 'PathAndFeedback_Result'."""

    __slots__ = [
        '_final_index',
    ]

    _fields_and_field_types = {
        'final_index': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.final_index = kwargs.get('final_index', int())

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
        if self.final_index != other.final_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def final_index(self):
        """Message field 'final_index'."""
        return self._final_index

    @final_index.setter
    def final_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'final_index' field must be an integer in [-2147483648, 2147483647]"
        self._final_index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_Feedback(type):
    """Metaclass of message 'PathAndFeedback_Feedback'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathAndFeedback_Feedback(metaclass=Metaclass_PathAndFeedback_Feedback):
    """Message class 'PathAndFeedback_Feedback'."""

    __slots__ = [
        '_current_index',
    ]

    _fields_and_field_types = {
        'current_index': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_index = kwargs.get('current_index', int())

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
        if self.current_index != other.current_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_index(self):
        """Message field 'current_index'."""
        return self._current_index

    @current_index.setter
    def current_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_index' field must be an integer in [-2147483648, 2147483647]"
        self._current_index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_SendGoal_Request(type):
    """Metaclass of message 'PathAndFeedback_SendGoal_Request'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__send_goal__request

            from pure_pursuit.action import PathAndFeedback
            if PathAndFeedback.Goal.__class__._TYPE_SUPPORT is None:
                PathAndFeedback.Goal.__class__.__import_type_support__()

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


class PathAndFeedback_SendGoal_Request(metaclass=Metaclass_PathAndFeedback_SendGoal_Request):
    """Message class 'PathAndFeedback_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'pure_pursuit/PathAndFeedback_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pure_pursuit', 'action'], 'PathAndFeedback_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_Goal
        self.goal = kwargs.get('goal', PathAndFeedback_Goal())

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
            from pure_pursuit.action._path_and_feedback import PathAndFeedback_Goal
            assert \
                isinstance(value, PathAndFeedback_Goal), \
                "The 'goal' field must be a sub message of type 'PathAndFeedback_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_SendGoal_Response(type):
    """Metaclass of message 'PathAndFeedback_SendGoal_Response'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__send_goal__response

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


class PathAndFeedback_SendGoal_Response(metaclass=Metaclass_PathAndFeedback_SendGoal_Response):
    """Message class 'PathAndFeedback_SendGoal_Response'."""

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


class Metaclass_PathAndFeedback_SendGoal(type):
    """Metaclass of service 'PathAndFeedback_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_and_feedback__send_goal

            from pure_pursuit.action import _path_and_feedback
            if _path_and_feedback.Metaclass_PathAndFeedback_SendGoal_Request._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_SendGoal_Request.__import_type_support__()
            if _path_and_feedback.Metaclass_PathAndFeedback_SendGoal_Response._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_SendGoal_Response.__import_type_support__()


class PathAndFeedback_SendGoal(metaclass=Metaclass_PathAndFeedback_SendGoal):
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_SendGoal_Request as Request
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_GetResult_Request(type):
    """Metaclass of message 'PathAndFeedback_GetResult_Request'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__get_result__request

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


class PathAndFeedback_GetResult_Request(metaclass=Metaclass_PathAndFeedback_GetResult_Request):
    """Message class 'PathAndFeedback_GetResult_Request'."""

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


class Metaclass_PathAndFeedback_GetResult_Response(type):
    """Metaclass of message 'PathAndFeedback_GetResult_Response'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__get_result__response

            from pure_pursuit.action import PathAndFeedback
            if PathAndFeedback.Result.__class__._TYPE_SUPPORT is None:
                PathAndFeedback.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathAndFeedback_GetResult_Response(metaclass=Metaclass_PathAndFeedback_GetResult_Response):
    """Message class 'PathAndFeedback_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'pure_pursuit/PathAndFeedback_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pure_pursuit', 'action'], 'PathAndFeedback_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_Result
        self.result = kwargs.get('result', PathAndFeedback_Result())

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
            from pure_pursuit.action._path_and_feedback import PathAndFeedback_Result
            assert \
                isinstance(value, PathAndFeedback_Result), \
                "The 'result' field must be a sub message of type 'PathAndFeedback_Result'"
        self._result = value


class Metaclass_PathAndFeedback_GetResult(type):
    """Metaclass of service 'PathAndFeedback_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_and_feedback__get_result

            from pure_pursuit.action import _path_and_feedback
            if _path_and_feedback.Metaclass_PathAndFeedback_GetResult_Request._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_GetResult_Request.__import_type_support__()
            if _path_and_feedback.Metaclass_PathAndFeedback_GetResult_Response._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_GetResult_Response.__import_type_support__()


class PathAndFeedback_GetResult(metaclass=Metaclass_PathAndFeedback_GetResult):
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_GetResult_Request as Request
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PathAndFeedback_FeedbackMessage(type):
    """Metaclass of message 'PathAndFeedback_FeedbackMessage'."""

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
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_and_feedback__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_and_feedback__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_and_feedback__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_and_feedback__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_and_feedback__feedback_message

            from pure_pursuit.action import PathAndFeedback
            if PathAndFeedback.Feedback.__class__._TYPE_SUPPORT is None:
                PathAndFeedback.Feedback.__class__.__import_type_support__()

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


class PathAndFeedback_FeedbackMessage(metaclass=Metaclass_PathAndFeedback_FeedbackMessage):
    """Message class 'PathAndFeedback_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'pure_pursuit/PathAndFeedback_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pure_pursuit', 'action'], 'PathAndFeedback_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_Feedback
        self.feedback = kwargs.get('feedback', PathAndFeedback_Feedback())

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
            from pure_pursuit.action._path_and_feedback import PathAndFeedback_Feedback
            assert \
                isinstance(value, PathAndFeedback_Feedback), \
                "The 'feedback' field must be a sub message of type 'PathAndFeedback_Feedback'"
        self._feedback = value


class Metaclass_PathAndFeedback(type):
    """Metaclass of action 'PathAndFeedback'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pure_pursuit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pure_pursuit.action.PathAndFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__path_and_feedback

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from pure_pursuit.action import _path_and_feedback
            if _path_and_feedback.Metaclass_PathAndFeedback_SendGoal._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_SendGoal.__import_type_support__()
            if _path_and_feedback.Metaclass_PathAndFeedback_GetResult._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_GetResult.__import_type_support__()
            if _path_and_feedback.Metaclass_PathAndFeedback_FeedbackMessage._TYPE_SUPPORT is None:
                _path_and_feedback.Metaclass_PathAndFeedback_FeedbackMessage.__import_type_support__()


class PathAndFeedback(metaclass=Metaclass_PathAndFeedback):

    # The goal message defined in the action definition.
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_Goal as Goal
    # The result message defined in the action definition.
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_Result as Result
    # The feedback message defined in the action definition.
    from pure_pursuit.action._path_and_feedback import PathAndFeedback_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from pure_pursuit.action._path_and_feedback import PathAndFeedback_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
