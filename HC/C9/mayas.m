%
clear;
clc;
x = -1:.1:3;
y = 1:.1:4;
[X, Y] = meshgrid(x,y);
Z = (X .* Y.^2)./(X.^2 + Y.^2);
mesh(X,Y,Z);
surf(X,Y,Z);
colormap("winter");