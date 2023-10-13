%whilessss.m
%Ejemplo de for
%autor: Jose luis
%fecha: 13/10/23

n = input("Usuario, escribaun numero: ");
cont = 1;
suma = 0;
while cont <= n
    suma = suma + cont;
    cont = cont + 1;
end
fprintf("%i \n", suma);