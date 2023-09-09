/**
 * @file dosnumeros.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Programa que pide dos numeros y devuelve
 * la suma
 * @version 0.1
 * @date 2023-09-08
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    int resultado = 0;

    printf("Usuario, proporcione el primer valor: ");
    scanf("%i", &valor1);

    printf("Usuario, proporcione el segundo valor: ");
    scanf("%i", &valor2);

    resultado = valor1 + valor2;

    printf("La suma de %d y %i es %d.\n", valor1, valor2, resultado);

    return 0;
}
