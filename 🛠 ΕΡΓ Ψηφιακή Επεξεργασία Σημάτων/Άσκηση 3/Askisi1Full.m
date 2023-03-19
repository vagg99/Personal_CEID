I = imread('photo.jpg');
%imagesc(I)
N = 10;
A = (2*N+1).^-2 ;
B = 0;
C = conv2(A,B)