/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de parametros
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}

void suma_ref(int *a, int *b, int *res)
{
    *res = *a + *b;
}

int main()
{
    int a = 5, b = 6, c;
    suma_ref(&a, &b, &c);
    printf("%p %p %p %i\n", &a, &b, &c, c);
    return 0;
}
