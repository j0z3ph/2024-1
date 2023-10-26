/**
 * @file matriz.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat;
    mat = (int **)malloc(3 * sizeof(int *));
    *mat = (int *)malloc(3 * sizeof(int));
    *(mat + 1) = (int *)malloc(3 * sizeof(int));
    *(mat + 2) = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);

    return 0;
}
