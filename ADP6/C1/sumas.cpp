/**
 * @file sumas.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Otro ejemplo de operadores y ciclos
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
    int numero = 0;
    int suma = 0;

    cout << "Usuario, ingrese un numero entero: ";
    cin >> numero;

    while (numero != 0)
    {
        suma += (numero % 10);
        numero /= 10;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
