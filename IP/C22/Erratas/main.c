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
#include "matrix.h"

int main(int argc, char const *argv[])
{
    int filas = 6, columnas = 3;
    int **matrix = Matrix(filas, columnas);

    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            matrix[f][c] = f + c;
        }
    }

    Imprime(matrix, filas, columnas);

    Destruye(matrix, filas);

    return 0;
}
