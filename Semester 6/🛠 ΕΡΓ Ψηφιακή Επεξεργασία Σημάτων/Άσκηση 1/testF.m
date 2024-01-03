TEST = 2^13-1;

x = cos(pi*n/4) - sin(pi/2*n) + (-1/2).^n;
N=10000;
tic;
for i=1:N
    g=fft(x,TEST);
end
toc