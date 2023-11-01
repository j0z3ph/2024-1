/**
 * @file main.cpp
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
    ofstream archivo;
    archivo.open("archivito", ios::out);

    if (!archivo.is_open())
    {
        cout << "Upssss";
        return 1;
    }
    archivo << "Hola Mundo\n";

    archivo.close();

    return 0;
}
