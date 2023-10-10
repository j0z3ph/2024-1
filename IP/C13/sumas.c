/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Otro ejemplo
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int sumas(int n)
{
    static int suma = 0;
    static int i = 1;
    if (i <= n)
    {
        suma += i;
        i++;
        sumas(n);
    }
    return suma;
}

int main(int argc, char const *argv[])
{
    printf("%i\n", sumas(5));
    return 0;
}
