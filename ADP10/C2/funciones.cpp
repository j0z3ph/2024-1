/**
 * @file funciones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de funciones
 * @version 0.1
 * @date 2023-10-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

// Declaracion de funciones

/**
 * @brief Suma dos enteros.
 * 
 * @param a Primer entero
 * @param b Segundo entero
 * @return int La suma
 */
int suma(int a, int b, int c = 0, int d = 0);

double suma(double a, double b);

int main()
{
    cout << suma(5,6,7,10) << endl;
    
    return 0;
}

// Definicion de funciones

int suma(int a, int b, int c, int d) {
    return a + b + c + d;
}

double suma(double a, double b) {
    return a + b;
}

