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

int main(int argc, char const *argv[])
{
    // STACK
    Alumno alumno;
    strcpy(alumno.nombre, "Jose Luis");
    alumno.boleta = 12345678;
    alumno.fnacimiento.dia = 1;
    alumno.fnacimiento.mes = 1;
    alumno.fnacimiento.anio = 1970;

    imprime(alumno);

    // HEAP
    Alumno *aludinamico = (Alumno *)malloc(sizeof(Alumno));
    strcpy(aludinamico->nombre, "Alexis B");
    aludinamico->boleta = 25344664;
    aludinamico->fnacimiento.dia = 10;
    aludinamico->fnacimiento.mes = 5;
    aludinamico->fnacimiento.anio = 2005;

    imprimeRef(aludinamico);

    // Apuntador a estuctura
    Alumno *alupuntero;
    alupuntero = &alumno;

    imprimeRef(alupuntero);

    return 0;
}
