/**
 * @file ifelse.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Ejemplo de If else If
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

    cout << "Usuario, escribe tu edad por favor :D ";
    cin >> edad;

    if (edad > 0 && edad <= 10)
    {
        cout << "Hola niño bonito" << endl;
    }
    else if (edad > 10 && edad <= 18)
    {
        cout << "Hola niño rata" << endl;
    }
    else if (edad > 18 && edad < 30)
    {
        cout << "No te sabes la de chambiar?" << endl;
    }
    else
    {
        cout << "La tierra te reclama" << endl;
    }

    return 0;
}
