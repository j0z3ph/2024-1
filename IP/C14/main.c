/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo
 * @version 0.1
 * @date 2023-10-11
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

void contador(int, int);

float div(int, int);

int main()
{
    int n = 0;
    printf("Ingrese un numero: ");
    scanf("%i", &n);

    printf("%f\n", div(5,2));

    contador(n, 0);

    return 0;
}

float div(int a, int b) {
    return (float)a/(float)b;
}

void contador(int n, int i)
{
    if (i <= n)
    {
        printf("%i ", i);
        contador(n, ++i);
    }
}
