/**
 * @file arrgs.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de arreglo
 * @version 0.1
 * @date 2023-09-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int n = 0;
    int suma = 0;
    double promedio = 0.0;

    printf("Proporcione n: ");
    scanf("%i", &n);

    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        printf("Valor %i: ", i + 1);
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < n; i++)
    {
        suma += arreglo[i];
    }

    promedio = (double)suma / (double)n;

    printf("El promedio es: %.2lf\n", promedio);
    return 0;
}
