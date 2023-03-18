clear; clc; close all
%I = ones;
n = 0 : 1000;
phi = rand(1)*2*pi;
s = sin(0.25*n + phi);

w = randn(1, length(n));
v = filter(I, [1, -0.6], w);

x = s + w;

%%
hW = [];
w_hat = filter(hW, 1, v);
norm(w - w_hat)
x_hat = x - w_hat;




subplot(131);plot(s);title('Original')
subplot(132);plot(x);title('Noisy')
subplot(133);plot(x_hat);title('Filtered')
