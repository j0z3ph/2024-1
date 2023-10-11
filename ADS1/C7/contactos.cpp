/**
 * @file contactos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de estructuras
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
    struct Fecha fregistro;
};

typedef struct Contacto Contacto;

void imprimeContacto(Contacto c) {
    cout << "Nombre: " << c.nombre<< endl <<
    "Numero: " << c.numero << endl <<
    "Fecha Registro: " << c.fregistro.dia << "/" <<
    c.fregistro.mes << "/" << c.fregistro.anio << endl;
}

int main()
{
    entero var[100];
    Contacto lista_contactos[100];

    Contacto contacto1;
    contacto1.nombre = "Iker";
    contacto1.numero = "12356863";
    contacto1.fregistro.dia = 10;
    contacto1.fregistro.mes = 10;
    contacto1.fregistro.anio = 2023;

    imprimeContacto(contacto1);
    

    
    return 0;
}
