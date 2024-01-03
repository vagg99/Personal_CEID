load eye.mat;
N=0;
avg = mean(I,3);
for i=1:100
    N = N+I(:,:,i);
end
H=N/100;
imshow(H);