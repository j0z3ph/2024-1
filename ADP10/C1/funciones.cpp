#include "funciones.hpp"

double factorial(int n)
{
    double fact = 1.0;
    if (n == 0)
    {
        // Por definicion (lo dijo diosito)
        return 1.0;
    }
    if (n < 0)
    {
        return ERROR;
    }
    for (int i = n; i > 0; i--)
    {
        fact *= (double)i;
    }

    return fact;
}