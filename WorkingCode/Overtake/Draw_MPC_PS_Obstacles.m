function Draw_MPC_PS_Obstacles (t,xx,xx1,u_cl,xs,N,rob_diam,obs_x,obs_y, obs_x1,obs_y1,obs_diam)

set(0,'DefaultAxesFontName', 'Times New Roman')
set(0,'DefaultAxesFontSize', 12)

line_width = 1.5;
fontsize_labels = 14;

%--------------------------------------------------------------------------
%-----------------------Simulate robots -----------------------------------
%--------------------------------------------------------------------------
x_r_1 = [];
y_r_1 = [];



r = rob_diam/2;  % obstacle radius
ang=0:0.005:2*pi;
xp=r*cos(ang);
yp=r*sin(ang);

r = obs_diam/2;  % obstacle radius
xp_obs=r*cos(ang);
yp_obs=r*sin(ang);

figure(500)
% Animate the robot motion
%figure;%('Position',[200 200 1280 720]);
set(gcf,'PaperPositionMode','auto')
set(gcf, 'Color', 'w');
set(gcf,'Units','normalized','OuterPosition',[0 0 0.55 1]);

tic
for k = 1:size(xx,2)
    h_t = 0.14; w_t=0.09; % triangle parameters
    
    x1 = xs(1); y1 = xs(2); th1 = xs(4);
    x1_tri = [ x1+h_t*cos(th1), x1+(w_t/2)*cos((pi/2)-th1), x1-(w_t/2)*cos((pi/2)-th1)];%,x1+(h_t/3)*cos(th1)];
    y1_tri = [ y1+h_t*sin(th1), y1-(w_t/2)*sin((pi/2)-th1), y1+(w_t/2)*sin((pi/2)-th1)];%,y1+(h_t/3)*sin(th1)];
    fill(x1_tri, y1_tri, 'g'); % plot reference state
    hold on;
    x1 = xx(1,k,1); y1 = xx(2,k,1); th1 = xx(4,k,1);
    x_r_1 = [x_r_1 x1];
    y_r_1 = [y_r_1 y1];
    x1_tri = [ x1+h_t*cos(th1), x1+(w_t/2)*cos((pi/2)-th1), x1-(w_t/2)*cos((pi/2)-th1)];%,x1+(h_t/3)*cos(th1)];
    y1_tri = [ y1+h_t*sin(th1), y1-(w_t/2)*sin((pi/2)-th1), y1+(w_t/2)*sin((pi/2)-th1)];%,y1+(h_t/3)*sin(th1)];

    plot(x_r_1,y_r_1,'-g','linewidth',line_width);hold on % plot exhibited trajectory
    if k < size(xx,2) % plot prediction
        plot(xx1(1:N,1,k),xx1(1:N,2,k),'b--o')
        for j = 2:N+1
            plot(xx1(j,1,k)+xp,xx1(j,2,k)+yp,'--r'); % plot robot circle
        end
    end
    
    fill(x1_tri, y1_tri, 'r'); % plot robot position
    
    plot(x1+xp,y1+yp,'--r'); % plot robot circle
    
     plot(obs_x+xp_obs,obs_y+yp_obs,'--b'); % plot robot circle  
     plot(obs_x1+xp_obs,obs_y1+yp_obs,'--b'); % plot robot circle
    
    hold off
    %figure(500)
    ylabel('$y$-position (m)','interpreter','latex','FontSize',fontsize_labels)
    xlabel('$x$-position (m)','interpreter','latex','FontSize',fontsize_labels)
    axis([-5 5 -5 5])
    pause(0.001)
    box on;
    grid on
    %aviobj = addframe(aviobj,gcf);
    drawnow
    % for video generation
    F(k) = getframe(gcf); % to get the current frame
end
toc
%close(gcf)

figure
subplot(211)
stairs(t,u_cl(:,1),'k','linewidth',1.5); axis([0 t(end) -0.75 0.75])
ylabel('a (m/s)')
grid on
subplot(212)
stairs(t,u_cl(:,2),'r','linewidth',1.5); axis([0 t(end) -0.85 0.85])
xlabel('time (seconds)')
ylabel('\delta (rad/s)')
grid on
