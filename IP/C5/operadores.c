/**
 * @file operadores.c
 * @author Jose Luis (jlcruz@ipn.mx)
 * @brief Ejemplos de operadores
 * @version 0.1
 * @date 2023-09-11
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int paroimpar = 0;
    printf("Usuario, dame un numero o te pico: ");
    scanf("%i", &paroimpar);

    printf("El numero %i es %s.\n", paroimpar, ((paroimpar & 1) == 0) ? "PAR" : "IMPAR");

    return 0;
}
