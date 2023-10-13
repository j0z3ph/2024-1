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
    Fecha() {}
    Fecha(int dia, int mes, int anio)
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
    Fecha fregistro;
    int var;

public:
    // Constructor
    Contacto(string name, string numero, int dia, int mes, int anio)
    {
        nombre = name;
        this->numero = numero;
        fregistro = Fecha(dia, mes, anio);
    }

    // Destructor
    ~Contacto()
    {
        cout << "Me muero" << endl;
    }

    int getVar()
    {
        return var;
    }

    string getFechaRegistro()
    {
        return fregistro.getFecha();
    }

    string getNombre()
    {
        return this->nombre;
    }

    string getNumero()
    {
        return numero;
    }

    void llamar()
    {
        cout << "Llamando a " << nombre << "...";
    }
};

int main()
{
    Contacto contacto1("Jose Luis", "27634", 6, 6, 666);

    // contacto1.setNombre("Jose Luis");
    // contacto1.setNumero("123456");
    // contacto1.setFechaRegistro(6, 6, 666);

    cout << contacto1.getVar() << endl;
    cout << contacto1.getFechaRegistro() << endl;

    contacto1.llamar();

    return 0;
}
