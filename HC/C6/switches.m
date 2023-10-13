%switches.m
%Ejemplo de switch
%autor: Jose Luis
%fecha: 13/10/23

fprintf("Menu\n1. Opcion 1\n2. Opcion 2\n3. Salir\nSeleccione un opcion: ");
opcion = input("");
switch opcion
    case 1
        disp("Opcion uno");
    case 2
        disp("Opcion 2");
    case 3
        disp("Adios");
    otherwise
        disp("Opcion con capacidades diferentes");
end