/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos de funciones
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "tools.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 6, b = 7, c;
    multiplicacion(&a, &b, &c);
    cout << c << endl;
    return 0;
}
