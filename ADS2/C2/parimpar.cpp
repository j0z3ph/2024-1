/**
 * @file parimpar.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Programa que solicita al usuario
 * un entero y determina si es Par o Impar
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

    cout << "Usuario, por favor, escribe un entero :D ";
    cin >> numero;

    cout << "El numero es " << ((numero & 1) == 0 ? "PAR" : "IMPAR")
         << endl;
    return 0;
}
