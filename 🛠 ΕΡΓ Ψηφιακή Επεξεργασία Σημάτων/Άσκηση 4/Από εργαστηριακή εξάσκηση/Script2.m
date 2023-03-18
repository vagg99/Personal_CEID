clear; clc; close all
I = ones;
n = 0 : 1000;
phi = rand(1)*2*pi;
s = sin(0.25*n + phi);

w = randn(1, length(n));
v = filter(I, [1, -0.6], w);

V = 20*log10(fftshift(abs(fft2(v))));
figure; imagesc(V)

x = s + w;



L=1000;
N = 2;  % filter length
p = zeros(N, 1); % cross-correlation vector
R = zeros(N, N); % autocorrelation matrix
for n = N:L
    vv = v(n:-1:n-N+1).'; % input vector
    p = p + vv * w(n);
    R = R + vv * vv.';
end

p = p / L;
R = R / L;
hW = R \ p;

%%

w_hat = filter(hW, 1, v);
norm(w - w_hat);
x_hat = x - w_hat;




subplot(131);plot(s);title('Original')
subplot(132);plot(x);title('Noisy')
subplot(133);plot(x_hat);title('Filtered')
