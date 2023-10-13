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
    Contacto(string nombre, string numero, int dia, int mes, int anio)
    {
        this->nombre = nombre;
        this->numero = numero;
        this->fregistro.setFecha(dia, mes, anio);
    }

    ~Contacto()
    {
        cout << "Ya me mori" << endl;
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
        /*int var;
        {
            int var2;
            var =10;
        }
        var2 = 8;*/
        cout << nombre << " llamando...";
    }
};

int main()
{

    Contacto cont1("Jose Luis", "2156261", 6, 6, 666);

    // cont1.setNombre("Mateo");
    // cont1.setNumero("765763");
    // cont1.setFechaRegistro(6, 6, 666);

    cout << cont1.getFechaRegistro();

    return 0;
}
