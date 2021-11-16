
clear all
close all
clc

addpath('/home/krishna/Master_Thesis/casadi-linux-matlabR2014b-v3.5.5')
import casadi.*

T = 0.2;
N = 15; % prediction horizon
rob_diam = 0.3;
WB = 2;

a_max = 0.2; 
a_min = -a_max;
delta_max = pi/31.41; % 0.1 rad as in paper
delta_min = -delta_max;

x = SX.sym('x'); 
y = SX.sym('y');
v = SX.sym('v');
theta = SX.sym('theta');

states = [x;
          y;
          v;
          theta]; 
n_states = length(states);

a = SX.sym('a');
delta = SX.sym('delta');

controls = [a;
            delta];
n_controls = length(controls);

%% Ax + Bu + C
A = SX.sym('A', n_states, n_states); 
A(1,1) = 1;
A(1,2) = 0;
A(1, 3) = T * cos(theta);
A(1, 4) = -T * v * sin(theta);

A(2,1) = 0;
A(2,2) = 1;
A(2, 3) = T * sin(theta);
A(2, 4) = T * v * cos(theta);

A(3,1) = 0;
A(3,2) = 0;
A(3,3) = 1;
A(3,4) = 0;

A(4,1) = 0;
A(4,2) = 0;
A(4, 3) = T * tan(delta) / WB;
A(4,4) = 1;

B = SX.sym('B',n_states,n_controls); 
B(1,1) = 0;
B(1,2) = 0;

B(2,1) = 0;
B(2,2) = 0;

B(3,1) = T;
B(3,2) = 0;

B(4,1) = 0;
B(4, 2) = T * (v * tan(delta)^2) + (1/WB);

C = SX.sym('C',n_states); 
C(1) = T * v * sin(theta) * theta;
C(2) = - T * v * cos(theta) * theta;
C(3) = 0;
C(4) = v * delta / (WB * cos(delta)^2);

f_Ag = Function('f', {states, controls}, {A, B, C});

U = SX.sym('U',n_controls,N); % Decision variables (controls)
U_Prev = SX.sym('U_Prev', n_controls, 1);
U_Prev(1,:) = 0;
U_Prev(2,:) = 0;

P = SX.sym('P',n_states + n_states);
% parameters (which include at the initial state of the robot and the reference state)

X = SX.sym('X',n_states,(N+1));
% A vector that represents the states over the optimization problem.

obj = 0; % Objective function
g = [];  % constraints vector

Q = zeros(4,4); 
Q(1,1) = 2;
Q(2,2) = 5;
Q(3,3) = 0.5;
Q(4,4) = 0.06;

R = zeros(2,2);
R(1,1) = 0.05;
R(2,2) = 0.25;



st  = X(:,1); % initial state
g = [g;st-P(1:4)]; % initial condition constraints
for k = 1:N
    st = X(:,k);  con = U(:,k);
    obj = obj+(st-P(5:8))'*Q*(st-P(5:8)) + (con )'*R*(con ); % calculate obj
    U_Prev(2,:) = con(2); % only taking the delta 
    st_next = X(:,k+1);
    %% Runge kutta method
    %% TODO
    %% calulation of next state with motion model start
    [f_A ,f_B ,f_C] = f_Ag(st, con);
    st_next_euler = f_A*st + f_B*con + f_C;
    %% %% calulation of next state with motion model end
    g = [g;st_next-st_next_euler]; % compute constraints
end
% Add constraints for collision avoidance
obs_x1 = 5.0; % meters
obs_y1 = 5.0; % meters
obs_diam = 0.5; % meters
% another obstacle
obs_x = 3; % meters
obs_y = -2; % meters
obs1_diam = 0.5; % meters
for k = 1:N+1   % box constraints due to the map margins
    g = [g ; -sqrt((X(1,k)-obs_x)^2+(X(2,k)-obs_y)^2) + (rob_diam/2 + obs_diam/2)];
end

       
% make the decision variable one column  vector
OPT_variables = [reshape(X,4*(N+1),1);
                 reshape(U,2*N,1)];

nlp_prob = struct('f', obj, 'x', OPT_variables, 'g', g, 'p', P);

opts = struct;
opts.ipopt.max_iter = 100;
opts.ipopt.print_level =0;%0,3
opts.print_time = 0;
opts.ipopt.acceptable_tol =1e-8;
opts.ipopt.acceptable_obj_change_tol = 1e-6;

