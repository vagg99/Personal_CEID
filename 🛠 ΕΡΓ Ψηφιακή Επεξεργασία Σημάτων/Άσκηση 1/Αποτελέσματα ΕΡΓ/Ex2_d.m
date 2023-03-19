%syms x n
x = cos(pi*n/4) - sin(pi/2*n) + (-1/2).^n;
%arithmitis
h=[ -1/2, 1, -1/2];

%number of frequencies
N=20;

[H, om] = freqz(h,1);
%F(x) = symsum(cos(pi*n/4) - sin(pi*n/2) + (-1/2)^n, n, 0, 16000);
 
n=0:99;
y = filter(h,1,x);

figure(1) %conv
clf
plot(conv(h,x));
title('convolution')

figure(2) %filter
plot(filter(h,1,x));
title('filter');
