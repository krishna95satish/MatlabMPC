%% MPC Formulation for Trajectory generation Problem

clear all
close all
clc
%% Adding CasADi path 
addpath('/home/krishna/Master_Thesis/casadi-linux-matlabR2014b-v3.5.5')
import casadi.*

%% Constants 
T = 0.2;
N = 30;
rob_diam = 0.3;
WB = 2.5;
a_max = 0.1; 
a_min = -a_max;
delta_max = pi/15; 
delta_min = -delta_max;
sim_tim = 20; 
isViz = true;

%% System Variables in CasADi formate
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

%% Bicycle Model formulation in the form Ax + Bu + C
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
B(4, 2) = T * (v * tan(delta)^2) + (1/WB);  % according the reaseach paper of structured environment 

C = SX.sym('C',n_states); 
C(1) = T * v * sin(theta) * theta;
C(2) = - T * v * cos(theta) * theta;
C(3) = 0;
C(4) = v * delta / (WB * cos(delta)^2);


X_dot = A*states + B*controls + C;

%% CasADi function to generate the A, B and C matrix
f = Function('f', {states, controls}, {X_dot})
f_Ag = Function('f', {states, controls}, {A});
f_Bg = Function('f', {states, controls}, {B});
f_Cg = Function('f', {states, controls}, {C});

%% System State variables
U = SX.sym('U',n_controls,N); 
P = SX.sym('P',n_states + n_states);
X = SX.sym('X',n_states,(N+1));

%% Objective function formulation
obj = 0; 
g = [];  

Q = zeros(4,4); 
Q(1,1) = 20;
Q(2,2) = 20;
Q(3,3) = 0.2;
Q(4,4) = 2;

R = zeros(2,2);
R(1,1) = 50 ;
R(2,2) = 65;

st  = X(:,1); 
g = [g;
    st-P(1:4)
    ]; 
for k = 1:N
    st = X(:,k);  
    con = U(:,k);
    obj = obj+(st-P(5:8))'*Q*(st-P(5:8)) + con'*R*con;   % Sum of squared errror to reference and current pose
    st_next = X(:,k+1);
    %% TODO
    rhs = f(st, con);
    f_A = f_Ag(st, con);
    f_B = f_Bg(st, con);
    f_C = f_Cg(st, con);
    st_next_motion_model = f_A*st + f_B*con + f_C;
    %% Multiple Shooting based Equality Constraints
    g = [g;
        st_next-st_next_motion_model
        ];
end
%% Add constraints for collision avoidance
obs_x1 = 2.0; 
obs_y1 = 2.0; 
obs_diam = 0.8; 
%% Another obstacle
obs_x = 3; 
obs_y = -2; 
obs1_diam = 0.5; 
%% Constant veloity model in X direction only(For now)
obs_vel = 0.1;
obs_x_prev = obs_x1;
obs_history(:,1) = obs_x_prev; 


%% Adding circle approximation for collision avoidance 
for k = 1:N+1  
    g = [g ; -sqrt((X(1,k)-obs_x)^2+(X(2,k)-obs_y)^2) + (rob_diam/2 + obs_diam/2)];
end
for k = 1:N+1   
    g = [g ; -sqrt((X(1,k)-obs_x1)^2+(X(2,k)-obs_y1)^2) + (rob_diam/2 + obs_diam/2)];
     obs_x1 = obs_x1 + T*obs_vel;
     obs_history(:,k) = obs_x1;
end
       
%% Optimization variables
Optimization_variables = [reshape(X,4*(N+1),1);
                 reshape(U,2*N,1)];

%% NLP Problem formualtion
nlp_prob = struct('f', obj, 'x', Optimization_variables, 'g', g, 'p', P);

%% Solver Settings
opts = struct;
opts.ipopt.max_iter = 1000;
opts.ipopt.print_level =0;%0,3
opts.print_time = 0;
opts.ipopt.acceptable_tol =1e-3;
opts.ipopt.acceptable_obj_change_tol = 1e-3;

