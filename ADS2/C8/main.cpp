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
#include <iostream>
#include <string>

using namespace std;

typedef int entero;

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
        return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
    }
};

class Contacto
{
private:
    string nombre;
    string numero;
    Fecha fecha_registro;
    int variable;

public:
    Contacto() {
        variable = 10;
    }
     void setVar(int v) {
        variable = v;
     }

     int getVar() {
        return variable;
     }

    void setFecha(int dia, int mes, int anio)
    {
        fecha_registro.setFecha(dia, mes, anio);
    }

    string getFecha()
    {
        return fecha_registro.getFecha();
    }

    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    string getNombre()
    {
        return this->nombre;
    }

    void setNumero(string number)
    {
        nombre = number;
    }

    string getNumero()
    {
        return numero;
    }

    void llamar()
    {
        /*int variable;
        {
            int maslocal;
            variable = 8;
        }
        maslocal = 1;*/
        cout << "Llamando a " << nombre << "...";
    }
};

int main()
{
    Contacto contacto;

    contacto.setNombre("Josue Jareth");
    contacto.setNumero("1254364");
    contacto.setFecha(6, 6, 666);

    cout << contacto.getVar();

    return 0;
}
