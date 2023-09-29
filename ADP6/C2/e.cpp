/**
 * @file e.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula E
 * @version 0.1
 * @date 2023-09-28
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "funciones.hpp"

using namespace std;

int main()
{
    double f = 0.0;

    for (int n = 0; n <= 10; n++)
    {
        f += (1.0 / factorial(n));
    }

    cout << f << endl;

    return 0;
}
