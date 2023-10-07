/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo
 * @version 0.1
 * @date 2023-10-06
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "utils.hpp"

using namespace std;

int main()
{
    int opcion = 0;

    do
    {
        clinex();
        cout << "Menu\n1. Opcion 1\n2. Opcion 2\n3. Salir\nSelecciones una: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Opcion 1" << endl;
            pausa();
            break;
        case 2:
            cout << "Opcion 2" << endl;
            pausa();
            break;
        case 3:
            cout << "Adioooos" << endl;
            pausa();
            break;
        default:
            cout << "Eres tonto? >:|" << endl;
            pausa();
            break;
        }
    } while (opcion != 3);

    return 0;
}

