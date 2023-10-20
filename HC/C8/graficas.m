%
clear;
clc;
%syms x;
%f(x) = sin(x);
%fplot(f, [0 2*pi]);

fplot(@(x)sin(x), [0, 2*pi], "r--s");
axis([0 2*pi -3 3]);