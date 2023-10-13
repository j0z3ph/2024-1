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
#include <vector>

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

    string to_string()
    {
        return "Nombre: " + nombre + " - Numero: " + numero + "\n";
    }
};

int main()
{
    vector<Contacto> lista_contactos;
    Contacto tmp("Datos", "Mas Datos");

    lista_contactos.push_back(tmp);
    lista_contactos.push_back(Contacto("Jose Luis", "1254653"));
    lista_contactos.push_back(Contacto("Josue Jareth", "1254653"));
    lista_contactos.push_back(Contacto("Alexis Atzin", "1254653"));
    lista_contactos.push_back(Contacto("Ericka", "1254653"));
    
    for (int i = 0; i < lista_contactos.size(); i++)
    {
        cout << lista_contactos[i].to_string();
    }
    

    return 0;
}
