%
x = linspace(-3,3,50);
y = linspace(-3,3,50);
[X,Y] = meshgrid(x,y);
Z=(1.8.^(-1.5*sqrt(X.^2 + Y.^2))).*sin(X).*cos(0.5*Y);
%mesh(X,Y,Z);
%surf(X,Y,Z);
%meshz(X,Y,Z);
%meshc(X,Y,Z);
%surfc(X,Y,Z);
%surfl(X,Y,Z);
%surf(X,Y,Z);
%waterfall(X,Y,Z);
%contour3(X, Y, Z, 20);
%contour(X, Y, Z, 20);