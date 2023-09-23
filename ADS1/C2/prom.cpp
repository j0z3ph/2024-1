/**
 * @file prom.cpp
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Programa 1
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
    int suma = 0, numero = 0, contador = 0;
    double promedio = 0.0;

    do
    {
        cout << "Escriba un numero o 0 para terminar: ";
        cin >> numero;
        suma += numero;
        contador++;
    } while (numero != 0);

    promedio = (double)suma / (double)(contador - 1);

    cout << "El promedio es: " << promedio << endl;
    return 0;
}
