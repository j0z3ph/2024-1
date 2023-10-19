/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *punterito = &m[0][0];
    // Aritmetica de punteros
    *(*(m + 1) + 1) = 18;

    *(*(m + 2) + 1) = 77;

    for (int i = 0; i < 9; i++)
    {
        printf("%i ", *(punterito + i));
        if ((i + 1) % 3 == 0)
            printf("\n");
    }
    *(punterito - 1010) = 10;

    printf("%i", *(punterito - 1010));

    return 0;
}
