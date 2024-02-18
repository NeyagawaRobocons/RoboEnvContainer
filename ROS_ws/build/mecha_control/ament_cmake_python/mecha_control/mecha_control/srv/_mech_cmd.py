# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mecha_control:srv/MechCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MechCmd_Request(type):
    """Metaclass of message 'MechCmd_Request'."""

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
                'mecha_control.srv.MechCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mech_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mech_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mech_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mech_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mech_cmd__request

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
        return Metaclass_MechCmd_Request.__constants['STOP']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_MechCmd_Request.__constants['READY']

    @property
    def EXPAND(self):
        """Message constant 'EXPAND'."""
        return Metaclass_MechCmd_Request.__constants['EXPAND']

    @property
    def CONTRACT(self):
        """Message constant 'CONTRACT'."""
        return Metaclass_MechCmd_Request.__constants['CONTRACT']

    @property
    def CLAMP(self):
        """Message constant 'CLAMP'."""
        return Metaclass_MechCmd_Request.__constants['CLAMP']

    @property
    def UNCLAMP(self):
        """Message constant 'UNCLAMP'."""
        return Metaclass_MechCmd_Request.__constants['UNCLAMP']

    @property
    def EXPAND_AND_UNCLAMP(self):
        """Message constant 'EXPAND_AND_UNCLAMP'."""
        return Metaclass_MechCmd_Request.__constants['EXPAND_AND_UNCLAMP']

    @property
    def CLAMP_AND_CONTRACT(self):
        """Message constant 'CLAMP_AND_CONTRACT'."""
        return Metaclass_MechCmd_Request.__constants['CLAMP_AND_CONTRACT']

    @property
    def EXPAND_AND_PLACE(self):
        """Message constant 'EXPAND_AND_PLACE'."""
        return Metaclass_MechCmd_Request.__constants['EXPAND_AND_PLACE']

    @property
    def EXPAND_AND_PLACE_AND_CONTRACT(self):
        """Message constant 'EXPAND_AND_PLACE_AND_CONTRACT'."""
        return Metaclass_MechCmd_Request.__constants['EXPAND_AND_PLACE_AND_CONTRACT']


class MechCmd_Request(metaclass=Metaclass_MechCmd_Request):
    """
    Message class 'MechCmd_Request'.

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


class Metaclass_MechCmd_Response(type):
    """Metaclass of message 'MechCmd_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'ERR_UNEXPECTED_ARG': 1,
        'ERR_CANNOT_PROCESS': 2,
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
                'mecha_control.srv.MechCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mech_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mech_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mech_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mech_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mech_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'ERR_UNEXPECTED_ARG': cls.__constants['ERR_UNEXPECTED_ARG'],
            'ERR_CANNOT_PROCESS': cls.__constants['ERR_CANNOT_PROCESS'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_MechCmd_Response.__constants['OK']

    @property
    def ERR_UNEXPECTED_ARG(self):
        """Message constant 'ERR_UNEXPECTED_ARG'."""
        return Metaclass_MechCmd_Response.__constants['ERR_UNEXPECTED_ARG']

    @property
    def ERR_CANNOT_PROCESS(self):
        """Message constant 'ERR_CANNOT_PROCESS'."""
        return Metaclass_MechCmd_Response.__constants['ERR_CANNOT_PROCESS']


class MechCmd_Response(metaclass=Metaclass_MechCmd_Response):
    """
    Message class 'MechCmd_Response'.

    Constants:
      OK
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


class Metaclass_MechCmd(type):
    """Metaclass of service 'MechCmd'."""

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
                'mecha_control.srv.MechCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mech_cmd

            from mecha_control.srv import _mech_cmd
            if _mech_cmd.Metaclass_MechCmd_Request._TYPE_SUPPORT is None:
                _mech_cmd.Metaclass_MechCmd_Request.__import_type_support__()
            if _mech_cmd.Metaclass_MechCmd_Response._TYPE_SUPPORT is None:
                _mech_cmd.Metaclass_MechCmd_Response.__import_type_support__()


class MechCmd(metaclass=Metaclass_MechCmd):
    from mecha_control.srv._mech_cmd import MechCmd_Request as Request
    from mecha_control.srv._mech_cmd import MechCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
