/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int mult(int a, int b, int c = 1, int d = 1) {
    return a * b * c * d;
}

double mult(double a, double b) {
    return a * b;
}

double mult(int a, double b) {
    return (double)a * b;
}

double mult(double a, int b) {
    return a * (double)b;
}
int main()
{
    cout<< mult(5,6,6,3) << endl;
    return 0;
}
