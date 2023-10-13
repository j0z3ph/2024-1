/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de constructor
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <list>

using namespace std;

class Contacto
{
private:
    string nombre;
    string numero;

public:
    Contacto(string name, string number)
    {
        nombre = name;
        numero = number;
    }

    int suma(int a, int b)
    {
        return a + b;
    }
    double suma(double a, double b)
    {
        return a + b;
    }

    string to_string()
    {
        return "Nombre: " + nombre + " - Numero: " + numero + "\n";
    }
    string to_string(string msg)
    {
        return "Nombre: " + nombre + " - Numero: " + numero + " - Mensaje: " + msg + "\n";
    }
};

int main()
{
    list<Contacto> lista_contactos;
    Contacto tmp("Datos", "Mas Datos");

    lista_contactos.push_back(tmp);
    lista_contactos.push_back(Contacto("Jose Luis", "1254653"));
    lista_contactos.push_back(Contacto("Josue Jareth", "1254653"));
    lista_contactos.push_back(Contacto("Alexis Atzin", "1254653"));
    lista_contactos.push_back(Contacto("Ericka", "1254653"));

    for (auto contacto : lista_contactos)
    {
        cout << contacto.suma(5.4, 6.6) << endl;
    }

    return 0;
}
