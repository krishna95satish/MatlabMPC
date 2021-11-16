# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/SetLED.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLED_Request(type):
    """Metaclass of message 'SetLED_Request'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.SetLED_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLED_Request(metaclass=Metaclass_SetLED_Request):
    """Message class 'SetLED_Request'."""

    __slots__ = [
        '_led_number',
        '_on_or_off',
    ]

    _fields_and_field_types = {
        'led_number': 'int32',
        'on_or_off': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.led_number = kwargs.get('led_number', int())
        self.on_or_off = kwargs.get('on_or_off', bool())

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
        if self.led_number != other.led_number:
            return False
        if self.on_or_off != other.on_or_off:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def led_number(self):
        """Message field 'led_number'."""
        return self._led_number

    @led_number.setter
    def led_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'led_number' field must be an integer in [-2147483648, 2147483647]"
        self._led_number = value

    @property
    def on_or_off(self):
        """Message field 'on_or_off'."""
        return self._on_or_off

    @on_or_off.setter
    def on_or_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'on_or_off' field must be of type 'bool'"
        self._on_or_off = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLED_Response(type):
    """Metaclass of message 'SetLED_Response'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.SetLED_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLED_Response(metaclass=Metaclass_SetLED_Response):
    """Message class 'SetLED_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetLED(type):
    """Metaclass of service 'SetLED'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.SetLED')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_led

            from custom_interfaces.srv import _set_led
            if _set_led.Metaclass_SetLED_Request._TYPE_SUPPORT is None:
                _set_led.Metaclass_SetLED_Request.__import_type_support__()
            if _set_led.Metaclass_SetLED_Response._TYPE_SUPPORT is None:
                _set_led.Metaclass_SetLED_Response.__import_type_support__()


class SetLED(metaclass=Metaclass_SetLED):
    from custom_interfaces.srv._set_led import SetLED_Request as Request
    from custom_interfaces.srv._set_led import SetLED_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
