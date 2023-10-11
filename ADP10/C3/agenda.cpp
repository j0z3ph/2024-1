/**
 * @file agenda.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo
 * @version 0.1
 * @date 2023-10-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

typedef int entero;

class Fecha {
    public:
    int dia;
    int mes;
    int anio;
};

class Contacto {
    public:
    string nombre;
    string numero;
    struct Fecha fregistro;
    void llamar() {
        cout << nombre << " llamando...";
    }
};



int main()
{
    entero n = 10;
    Contacto cont1;
    cont1.nombre = "Mateo";
    cont1.numero = "1234567";
    cont1.fregistro.dia = 11;
    cont1.fregistro.mes = 10;
    cont1.fregistro.anio = 2023;
    cont1.llamar();
    
    return 0;
}
