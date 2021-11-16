#!/usr/bin/env python3
import casadi as cd
from trajectory_gen_mpc.Solver import Solver
from trajectory_gen_mpc.Non_Holonomic import Non_Holonomic


class MultipleShooting(Solver):
    def __init__(self, car_object, obstacle_list=None) -> None:

        super().__init__()
        self.car = car_object
        self.num_of_states = 0
        self.num_of_controls = 0
        self.obstacle_list = obstacle_list
        self.objective = 0
        self.prediction_horizon = 0
        self.constraints_vector = []        # equality and other constrains vector
        self.solver_options = None
        self.X = []
        self.P = []
        self.Q = []
        self.U = []
        self.R = []
        self.Z = []
        self.T = []
        self.solver = None
        self.solver_options = None
        self.optimization_variables = []

    def set_optimization_variables(self):

        self.optimization_variables = cd.vertcat(
            cd.reshape(self.X, -1, 1),      # States          [x, y, v, theta]
            # Control actione [a, steering angle]
            cd.reshape(self.U, -1, 1)
        )

    def init_solver(self, options, tunable_parameters):
        # This methos initializes and setsup required components for a Solver

        self.car.create_model()             # creates the motion model in Vehicle class
        self.num_of_states = self.car.get_num_states()
        self.num_of_controls = self.car.get_num_control()
        self.prediction_horizon = tunable_parameters.prediction_horizon
        self.X = cd.SX.sym('X', self.num_of_states,
                           (tunable_parameters.prediction_horizon+1))

        self.P = cd.SX.sym('P', self.num_of_states +
                           self.num_of_states)

        self.U = cd.SX.sym('U', self.num_of_controls,
                           tunable_parameters.prediction_horizon)

        self.Q = cd.diagcat(tunable_parameters.weight_state_1, tunable_parameters.weight_state_2,
                            tunable_parameters.weight_state_3, tunable_parameters.weight_state_4)      # weight matrix on states (x, y, v, theta)

        self.R = cd.diagcat(
            tunable_parameters.weight_control_1, tunable_parameters.weight_control_2)                  # weight matrix on constrol inputs (a, delta)

        # change in steering angle
        self.Z = tunable_parameters.weight_delta
        # Time T
        self.T = tunable_parameters.Time_delta
        self.set_options(options)
        self.car.set_vehicle_constraints(tunable_parameters.prediction_horizon)
        self.set_constraints()
        self.set_optimization_variables()
        self.set_objectives()
        self.setup_obstacles(tunable_parameters.prediction_horizon,
                             self.car.get_vehicle_diameter(), self.X)
        self.formulate_NLP()
        self.create_solver()

    def set_options(self, options):
        # Setting up the IPOPT solver

        self.solver_options = {
            'ipopt': {
                'max_iter': options.max_iter,
                'print_level': options.print_level,
                'acceptable_tol': options.acceptable_tolerance,
                'acceptable_obj_change_tol': options.acceptable_objective_change_tolerance
            },
            'print_time': options.print_time
        }

    def setup_obstacles(self, prediction_horizon, ego_vehicle_diameter, state_X):
        # This methods initiates the obstacles if there are any provided in obstacle list in constructor
        
        if (self.obstacle_list != None):
            for idx in range(len(self.obstacle_list)):
                self.obstacle_list[idx].set_collision_avoidance_constraints(
                    prediction_horizon, ego_vehicle_diameter, state_X)
                obstacle_constraints, lower_bounds, upper_bounds = self.obstacle_list[idx].get_collision_avoidance_constraints(
                )

                for constraints in obstacle_constraints:
                    self.constraints_vector = cd.vertcat(
                        self.constraints_vector, constraints)   # Maybe there is an efficient way instead of looping?
                self.lb_constraints_vector = cd.vertcat(
                    self.lb_constraints_vector, lower_bounds)
                self.ub_constraints_vector = cd.vertcat(
                    self.ub_constraints_vector, upper_bounds)
        else:
            # DO Nothing since there are no obstacles
            pass

    def set_constraints(self):
        # Constaints for Multiple Shooting technique and Obstacle avaidance

        self.lb_constraints_vector = cd.DM.zeros(
            (self.num_of_states*(self.prediction_horizon+1), 1))
        self.ub_constraints_vector = cd.DM.zeros(
            (self.num_of_states*(self.prediction_horizon+1), 1))

    def get_constraints(self):
        return self.lb_constraints_vector, self.ub_constraints_vector

    def set_objectives(self):
        # initialization of steering for change in steering constraint

        prev_steering = 0
        # X : [x_1, x_2 ....x_N+1], P : [Initial and Fianl States]
        self.constraints_vector = self.X[:, 0] - self.P[:self.num_of_states]

        for idx in range(self.prediction_horizon):
            temp_state = self.X[:, idx]
            temp_control = self.U[:, idx]
            # objective_fun = current_state - reference_state * weight_matrix + currect_input - ref_input * weight_matrix + Prev_steering - Current_steering * Weight
            self.objective += (temp_state-self.P[4:8]).T @ self.Q @ (temp_state - self.P[4:8]) + (
                temp_control).T @ self.R @ temp_control + temp_control[1]-prev_steering*self.Z*(temp_control[1]-prev_steering).T
            prev_steering = temp_control[1]
            temp_next_state = self.X[:, idx+1]
            # Runge Kutta based descritization for smooth trajectory
            biycle_model = self.car.get_model()
            k1 = biycle_model(temp_state, temp_control)
            k2 = biycle_model(temp_state + self.T/2*k1, temp_control)
            k3 = biycle_model(temp_state + self.T/2*k2, temp_control)
            k4 = biycle_model(temp_state + self.T*k3, temp_control)
            st_next_motion_model = temp_state + \
                self.T/6*(k1 + 2*k2 + 2*k3 + k4)
            self.constraints_vector = cd.vertcat(
                self.constraints_vector, temp_next_state - st_next_motion_model)

    def formulate_NLP(self):

        self.nlp_prob = {'f': self.objective,                      # Objective
                         'x': self.optimization_variables,         # contains both X and U
                         'p': self.P,                              # vector with initial and reference points
                         # constraints for collision avoidance and multiple shooting
                         'g': self.constraints_vector
                         }

    def create_solver(self):
        self.solver = cd.nlpsol(
            'solver', 'ipopt', self.nlp_prob, self.solver_options)

    def get_solver(self):
        return self.solver
