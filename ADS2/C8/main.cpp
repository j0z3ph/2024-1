/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

typedef int entero;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Contacto {
    string nombre;
    string numero;
    struct Fecha fecha_registro;
};

typedef struct Contacto Contacto;

int main()
{
    entero dato;
    Contacto listaContactos[100];
    Contacto contacto1;
    contacto1.nombre = "Jose Luis";
    contacto1.numero = "34263848";
    contacto1.fecha_registro.dia = 10;
    contacto1.fecha_registro.mes = 10;
    contacto1.fecha_registro.anio = 2023;



    
    return 0;
}
