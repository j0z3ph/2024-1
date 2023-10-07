/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplosde funciones
 * @version 0.1
 * @date 2023-10-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include "utils.hpp"

using namespace std;

int suma(int a = 0, int b = 0)
{
    return a + b;
}

double suma(double a, double b)
{
    return a + b;
}

double suma(double a, int b)
{
    return a + (double)b;
}

double suma(int a, double b)
{
    return (double)a + b;
}

int main(int argc, char const *argv[])
{
    int opcion;
    cout << suma();

    return 0;
    do
    {
        limpia();
        cout << "Menu\n1. Opcion uno\n2. Opcion dos\n3. Salir\nSeleccione una: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Opcion uno" << endl;
            pausar();
            break;
        case 2:
            cout << "Opcion dos" << endl;
            pausar();
            break;
        case 3:
            cout << "Adiooooooossssss" << endl;
            pausar();
            break;
        default:
            cout << "Eres tonto? >:|" << endl;
            pausar();
            break;
        }
    } while (opcion != 3);
    return 0;
}
