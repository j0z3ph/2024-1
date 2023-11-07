/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-11-06
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Fecha
{
    int dia, mes, anio;
} Fecha;

struct Alumno
{
    char nombre[50];
    long boleta;
    Fecha fnacimiento;
};

typedef struct Alumno Alumno;

void imprime(Alumno alumno)
{
    printf("Nombre: %s\nBoleta: %lu\nFecha: %02i/%02i/%i\n",
           alumno.nombre, alumno.boleta, alumno.fnacimiento.dia,
           alumno.fnacimiento.mes, alumno.fnacimiento.anio);
}

void imprimeRef(Alumno *alumno)
{
    printf("Nombre: %s\nBoleta: %lu\nFecha: %02i/%02i/%i\n",
           alumno->nombre, alumno->boleta, alumno->fnacimiento.dia,
           alumno->fnacimiento.mes, alumno->fnacimiento.anio);
}

Alumno pedirDatos()
{
    Alumno al;
    printf("Nombre: ");
    fgets(al.nombre, 50, stdin);
    al.nombre[strlen(al.nombre) - 1] = '\0';
    printf("Boleta: ");
    scanf("%lu", &al.boleta);
    getc(stdin);
    printf("Fecha de Nacimiento (dd/mm/aaaa): ");
    scanf("%i/%i/%i", &al.fnacimiento.dia,
          &al.fnacimiento.mes, &al.fnacimiento.anio);
    getc(stdin);

    return al;
}

int main(int argc, char const *argv[])
{
    int tamanio = 0;
    Alumno *lista;
    printf("Usuario, escriba el tamanio del arreglo: ");
    scanf("%i", &tamanio);
    getc(stdin);

    if (tamanio <= 0)
    {
        printf("Papi, no te hagas el chistoso >:(\n");
        exit(1);
    }

    // Creamos el arreglo
    lista = (Alumno *)malloc(sizeof(Alumno) * tamanio);

    for (int i = 0; i < tamanio; i++)
    {
        lista[i] = pedirDatos();
    }

    for (int i = 0; i < tamanio; i++)
    {
        imprime(lista[i]);
    }

    return 0;
}
