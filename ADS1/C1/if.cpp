/**
 * @file if.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Ejemplo de IF
 * @version 0.1
 * @date 2023-09-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "Usuario, escribe tu edad o te pico >:| ";
    cin >> edad;

    if(edad >= 18) {
        cout << "Bienvenido Viejon" << endl;
    } else {
        cout << "Largo de aqui niño rata >:c" << endl;
    }

    return 0;
}
