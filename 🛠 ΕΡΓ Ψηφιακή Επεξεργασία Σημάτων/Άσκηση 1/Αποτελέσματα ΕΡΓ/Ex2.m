h=[-1/2, 1, -1/2];

N=20;

[H, om] = freqz(h,1,20);

plot(abs(H))