/**
 * @file ejemplo.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-31
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string n, int e) : nombre(n), edad(e) {}

    string Nombre() { return nombre; }
    int Edad() { return edad; }
};

int main()
{
    vector<Persona> lista;
    ofstream archivo("personas.txt", ios::out);

    lista.push_back(Persona("Jesus Nieves", 20));
    lista.push_back(Persona("Isaac Hernandez", 19));
    lista.push_back(Persona("Iker Bueno", 19));

    archivo << lista.size() << endl;

    for (int i = 0; i < lista.size(); i++)
    {
        archivo << lista[i].Nombre() << endl;
        archivo << lista[i].Edad() << endl;
    }

    archivo.close();
    
    return 0;
}
