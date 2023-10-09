/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de funciones
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int suma(int a, int b, int c=0, int d=0) {
    return a + b + c + d;
}

double suma(double a, double b) {
    return a + b;
}

double suma(double a, int b) {
    return a + (double)b;
}

double suma(int a, double b) {
    return (double)a + b;
}

int main(int argc, char const *argv[])
{
    cout << suma(6,7) << endl;
    return 0;
}
