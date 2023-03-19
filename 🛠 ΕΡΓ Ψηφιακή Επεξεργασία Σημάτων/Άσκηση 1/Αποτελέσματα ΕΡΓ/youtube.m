%% FIR filter design and evaluation.
clear all;
close all;
clc;

Fs=8e3; %Specify Sampling Frequency
Ts=1/Fs; %Sampling period.
Ns=512; %Number of time samples to be plotted.
t=[0:Ts:Ts*(Ns-1)]; %Make time array that contains Ns elements
 %t = [0, Ts, 2Ts, 3Ts,..., (Ns-1)Ts]
f1=500;
f2=1800;
f3=2000;
f4=3200;
x1=sin(2*pi*f1*t); %create sampled sinusoids at different frequencies
x2=sin(2*pi*f2*t);
x3=sin(2*pi*f3*t);
x4=sin(2*pi*f4*t);
x=x1+x2+x3+x4; %Calculate samples for a 4-tone input signal
grid on;
N=16; %FIR1 requires filter order (N) to be EVEN
 %when gain = 1 at Fs/2.
W=[0.4 0.6]; %Specify Bandstop filter with stop band between
 %0.4*(Fs/2) and 0.6*(Fs/2)
B=fir1(N,W,'DC-1');%Design FIR Filter using default (Hamming window.
B %Leaving off semi-colon causes contents of
 %B (the FIR coefficients) to be displayed.
A=1; %FIR filters have no poles, only zeros.
freqz(B,A); %Plot frequency response - both amp and phase response.
pause; %User must hit any key on PC keyboard to go on.
figure; %Create a new figure window, so previous one isn't lost.
subplot(2,1,1); %Two subplots will go on this figure window.
Npts=200;
plot(t(1:Npts),x(1:Npts)) %Plot first Npts of this 4-tone input signal
title('Time Plots of Input and Output');
xlabel('time (s)');
ylabel('Input Sig');
 %Now apply this filter to our 4-tone test sequence
y = filter(B,A,x);
subplot(2,1,2); %Now go to bottom subplot.
plot(t(1:Npts),y(1:Npts)); %Plot first Npts of filtered signal.
xlabel('time (s)');
2
3
ylabel('Filtered Sig');
pause;
figure; %Create a new figure window, so previous one isn't lost.
subplot(2,1,1);
xfftmag=(abs(fft(x,Ns))); %Compute spectrum of input signal.
xfftmagh=xfftmag(1:length(xfftmag)/2);
 %Plot only the first half of FFT, since second half is mirror imag
 %the first half represents the useful range of frequencies from
 %0 to Fs/2, the Nyquist sampling limit.
f=[1:1:length(xfftmagh)]*Fs/Ns; %Make freq array that varies from
 %0 Hz to Fs/2 Hz.
plot(f,xfftmagh); %Plot frequency spectrum of input signal
title('Input and Output Spectra');
xlabel('freq (Hz)');
ylabel('Input Spectrum');
subplot(2,1,2);
yfftmag=(abs(fft(y,Ns)));
yfftmagh=yfftmag(1:length(yfftmag)/2);
 %Plot only the first half of FFT, since second half is mirror image
 %the first half represents the useful range of frequencies from
 %0 to Fs/2, the Nyquist sampling limit.
plot(f,yfftmagh); %Plot frequency spectrum of input signal
xlabel('freq (Hz)'); 
