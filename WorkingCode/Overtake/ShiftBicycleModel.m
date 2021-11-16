function [t0, x0, u0] = ShiftBicycleModel(T, t0, x0, u,f_Ag,f_Bg,f_Cg)
st = x0;
con = u(1,:)';

f_A = f_Ag(st, con);
f_B = f_Bg(st, con);
f_C = f_Cg(st, con);
st = f_A*st + f_B*con + f_C;

x0 = full(st);

t0 = t0 + T;
u0 = [u(2:size(u,1),:);u(size(u,1),:)];
end