solver = nlpsol('solver', 'ipopt', nlp_prob,opts);

args = struct;
args.lbg(1:4*(N+1)) = 0; % equality constraints
args.ubg(1:4*(N+1)) = 0; % equality constraints

args.lbg(4*(N+1)+1 : 4*(N+1)+ (N+1)) = -inf; % inequality constraints
args.ubg(4*(N+1)+1 : 4*(N+1)+ (N+1)) = 0; % inequality constraints

args.lbx(1:4:4*(N+1),1) = -5; %state x lower bound
args.ubx(1:4:4*(N+1),1) = 5; %state x upper bound
args.lbx(2:4:4*(N+1),1) = -5; %state y lower bound
args.ubx(2:4:4*(N+1),1) = 5; %state y upper bound
args.lbx(3:4:4*(N+1),1) = -0.5; %state v lower bound
args.ubx(3:4:4*(N+1),1) = 0.5; %state v upper bound
args.lbx(4:4:4*(N+1),1) = -pi; %state theta lower bound
args.ubx(4:4:4*(N+1),1) = pi; %state theta upper bound

args.lbx(4*(N+1)+1:2:4*(N+1)+2*N,1) = a_min; %v lower bound
args.ubx(4*(N+1)+1:2:4*(N+1)+2*N,1) = a_max; %v upper bound
args.lbx(4*(N+1)+2:2:4*(N+1)+2*N,1) = delta_min; %omega lower bound
args.ubx(4*(N+1)+2:2:4*(N+1)+2*N,1) = delta_max; %omega upper bound
%----------------------------------------------
% ALL OF THE ABOVE IS JUST A PROBLEM SET UP


% THE SIMULATION LOOP SHOULD START FROM HERE
%-------------------------------------------
t0 = 0;
x0 = [3 ; -3 ; 0.0 ;pi/2 ];    % initial condition.
xs = [2.5 ; -1.5 ; 0.0 ; pi/2 ]; % Reference posture.

xx(:,1) = x0; % xx contains the history of states
t(1) = t0;

u0 = zeros(N,2);        % two control inputs for each robot
u_prev = zeros(N,2);
X0 = repmat(x0,1,N+1)'; % initialization of the states decision variables

sim_tim = 20; % Maximum simulation time

% Start MPC
mpciter = 0;
counter = 0;
xx1 = [];
u_cl=[];

% the main simulaton loop... it works as long as the error is greater
% than 10^-6 and the number of mpc steps is less than its maximum
% value.
P_ref = [[2.5 ; -1.5 ; 0.0 ; pi/2 ], ...
          [3; -0.5; 0; pi/2],...
          [3; 1.0; 0; pi/2],...
          [2; 2; 0; pi-(pi/9)],...
          [0; 2.5; 0; pi]];
[~, s] = size(P_ref);

for i = 1:s
    main_loop = tic;
    mpciter = 0;
    xs = P_ref(:,i);
    while(norm((x0-xs),2) > 0.2 &&  mpciter < sim_tim / T)

    args.p   = [x0;xs]; % set the values of the parameters vector
    % initial value of the optimization variables
    args.x0  = [reshape(X0',4*(N+1),1);
                reshape(u0',2*N,1)];
   %% args.ubx = 10; test for dynamically changind the road boundaries ! It seems to work
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    u = reshape(full(sol.x(4*(N+1)+1:end))',2,N)'; % get controls only from the solution
    xx1(:,1:4,counter+1)= reshape(full(sol.x(1:4*(N+1)))',4,N+1)'; % get solution TRAJECTORY
    u_cl= [u_cl ; u(1,:)];
    t(counter+1) = t0;
    % Apply the control and shift the solution
    [t0, x0, u0] = ShiftBicycleModel(T, t0, x0, u,f_Ag);
    xx(:,counter+2) = x0;
    X0 = reshape(full(sol.x(1:4*(N+1)))',4,N+1)'; % get solution TRAJECTORY
    % Shift trajectory to initialize the next step
    X0 = [X0(2:end,:);X0(end,:)];
    %mpciter;
    counter = counter + 1;
    mpciter = mpciter + 1;
    end
end

main_loop_time = toc(main_loop) / mpciter

ss_error = norm((x0-xs),2)
Draw_MPC_PS_Obstacles (t,xx,xx1,u_cl,xs,N,rob_diam,obs_x,obs_y, obs_x1,obs_y1 ,obs_diam)


