/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-11-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Escribe
    ofstream archivo;
    int valor = 10;
    archivo.open("archivo.txt", ios::out);
    if (!archivo.is_open())
    {
        cout << "Ups, error";
        exit(1);
    }

    archivo << "Hola Mundo" << endl;
    archivo.write((char *)&valor, sizeof(int));

    archivo.close();

    // Lee
    ifstream alectura;
    alectura.open("archivo.txt", ios::in);
    if (!alectura.is_open())
    {
        cout << "Ups, error";
        exit(1);
    }
    string str;
    int entero;
    while (!alectura.eof())
    {
        getline(alectura, str);
        alectura.read((char *)&entero, sizeof(int));
        cout << str << endl;
        cout << entero;
    }

    alectura.close();

    return 0;
}
