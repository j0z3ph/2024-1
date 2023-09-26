/**
 * @file funciones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

/**
 * @brief Suma dos numeros
 * 
 * @param valorA Primer numero
 * @param valorB Segundo numero
 * @return int La suma
 */
int suma (int valorA, int valorB);

int main()
{
    cout << suma(5, 1);
    return 0;
}

int suma (int valorA, int valorB) {
    return valorA + valorB;
}