% script.m
% Ejemplos
% autor: Jose Luis (jlcruz@ipn.mx)
% fecha: 4/10/23

clear;
clc;
numeros = 1:20;
raices = sqrt(numeros);
tabla = table(numeros', raices', 'VariableNames',["Numeros", "Raices"]);
%writetable(tabla, "Mi_Tabla.txt");
writetable(tabla, "Mi_Tabla.xlsx");
%disp(tabla);

% Paso 1: Abrir/Crear el archivo
fid = fopen("Tabla_Raices.txt", "w");

% Paso 2: Escribir en el archivo
fprintf(fid, "Numeros\t\tRaices\n");
fprintf(fid, "%5i\t\t%5.2f\n", [numeros;raices]);

% Paso 3: Cerramos el archivo
fclose(fid);