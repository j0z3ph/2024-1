/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa.
 * @version 0.1
 * @date 2023-09-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    string nombre;
    cout << "Usuario, escriba su nombre o lo pico >:| ";
    getline(cin, nombre);
    cout << "Ahora, escribe tu edad: ";
    cin >> edad;

    cout << "Hola " << nombre << ", tu edad es de " << edad << endl;
    return 0;
}
