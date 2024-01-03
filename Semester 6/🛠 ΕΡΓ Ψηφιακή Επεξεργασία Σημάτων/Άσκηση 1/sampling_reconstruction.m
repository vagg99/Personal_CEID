function sampling_reconstruction(Ts,f0,initial_phase)
% Ts: sampling rate
% f0: frequency of signal in Hz
% initial_phase: initial phase of signal 
%========================================================================%
% clear
% clc
% close all
%========================================================================%
n  = 0:10/Ts;
x = sin(2*pi*f0*n*Ts+initial_phase);
%plot(n,x)
dt = 0.001;
t = 0:dt:10;
x_cont=sin(2*pi*f0*t'+initial_phase);
% Initialize Arrays
sinc_array = zeros(length(t),length(n));
triangular_array = sinc_array;
rec_array = sinc_array;

% indx:(t/Ts-n)
indx = t'*ones(1,length(n))/Ts-ones(length(t),1)*n;

% Sinc 
sinc_array = sinc(indx);
% Triangular 
triangular_array(abs(indx)>1)=0;
triangular_array(abs(indx)<1) = 1 - abs(indx(abs(indx)<1));
% Rectangular
rec_array(abs(indx)<1/2) = 1;
rec_array(indx ==1/2) = 1;
rec_array(abs(indx)>1/2) = 0;
% Splines
sp = spline(n*Ts,x);
pp = mkpp(sp.breaks,sp.coefs);

% Reconstructed Signals
x_analog1 = sum((ones(length(t),1)*x).*sinc_array,2); % Sinc Reconstruction

x_analog2 = sum((ones(length(t),1)*x).*triangular_array,2); %Triangular Reconstruction

x_analog3 = sum((ones(length(t),1)*x).*rec_array,2); % Rectangular Reconstruction

x_analog4 = ppval(pp,t'); % Splines Reconstruction

% Residual Signals
r1=x_cont-x_analog1;
r2=x_cont-x_analog2;
r3=x_cont-x_analog3;
r4=x_cont-x_analog4;

% Plot Reconstructed Signals
figure;
plot(t(1:1000),x_cont(1:1000)) % Plot original analog signal
hold on
plot(n(1:dt/Ts*1000)*Ts,x(1:dt/Ts*1000),'x') % Plot Sample Points
plot(t(1:1000),x_analog1(1:1000)) % Plot sinc reconsruction
plot(t(1:1000),x_analog2(1:1000)) % Plot triangular reconstruction
plot(t(1:1000),x_analog3(1:1000)) % Plot rectangular reconsturction
plot(t(1:1000),x_analog4(1:1000)) % Plot splines reconsturction
hold off
legend('Analog','Samples','Sinc','Triangular','Rectangular','Splines')


% Plot Error of Reconstruction
figure
hold on
plot(t(1:100),sin(10*pi*t(1:100)')-x_analog1(1:100)) % Plot sinc Error
plot(t(1:100),sin(10*pi*t(1:100)')-x_analog2(1:100)) % Plot triangular Error
plot(t(1:100),sin(10*pi*t(1:100)')-x_analog3(1:100)) % Plot rectangular Error
plot(t(1:100),sin(10*pi*t(1:100)')-x_analog4(1:100)) % Plot splines Error
hold off
legend('Sinc','Triangular','Rectangular','Splines')

% Plot of Distributions of residuals

figure
histogram(r1,200) % Histogram of r1
legend('Sinc Residual')
figure
histogram(r2,200) % Histogram of r2
legend('Triangular Residual')
figure
histogram(r3,200) % Histogram of r3
legend('Rectangular Residual')
figure
histogram(r4,200) % Histogram of r4
legend('Splines Residual')

MSE=[mean(r1.^2) mean(r2.^2) mean(r3.^2) mean(r4.^2)];
STD=[std(r1) std(r2) std(r3) std(r4)];



