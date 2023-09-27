/**
 * @file prog.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer programa en C++
 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    string nombre;
    float estatura;

    cout << "Usuario, escriba su nombre: ";
    getline(cin, nombre);
    cout << "Ahora, escriba su estatura: ";
    cin >> estatura;

    cout << "Nombre: " << nombre << endl
         << "Estatura: " << estatura << endl;

    return 0;
}
