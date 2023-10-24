/**
 * @file realloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

void nada()
{
    int *ptr = (int *)malloc(10000000000 * sizeof(int));
    free(ptr);
}

int main()
{
    // int arrg[1000000000];
    int *arrg = (int *)calloc(10, sizeof(int));
    if (arrg == NULL)
    {
        printf("No fue posible asignar la memoria.\n");
        exit(1);
    }
    nada();

    printf("%p\n", arrg);

    getc(stdin);
    for (int i = 0; i < 10; i++)
    {
        arrg[i] = i + 1;
    }

    arrg = (int *)realloc(arrg, 20000 * sizeof(int));
    if (arrg == NULL)
    {
        printf("No fue posible asignar la memoria.\n");
        exit(1);
    }
    printf("%p\n", arrg);

    for (int i = 0; i < 20; i++)
    {
        printf("%i ", *(arrg + i));
    }

    free(arrg);
    return 0;
}
