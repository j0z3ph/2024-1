/**
 * @file prog.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Mi primer programa C++
 * @version 0.1
 * @date 2023-09-21
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

// #define PI 3.1416
// const float PI = 3.1416;

using namespace std;

int main()
{
    string nombre;
    int edad;
    float altura;

    cout << "Usuario, escriba su nombre: ";
    getline(cin, nombre);

    cout << "Usuario, ahora escriba su edad: ";
    cin >> edad;

    cout << "Usuario, por ultimo escriba su altura: ";
    cin >> altura;

    // Imprimo en pantalla
    cout << "Nombre: " << nombre << endl
         << "Edad: " << edad << endl
         << "Altura: " << altura << endl;

    return 0;
}
