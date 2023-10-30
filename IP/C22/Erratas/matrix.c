/**
 * @file matrix.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Crea una matriz dinamica de filas x columnas
 * 
 * @param filas Numero de filas
 * @param columnas Numero de columnas
 * @return int** Puntero a la matriz creada
 */
int **Matrix(int filas, int columnas)
{
    int **matrix;
    matrix = (int **)malloc(filas * sizeof(int *));

    for (int i = 0; i < filas; i++)
    {
        // matrix[i] = (int *)malloc(columnas * sizeof(int));
        *(matrix + i) = (int *)malloc(columnas * sizeof(int));
    }
    return matrix;
}

/**
 * @brief Imprime una matrix de filas x columnas
 * 
 * @param matrix Puntero a la matriz
 * @param filas Numero de Filas
 * @param columnas Numero de Columnas
 */
void Imprime(int **matrix, int filas, int columnas)
{
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            printf("%i ", matrix[f][c]);
        }
        printf("\n");
    }
}

/**
 * @brief Libera la memoria de una matriz
 * 
 * @param matrix Puntero a la matriz
 * @param filas Numero de filas
 */
void Destruye(int **matrix, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        free(*(matrix + i));
    }
    free(matrix);
}
