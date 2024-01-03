h = [1/2, -1/2];
w = pi/16;
N = 0:100;
x = cos(w*N);
Y=filter(h,1,x);
plot(x);
