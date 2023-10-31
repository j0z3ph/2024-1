/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>

typedef int Entero;

typedef struct Punto {
    int x, y;
} Punto;

Punto suma(Punto a, Punto b)
{
    Punto res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;

    return res;
}



typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;




struct Persona
{
    char nombre[100];
    int edad;
    double salario;
    Fecha fnacimiento;
};

struct Lista {
    Persona personas[100];
};

typedef struct Persona Persona;

void Imprime(Persona persona) {
    printf("Nombre: %s\nEdad: %i\nSalario: $%.2f\nFecha Nacimiento: %02i/%02i/%04i\n",
           persona.nombre, persona.edad, persona.salario,
           persona.fnacimiento.dia, persona.fnacimiento.mes, persona.fnacimiento.anio);
}

int main()
{
    Entero entero;
    Persona persona;
    Persona lista[100];
    persona.edad = 22;
    persona.salario = 2.49;
    strcpy(persona.nombre, "Diego Alexis Chino");
    persona.fnacimiento.dia = 13;
    persona.fnacimiento.mes = 5;
    persona.fnacimiento.anio = 2001;

    Imprime(persona);
    
    return 0;
}
