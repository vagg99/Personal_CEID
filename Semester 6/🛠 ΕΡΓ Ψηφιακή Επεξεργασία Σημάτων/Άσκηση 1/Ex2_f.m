x = cos(pi*n/4) - sin(pi/2*n) + (-1/2).^n;
N= 2^9;
n= 0:N-1;
tic
X= fft(x);
toc