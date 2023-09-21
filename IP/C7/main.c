/**
 * @file main.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Promedio
 * @version 0.1
 * @date 2023-09-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    float entrada = 0.1, suma = 0.0, promedio = 0.0;
    int n = 0;

    for (n = 0; entrada != 0.0; n++)
    {
        printf("Queridisimo usuario <3, escribe un valor o 0 para terminar: ");
        scanf("%f", &entrada);

        suma += entrada; // suma = suma + entradas
    }
    promedio = suma / (n - 1);

    printf("El promedio es %.2f.\n", promedio);

    return 0;
}
