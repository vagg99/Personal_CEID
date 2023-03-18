L = 1000; % number of samples
M = 6;  % filter length
n = 0:1000;
phi = randn(1)*2*pi;
s = sin(0.25*n + phi); % desired signal - w0=0.25r/s
w = randn(1, length(n));
v = filter(1, [1, -0.6], w); % input signal
V = 20*log10(fftshift(abs(fft2(v))));
figure; imagesc(V)
x = s + w;
p = zeros(M, 1); % cross-correlation vector
R = zeros(M, M); % autocorrelation matrix
for n = M:L
    vv = v(n:-1:n-M+1).'; % input vector
    p = p + vv * w(n);
    R = R + vv * vv.';
end
p = p / L;
R = R / L;
hW = R \ p;

MSE = mean(hW.^2);

w_hat = filter(hW, 1, v);
norm(w - w_hat)
x_hat = x - w_hat;

figure;
%subplot(131);plot(s);title('Original')
%subplot(132);plot(x);title('Noisy')
plot(x_hat);title('Filtered')
