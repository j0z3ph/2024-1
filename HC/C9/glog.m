%
clear;
clc;
x = linspace(0.1,60,1000);
y = 2.^(-0.2*x+10);
plot(x,y); % normal
semilogx(x,y); % eje x logaritmico
semilogy(x,y); % eje y logaritmico
loglog(x,y);   % ejes x e y logaritmicos