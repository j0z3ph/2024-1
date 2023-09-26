/**
 * @file promedios.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula promedios
 * @version 0.1
 * @date 2023-09-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int numValores = 0;
    int suma = 0;
    int tmp = 0;
    double promedio = 0.0;

    cout << "Usuario, cuantos numeros necesitas? ";
    cin >> numValores;

    for (int i = 0; i < numValores; i++)
    {
        cout << "Dato " << i + 1 << ": ";
        cin >> tmp;
        suma += tmp; // suma = suma + tmp;
    }

    promedio = (double)suma / (double)numValores;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
