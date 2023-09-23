/**
 * @file if.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief IF
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
    int edad = 0;
    cout << "Usuario, ingresa tu edad: ";
    cin >> edad;

    if (edad > 0 && edad <= 10)
    {
        cout << "Hola chiquitin" << endl;
    }
    else if (edad > 10 && edad < 18)
    {
        cout << "Largo de aqui niño rata" << endl;
    }
    else if (edad >= 18 && edad < 30)
    {
        cout << "No te sabes la de chambiar?" << endl;
    }
    else
    {
        cout << "La tierra te reclama" << endl;
    }
    return 0;
}
