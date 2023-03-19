n=0:99;
x = cos(pi*n/4) - sin(pi/2*n) + (-1/2).^n;
h=[-1/2, 1, -1/2];
y = conv(x,h);

figure(1)
clf
plot(abs(fftshift(fft(x))))


figure(2)
clf
plot(abs(fftshift(fft(y))))