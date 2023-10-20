%
clear;
clc;
x = linspace(-2,4,100);
f = 3*x.^3 - 26*x + 10;
fp = 9*x.^2 - 26;
fbp = 18 * x;

plot(x,f, LineWidth=12);
hold on;
plot(x,fp, LineWidth=5);
plot(x,fbp, LineWidth=80);
hold off;

