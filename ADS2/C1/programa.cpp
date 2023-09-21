/**
 * @file programa.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Mi primer programa
 * @version 0.1
 * @date 2023-09-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    string nombre;
    int edad;
    float estatura;

    cout << "Usuario, escriba su nombre: ";
    getline(cin, nombre);

    cout << "Usuario, ahora ingresa tu edad: ";
    cin >> edad;

    cout << "Usuario, por ultimo dame tu estatura: ";
    cin >> estatura;

    // Imprimimos en pantalla
    cout << "Nombre: " << nombre << endl << 
    "Edad: " << edad << endl << 
    "Estatura: " << estatura << endl;
    
    return 0;
}
