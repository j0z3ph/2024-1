/**
 * @file factorial.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de recursion 2
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

size_t factorial(size_t n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    size_t numero = 20;
    printf("%ld\n", factorial(numero));
    return 0;
}
