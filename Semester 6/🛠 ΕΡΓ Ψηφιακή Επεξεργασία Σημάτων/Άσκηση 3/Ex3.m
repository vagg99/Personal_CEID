h = [1, -1];
w = pi/16;
N = 0:100;
x = cos(w*N);
%%%%%%%%%%%%%%%

Y=filter(h,1,x);
Y2 = filter(h,1,transpose(I));
Y22 = filter(h,1,Y2);
imagesc(Y22)

