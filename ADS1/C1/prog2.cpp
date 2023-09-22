/**
 * @file prog2.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Operadores
 * @version 0.1
 * @date 2023-09-21
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Usuario, escribe un numero: ";
    cin >> numero;

    cout << "El numero es " << ((numero & 1) == 1 ? "IMPAR" : "PAR") << endl;

    return 0;
}
