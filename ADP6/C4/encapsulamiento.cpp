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
#include <string>

using namespace std;

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    void setFecha(int dia, int mes, int anio)
    {
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }

    string getFecha()
    {
        string var = to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
        return var;
    }
};

class Contacto
{
private:
    Fecha nacimiento;
    string nombre;
    string numero;

public:
    void setFecha(int dia, int mes, int anio)
    {
        nacimiento.setFecha(dia, mes, anio);
    }

    string getFecha()
    {
        return nacimiento.getFecha();
    }

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    string toString()
    {
        int variable;
        int maslocal = 2;
        {
            // int maslocal;
            // maslocal = 1;
            cout << maslocal;
            variable = 1;
        }
        cout << maslocal;
        return "Nombre: " + nombre + "\nNumero: " + numero;
    }
};

int main()
{

    Contacto julio;
    julio.setNombre("Julio");
    julio.setFecha(6, 6, 666);
    cout << julio.getNombre() << endl;
    cout << julio.getFecha() << endl;

    return 0;
}
