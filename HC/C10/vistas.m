%Vistas
x = linspace(-3,3,50);
y = linspace(-3,3,50);
[X,Y] = meshgrid(x,y);
Z=(1.8.^(-1.5*sqrt(X.^2 + Y.^2))).*sin(X).*cos(0.5*Y);

for k=linspace(0,360,10)
    mesh(X,Y,Z);
    view(k,45);
    pause(0.5);
end