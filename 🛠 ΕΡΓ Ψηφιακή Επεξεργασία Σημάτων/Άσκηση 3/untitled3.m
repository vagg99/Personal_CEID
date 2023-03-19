
h = [1, -1];
w = pi/16;
N = 0:100;
%x = cos(w*N);
%Y=filter(h,1,x);
%y = filter(h,1,I,[], 1);
plot(y);