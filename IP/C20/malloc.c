/**
 * @file malloc.c
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

int main()
{
    //int arrg[1000000000];
    int *arrg = (int *)malloc(10 * sizeof(int));
    if(arrg == NULL) {
        printf("No fue posible asignar la memoria.\n");
        exit(1);
    }

    /*for (int i = 0; i < 10; i++)
    {
        arrg[i] = i + 1;
    }*/

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", *(arrg + i));
    }
    return 0;
}
