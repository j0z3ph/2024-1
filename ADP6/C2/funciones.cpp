/**
 * @file funciones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Archivo de definicion
 * @version 0.1
 * @date 2023-09-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include"funciones.hpp"

// Definicion
double factorial(int n)
{
    
    double fact = 1.0;
    if (n == 0)
        return 1.0;
    if (n < 0)
        return ERROR;

    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}