solver = nlpsol('solver', 'ipopt', nlp_prob,opts);

%% Constraints Structure
args = struct;
args.lbg(1:4*(N+1)) = 0; %% Equality constraints for multple shooting
args.ubg(1:4*(N+1)) = 0;

args.lbg(4*(N+1)+1 : 4*(N+1)+ 2* (N+1)) = -inf; 
args.ubg(4*(N+1)+1 : 4*(N+1)+ 2* (N+1)) = 0;

args.lbx(1:4:4*(N+1),1) = -5;
args.ubx(1:4:4*(N+1),1) = 5; 
args.lbx(2:4:4*(N+1),1) = -5; 
args.ubx(2:4:4*(N+1),1) = 5; 
args.lbx(3:4:4*(N+1),1) = -0.5; 
args.ubx(3:4:4*(N+1),1) = 0.5; 
args.lbx(4:4:4*(N+1),1) = -pi; 
args.ubx(4:4:4*(N+1),1) = pi; 
args.lbx(4*(N+1)+1:2:4*(N+1)+2*N,1) = a_min; 
args.ubx(4*(N+1)+1:2:4*(N+1)+2*N,1) = a_max; 
args.lbx(4*(N+1)+2:2:4*(N+1)+2*N,1) = -inf; 
args.ubx(4*(N+1)+2:2:4*(N+1)+2*N,1) = inf; 

%% -------------------- Problem Simulation-----------------------
t0 = 0;
x0 = [3 ; -3 ; 0.12 ;pi/2 ];    
xs = [2.5 ; -1.5 ; 0.0 ; pi/2 ]; 

xx(:,1) = x0; 
t(1) = t0;

u0 = zeros(N,2);       
X0 = repmat(x0,1,N+1)'; 

mpciter = 0;
counter = 0;
state_chache = [];
control_action_cache=[];
test_point_num = 0;

%% Reference waypoints to cover 
P_ref = [[2.5 ; -1.5 ; 0.0 ; pi/2 ], ...
          [3 ; 0 ; 0; (pi/2) - (pi/9)],...
          [3; 1.0; 0; pi/2],...
          [1; 3; 0; pi-(pi/9)],...
          [-2; 3; 0; pi]];
[~, s] = size(P_ref);
for i = 1:s
    main_loop = tic;
    mpciter = 0;
    xs = P_ref(:,i);
    while(norm((x0-xs),2) > 0.25 &&  mpciter < sim_tim / T)

    args.p   = [x0;xs]; 
    args.x0  = [reshape(X0',4*(N+1),1);
    reshape(u0',2*N,1)];
   %% args.ubx = 10; test for dynamically changind the road boundaries ! It seems to work
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);

    u = reshape(full(sol.x(4*(N+1)+1:end))',2,N)'; 
    state_chache(:,1:4,counter+1)= reshape(full(sol.x(1:4*(N+1)))',4,N+1)'; 
    control_action_cache= [control_action_cache ; u(1,:)];
    t(counter+1) = t0;

    [t0, x0, u0] = ShiftBicycleModel(T, t0, x0, u,f_Ag,f_Bg,f_Cg);

    xx(:,counter+2) = x0;
    X0 = reshape(full(sol.x(1:4*(N+1)))',4,N+1)'; 

    X0 = [X0(2:end,:);X0(end,:)];
    %mpciter;
    counter = counter + 1;
    mpciter = mpciter + 1;
    end
    test_point_num = test_point_num + 1;
    if (test_point_num == 3) 
        state_iter = counter;
    end
    disp("Test point reached")
end

main_loop_time = toc(main_loop) / mpciter

ss_error = norm((x0-xs),2)
if (isViz)
    Draw_MPC_PS_Obstacles (state_iter,t,xx,state_chache,control_action_cache,xs,N,rob_diam,obs_history,obs_x,obs_y, obs_x_prev,obs_y1 ,obs_diam)
else
    disp('Visualisation disabled')
end


