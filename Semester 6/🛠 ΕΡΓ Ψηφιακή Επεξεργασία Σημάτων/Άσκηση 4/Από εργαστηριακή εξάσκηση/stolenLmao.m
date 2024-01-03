load eye.mat

M = 0;
for i=1:100
    M = M+I(:,:,i);
end

A = M/100;
imshow(A);