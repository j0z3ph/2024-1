/**
 * @file e.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Calcula el numero e
 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "funciones.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    double f = 0;

    for (int n = 0; n < 15; n++)
    {
        f += (1.0 / factorial(n));
    }

    cout << f << endl;

    return 0;
}


