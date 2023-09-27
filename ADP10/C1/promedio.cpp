/**
 * @file promedio.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que pide al usuario n
 * numeros y devuelve el promedio
 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int suma = 0;
    int tmp = 0;
    double promedio = 0.0;
    cout << "Usuario, escribe n o te pico >:| ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> tmp;
        suma += tmp;
    }
    promedio = (double)suma / (double)n;

    cout << "El promedio es: " << promedio;

    return 0;
}
