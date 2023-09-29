% raices.m
% Pide al usuario un numero y le devuelve la raiz.
% autor: Yo merengues
% fecha: hoy

clear;
clc;
numero = input('Usuario, escriba un numero o lo "pico" >:| ');
raiz = sqrt(numero);
%disp("La raiz cuadrada es ");
%disp(raiz);
fprintf('La raiz de %i es %015.2f\n', numero, raiz);