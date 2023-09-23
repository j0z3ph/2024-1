/**
 * @file switch.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Ejemplo de switch
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
    int opcion = 0;
    cout << "Menu" << endl
         << "   1. Suma" << endl
         << "   2. Resta" << endl
         << "   3. Multiplicacion" << endl
         << "   4. Division" << endl
         << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "SUMA" << endl;
        break;
    case 2:
        cout << "RESTA" << endl;
        break;
    case 3:
        cout << "MULTI" << endl;
        break;
    case 4:
        cout << "DIVI" << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    return 0;
}
