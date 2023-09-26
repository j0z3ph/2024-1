/**
 * @file factorial.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula el factorial
 * de un numero n.
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
    int cont = 0;
    unsigned long fact = 1;

    cout << "Usuario, escriba un numero entero: ";
    cin >> n;

    if (n == 0)
        // Por definicion
        cout << "El factorial es 1" << endl;
    else if (n < 0)
        cout << ">:| es neta?" << endl;
    else
    {
        for (cont = n; cont >= 1; cont--)
            fact *= cont;

        cout << "El factorial de " << n << " es " << fact << endl;
    }

    return 0;
}
