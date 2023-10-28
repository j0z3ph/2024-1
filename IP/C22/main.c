/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "ejemplo.h"

int main(int argc, char const *argv[])
{
    Ejemplo(100,10);

    return 0;
    int filas = 6, columnas = 3;
    int **matrix;
    matrix = (int **)malloc(filas * sizeof(int *));

    for (int i = 0; i < filas; i++)
    {
        matrix[i] = (int *)malloc(columnas * sizeof(int));
        //*(matrix + i) = (int *)malloc(columnas * sizeof(int));
    }

    for (int f = 0; f < 6; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matrix[f][c] = f + c;
        }
    }

    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            printf("%i ", matrix[f][c]);
        }
        printf("\n");
    }

    return 0;
}
