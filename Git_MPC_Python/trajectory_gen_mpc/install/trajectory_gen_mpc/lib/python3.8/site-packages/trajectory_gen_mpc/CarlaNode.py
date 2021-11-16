#!/usr/bin/env python3
import casadi as cd
import rclpy
from rclpy.node import Node
from casadi import pi, inf
from custom_interfaces.msg import States, ControlAction
from trajectory_gen_mpc.GlobalConstraints import VehicleConstraints
from trajectory_gen_mpc.Non_Holonomic import Non_Holonomic


class CarlaHandler(Node):
    def __init__(self, node_name):
        super().__init__(node_name=node_name)
        self.state_publisher = self.create_publisher(States, "Ego_vehicle_states", 10)
        self.create_subscription(ControlAction, "Control_actions", self.control_action_callback, 10)
        self.timer = self.create_timer(0.02, self.state_publisher_callback)
        ######################## MPC related configurations ##############################
        vehicle_constrinats = VehicleConstraints(0.5, 0.1, -0.1, (pi/6), -(pi/6), inf, -inf, 5.0, -5.0, inf, -inf, inf, -inf, 0.3)
        car = Non_Holonomic(vehicle_constrinats)
        car.create_model()
        self.non_linear_fun_generator = car.get_model()

        self.mpc_iter = 0
        self.delta_T = 0.3
        self.sim_time = 20
        self.error_tolerance = 0.105
        self.is_target_reached = False

        self.get_logger().info("Carla Node initialized")
        self.state_initializer()


    def state_initializer(self):
        self.states = States()
        self.states.initial_state_x = 3.0
        self.states.initial_state_y = -3.0
        self.states.initial_state_v = 0.0
        self.states.initial_state_theta = pi/2

        self.states.final_state_x = 2.0
        self.states.final_state_y = -1.5
        self.states.final_state_v = 0.0
        self.states.final_state_theta = pi/2

        self.current_state = cd.DM([self.states.initial_state_x,
                                    self.states.initial_state_y,
                                    self.states.initial_state_v,
                                    self.states.initial_state_theta]
                                   )
        self.target_state = cd.DM([self.states.final_state_x,
                                   self.states.final_state_v,
                                   self.states.final_state_y,
                                   self.states.final_state_theta]
                                  )

    def state_publisher_callback(self):
        if (not(self.is_target_reached)):
            self.state_publisher.publish(self.states)
        else:
            # Do nothing
            pass

    def control_action_callback(self, control_actions):
        if (cd.norm_2(self.current_state - self.target_state) > self.error_tolerance) and (self.mpc_iter * self.delta_T < self.sim_time):

            self.current_state = self.dummy_car_model(control_actions.acceleration, 
                                                      control_actions.steering_angle)

            self.states.initial_state_x = float(self.current_state[0])
            self.states.initial_state_y = float(self.current_state[1])
            self.states.initial_state_v = float(self.current_state[2])
            self.states.initial_state_theta = float(self.current_state[3])

            self.mpc_iter = self.mpc_iter + 1
        else:
            self.is_target_reached = True
            print("Target reached")

    
    def dummy_car_model(self, acceleration, steering_angle):
        # Constructing a model which represents our car in carla
        temp_controls = cd.vertcat(acceleration, steering_angle)
        return cd.DM.full(self.current_state + (self.delta_T * self.non_linear_fun_generator(self.current_state, temp_controls)))
            
        


def main(args=None):
    rclpy.init(args=args)
    carla_handler = CarlaHandler("carla_node")
    rclpy.spin(carla_handler)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
