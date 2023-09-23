/**
 * @file ciclos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de ciclos
 * @version 0.1
 * @date 2023-09-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int numero = 1;
    for (; numero <= 10;)
    {
        printf("%i\n", numero);
        numero++;
    }

    return 0;
}
