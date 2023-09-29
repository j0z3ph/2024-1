/**
 * @file sobrecarga.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-09-28
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int resta(int a, int b = 0, int c = 0, int d = 0)
{
    return a - b - c - d;
}

int suma(int a, int b)
{
    return a + b;
}

double suma(double a, int b)
{
    return a + (double)b;
}

double suma(int a, double b)
{
    return (double)a + b;
}

double suma(double a, double b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int res;
    double res2;

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    cout << resta(4, 3, 2);

    return 0;
}
