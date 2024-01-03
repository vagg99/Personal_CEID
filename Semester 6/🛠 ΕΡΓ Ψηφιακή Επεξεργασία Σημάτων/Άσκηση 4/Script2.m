clear; clc; close all
%stolen
L = 1000; % number of samples
%canon
n = 0:1000;
phi = rand(1)*2*pi;
s = sin(0.25*n + phi); % desired signal

w = randn(1, length(n));
v = filter(1, [1, -0.6], w); % input signal
%stolen
V = 20*log10(fftshift(abs(fft2(v))));
figure;
imagesc(V)
%canon
x = s + w;
%stolen
N = 2;  % filter length
hetero = zeros(N, 1); % cross-correlation vector
homo = zeros(N, N); % autocorrelation matrix
%stolen
for n = N:L
    vv = v(n:-1:n-N+1).'; % input vector
    hetero = hetero + vv * w(n);
    homo = homo + vv * vv.';
end
hetero = hetero / L;
homo = homo / L;

%%
%stolen-fixed
hW = homo \ hetero
%canon
w_hat = filter(hW, 1, v);
norm(w - w_hat)
x_hat = x - w_hat;



subplot(131);plot(s);title('Original')
subplot(132);plot(x);title('Noisy')
subplot(133);plot(x_hat);title('Filtered')