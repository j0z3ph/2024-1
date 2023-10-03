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


void pause() {
    string basura;
    cout << "Presione enter para continuar...";
    getline(cin, basura);
}

int main(int argc, char const *argv[])
{
    string nombre;
    getline(cin, nombre);
    cout << nombre;
    int a = 6, b = 7, c;
    multiplicacion(&a, &b, &c);
    cout << c << endl;
    pause();
    return 0;
}
