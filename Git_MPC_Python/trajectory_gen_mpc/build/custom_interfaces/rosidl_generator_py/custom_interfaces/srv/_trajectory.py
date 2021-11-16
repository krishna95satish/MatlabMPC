# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/Trajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory_Request(type):
    """Metaclass of message 'Trajectory_Request'."""

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
                'custom_interfaces.srv.Trajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectory_Request(metaclass=Metaclass_Trajectory_Request):
    """Message class 'Trajectory_Request'."""

    __slots__ = [
        '_initial_state_x',
        '_initial_state_y',
        '_initial_state_v',
        '_initial_state_theta',
        '_final_state_x',
        '_final_state_y',
        '_final_state_v',
        '_final_state_theta',
    ]

    _fields_and_field_types = {
        'initial_state_x': 'float',
        'initial_state_y': 'float',
        'initial_state_v': 'float',
        'initial_state_theta': 'float',
        'final_state_x': 'float',
        'final_state_y': 'float',
        'final_state_v': 'float',
        'final_state_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initial_state_x = kwargs.get('initial_state_x', float())
        self.initial_state_y = kwargs.get('initial_state_y', float())
        self.initial_state_v = kwargs.get('initial_state_v', float())
        self.initial_state_theta = kwargs.get('initial_state_theta', float())
        self.final_state_x = kwargs.get('final_state_x', float())
        self.final_state_y = kwargs.get('final_state_y', float())
        self.final_state_v = kwargs.get('final_state_v', float())
        self.final_state_theta = kwargs.get('final_state_theta', float())

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
        if self.initial_state_x != other.initial_state_x:
            return False
        if self.initial_state_y != other.initial_state_y:
            return False
        if self.initial_state_v != other.initial_state_v:
            return False
        if self.initial_state_theta != other.initial_state_theta:
            return False
        if self.final_state_x != other.final_state_x:
            return False
        if self.final_state_y != other.final_state_y:
            return False
        if self.final_state_v != other.final_state_v:
            return False
        if self.final_state_theta != other.final_state_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def initial_state_x(self):
        """Message field 'initial_state_x'."""
        return self._initial_state_x

    @initial_state_x.setter
    def initial_state_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_state_x' field must be of type 'float'"
        self._initial_state_x = value

    @property
    def initial_state_y(self):
        """Message field 'initial_state_y'."""
        return self._initial_state_y

    @initial_state_y.setter
    def initial_state_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_state_y' field must be of type 'float'"
        self._initial_state_y = value

    @property
    def initial_state_v(self):
        """Message field 'initial_state_v'."""
        return self._initial_state_v

    @initial_state_v.setter
    def initial_state_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_state_v' field must be of type 'float'"
        self._initial_state_v = value

    @property
    def initial_state_theta(self):
        """Message field 'initial_state_theta'."""
        return self._initial_state_theta

    @initial_state_theta.setter
    def initial_state_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_state_theta' field must be of type 'float'"
        self._initial_state_theta = value

    @property
    def final_state_x(self):
        """Message field 'final_state_x'."""
        return self._final_state_x

    @final_state_x.setter
    def final_state_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_state_x' field must be of type 'float'"
        self._final_state_x = value

    @property
    def final_state_y(self):
        """Message field 'final_state_y'."""
        return self._final_state_y

    @final_state_y.setter
    def final_state_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_state_y' field must be of type 'float'"
        self._final_state_y = value

    @property
    def final_state_v(self):
        """Message field 'final_state_v'."""
        return self._final_state_v

    @final_state_v.setter
    def final_state_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_state_v' field must be of type 'float'"
        self._final_state_v = value

    @property
    def final_state_theta(self):
        """Message field 'final_state_theta'."""
        return self._final_state_theta

    @final_state_theta.setter
    def final_state_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_state_theta' field must be of type 'float'"
        self._final_state_theta = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Trajectory_Response(type):
    """Metaclass of message 'Trajectory_Response'."""

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
                'custom_interfaces.srv.Trajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectory_Response(metaclass=Metaclass_Trajectory_Response):
    """Message class 'Trajectory_Response'."""

    __slots__ = [
        '_acceleration',
        '_steering_angle',
    ]

    _fields_and_field_types = {
        'acceleration': 'float',
        'steering_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.acceleration = kwargs.get('acceleration', float())
        self.steering_angle = kwargs.get('steering_angle', float())

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
        if self.acceleration != other.acceleration:
            return False
        if self.steering_angle != other.steering_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
        self._acceleration = value

    @property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle' field must be of type 'float'"
        self._steering_angle = value


class Metaclass_Trajectory(type):
    """Metaclass of service 'Trajectory'."""

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
                'custom_interfaces.srv.Trajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__trajectory

            from custom_interfaces.srv import _trajectory
            if _trajectory.Metaclass_Trajectory_Request._TYPE_SUPPORT is None:
                _trajectory.Metaclass_Trajectory_Request.__import_type_support__()
            if _trajectory.Metaclass_Trajectory_Response._TYPE_SUPPORT is None:
                _trajectory.Metaclass_Trajectory_Response.__import_type_support__()


class Trajectory(metaclass=Metaclass_Trajectory):
    from custom_interfaces.srv._trajectory import Trajectory_Request as Request
    from custom_interfaces.srv._trajectory import Trajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
