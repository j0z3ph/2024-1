/**
 * @file factorial.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula factoriales
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
    int n = 0;
    int contador = 0;
    int factorial = 1;

    cout << "Usuario, proporcione n: ";
    cin >> n;
    contador = n;

    for (;;)
    {
        if (contador < 1)
            break;
        factorial *= contador;
        contador--;
    }

    cout << "El factorial es: " << factorial << endl;
    return 0;
}
