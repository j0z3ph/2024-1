/**
 * @file sumas.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario un numero
 * entero y devuelve la suma de sus digitos.
 * @version 0.1
 * @date 2023-09-22
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

    cout << "Querido usuario, proporcione, si no es mucha molestia, un numero: ";
    cin >> numero;

    for (; numero != 0;)
    {
        suma += (numero % 10);
        numero /= 10;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
