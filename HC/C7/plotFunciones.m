%

clear;
clc;
% Notacion viejita
%fplot("x^2+4*sin(2*x)-1", [-3 3]);

% Notacion moderna
fplot(@(x)x.^2+4.*sin(2.*x)-1, [-3 3]);

% fplot con funcion simbolica
%syms x;
%f(x) = x^2 + 4*sin(2*x) - 1;
%fplot(f, [-3 3]);