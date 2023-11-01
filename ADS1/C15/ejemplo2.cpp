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
    ifstream archivo("personas.txt", ios::in);
    int cont;
    string temp;
    getline(archivo, temp);
    cont = stoi(temp);

    for (int i = 0; i < cont; i++)
    {
        string nombre;
        int edad;
        getline(archivo, nombre);
        getline(archivo, temp);
        edad = stoi(temp);
        lista.push_back(Persona(nombre, edad));
    }

    archivo.close();

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i].Nombre() << " - " << lista[i].Edad() << endl;
    }

    return 0;
}
