/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer clase.
 * @version 0.1
 * @date 2023-10-10
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Fecha
{
public:
    int dia;
    int mes;
    int anio;
};

class Contacto
{
public:
    string nombre;
    string numero;
    Fecha nacimiento;
    string toString() {
        return "Nombre: " + nombre + "\nNumero: " + numero;
    }
};

int main()
{
    Contacto julio;
    julio.nombre = "Julio";
    julio.numero = "1234567890";
    julio.nacimiento.anio = 1666;
    julio.nacimiento.dia = 6;
    julio.nacimiento.mes = 6;

    cout << julio.toString();
    return 0;
}
