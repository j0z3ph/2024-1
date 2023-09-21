/**
 * @file ciclos.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Suma de digitos
 * @version 0.1
 * @date 2023-09-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int valor = 0, suma = 0, division = 0;

    printf("Usuario, dame un valor >:| ");
    scanf("%d", &valor);

    division = valor;
    while (division != 0)
    {
        suma += (division % 10);
        division /= 10;
    }

    printf("La suma es: %i\n", suma);

    return 0;
}
