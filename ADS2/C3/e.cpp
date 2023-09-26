/**
 * @file e.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que calcula E
 * @version 0.1
 * @date 2023-09-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#define ERROR -1

using namespace std;

// Declaraciones de funciones

/**
 * @brief Calcula el factorial de un numero n
 *
 * @param n Numero del que se desea el factorial
 * @return double Factorial
 */
double factorial(int n);

int main()
{
    double funcion = 0.0;

    for (int n = 0; n < 20; n++)
        funcion += (1.0 / factorial(n));

    cout << "Resultado: " << funcion;

    return 0;
}

// Definiciones de funciones

double factorial(int n)
{
    double fact = 1;
    if (n == 0)
        return 1;
    else if (n < 0)
        return ERROR;
    else
        for (int cont = n; cont >= 1; cont--)
            fact *= cont;

    return fact;
}
