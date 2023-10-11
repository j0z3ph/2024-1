%ifsss.m
%Ejemplo de ifs
%autor: Yo
%fecha: hoy

n = input("Usuario, escribe un numero: ");
if n < 0
    disp("La raiz es imaginaria, usa tu imaginacion para obtenerla :D");
else
    raiz = sqrt(n);
    fprintf("La raiz es %f\n", raiz);
end