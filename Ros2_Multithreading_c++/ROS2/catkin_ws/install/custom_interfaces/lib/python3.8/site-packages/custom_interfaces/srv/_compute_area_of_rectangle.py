# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/ComputeAreaOfRectangle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputeAreaOfRectangle_Request(type):
    """Metaclass of message 'ComputeAreaOfRectangle_Request'."""

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
                'custom_interfaces.srv.ComputeAreaOfRectangle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_area_of_rectangle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_area_of_rectangle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_area_of_rectangle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_area_of_rectangle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_area_of_rectangle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeAreaOfRectangle_Request(metaclass=Metaclass_ComputeAreaOfRectangle_Request):
    """Message class 'ComputeAreaOfRectangle_Request'."""

    __slots__ = [
        '_lenght',
        '_width',
    ]

    _fields_and_field_types = {
        'lenght': 'double',
        'width': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lenght = kwargs.get('lenght', float())
        self.width = kwargs.get('width', float())

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
        if self.lenght != other.lenght:
            return False
        if self.width != other.width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lenght(self):
        """Message field 'lenght'."""
        return self._lenght

    @lenght.setter
    def lenght(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lenght' field must be of type 'float'"
        self._lenght = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
        self._width = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputeAreaOfRectangle_Response(type):
    """Metaclass of message 'ComputeAreaOfRectangle_Response'."""

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
                'custom_interfaces.srv.ComputeAreaOfRectangle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_area_of_rectangle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_area_of_rectangle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_area_of_rectangle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_area_of_rectangle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_area_of_rectangle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputeAreaOfRectangle_Response(metaclass=Metaclass_ComputeAreaOfRectangle_Response):
    """Message class 'ComputeAreaOfRectangle_Response'."""

    __slots__ = [
        '_area',
    ]

    _fields_and_field_types = {
        'area': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.area = kwargs.get('area', float())

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
        if self.area != other.area:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def area(self):
        """Message field 'area'."""
        return self._area

    @area.setter
    def area(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area' field must be of type 'float'"
        self._area = value


class Metaclass_ComputeAreaOfRectangle(type):
    """Metaclass of service 'ComputeAreaOfRectangle'."""

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
                'custom_interfaces.srv.ComputeAreaOfRectangle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__compute_area_of_rectangle

            from custom_interfaces.srv import _compute_area_of_rectangle
            if _compute_area_of_rectangle.Metaclass_ComputeAreaOfRectangle_Request._TYPE_SUPPORT is None:
                _compute_area_of_rectangle.Metaclass_ComputeAreaOfRectangle_Request.__import_type_support__()
            if _compute_area_of_rectangle.Metaclass_ComputeAreaOfRectangle_Response._TYPE_SUPPORT is None:
                _compute_area_of_rectangle.Metaclass_ComputeAreaOfRectangle_Response.__import_type_support__()


class ComputeAreaOfRectangle(metaclass=Metaclass_ComputeAreaOfRectangle):
    from custom_interfaces.srv._compute_area_of_rectangle import ComputeAreaOfRectangle_Request as Request
    from custom_interfaces.srv._compute_area_of_rectangle import ComputeAreaOfRectangle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
