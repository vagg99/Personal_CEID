%% Load Signals
clear;clc; close all
load('1DNoisy.mat')
Fsize = 11;
%%
figure(1)
subplot(3,1,1);plot(y1);title('Impulse Noise')
subplot(3,1,2);plot(y2);title('White Noise')
subplot(3,1,3);plot(y3);title('Both')
%% Figure 2
figure(2)
subplot(311)
plot(y1,'x-'); title('Noisy Signal')
subplot(312)
plot(filter(ones(Fsize,1)/Fsize,1,y1)); title('Linear Filter')
subplot(313)
plot(medfilt1(y1,Fsize)); title('Non Linear Filter')
%% Figure 3
figure(3)
subplot(311)
plot(y2,'x-'); title('Noisy Signal')
subplot(312)
plot(filter(ones(Fsize,1)/Fsize,1,y2)); title('Linear Filter')
subplot(313)
plot(medfilt1(y2,Fsize)); title('Non Linear Filter')
%% Figure 4
figure(4)
subplot(311)
plot(y3,'x-'); title('Noisy Signal')
subplot(312)
plot(filter(ones(Fsize,1)/Fsize,1,y3)); title('Linear Filter')
subplot(313)
plot(medfilt1(y3,Fsize)); title('Non Linear Filter')
%% Figure 5
figure(5)
subplot(311)
plot(y3,'x-'); title('Noisy Signal')
subplot(312)
yf = filter(ones(Fsize,1)/Fsize,1,y3);
ym = medfilt1(y3,Fsize);
plot(filter(ones(Fsize,1)/Fsize,1,ym)); title('Linear After Median Filter')
subplot(313)
plot(medfilt1(yf,Fsize)); title('Median After Linear Filter')