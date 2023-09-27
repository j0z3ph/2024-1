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
 * @brief Calcula el factorial de n
 *
 * @param n Un numero
 * @return double n!
 */
double factorial(int n);

int main()
{
    double f = 0.0;

    for (int n = 0; n < 15; n++)
        f += (1.0 / factorial(n));

    cout << f << endl;
    /*#ifndef _WIN32
    system("clear");
    #else
    system("cls");
    #endif*/
    return 0;
}

// Definicion de funcion

double factorial(int n)
{
    int count = 1;
    double fact = 1.0;
    if (n == 0)
        return 1.0;
    else if (n < 0)
        return ERROR;
    else
        for (; count <= n;)
        {
            fact *= count;
            count++;
        }
    return fact;
}