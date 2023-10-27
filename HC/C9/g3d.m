%
clear;
clc;
t = linspace(0, 6*pi, 500);
x = sqrt(t) .* sin(2*t);
y = sqrt(t) .* cos(2*t);
z = 0.5*t;

plot3(x,y,z, "r:");
grid on;
box on;