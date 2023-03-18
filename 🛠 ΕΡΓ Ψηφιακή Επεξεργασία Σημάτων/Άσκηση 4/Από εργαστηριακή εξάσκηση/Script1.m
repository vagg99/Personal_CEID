clear;clc;close all
K = 100;
n = [-2000:4000]';
%A = rand(1,K) - 1/2;    %Uniform
A = randn(1,K);         %Gaussian
x = A .* ((n > 0) - (n - 1999 > 0));
Acor = x*x'/K;      %pinakas autosysxetishs
Sd = 20*log2(fftshift(abs(fft2(x*x'/K))));%FT, platos, shift-> kentrikh syxnothta
%%spectral density, log-> klimaka
%%
I = mean(x,2);          %Ar. mean

%%
plot(n,x)
figure; imagesc(n,n,Acor);
figure; imagesc(Sd); %% Spectral Density

