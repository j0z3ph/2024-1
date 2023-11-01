/**
 * @file lectura.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-31
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo;
    archivo.open("archivito", ios::in);
    if (!archivo.is_open())
    {
        cout << "Upsss";
        return 1;
    }

    while (!archivo.eof())
    {
        string linea;
        getline(archivo, linea);
        cout << linea;
    }

    archivo.close();
    return 0;
}
