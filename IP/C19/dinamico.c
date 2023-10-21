/**
 * @file dinamico.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

void nada()
{
    int *a = (int*)malloc(sizeof(int));
    *a = 10;
}

int main()
{
    for (;;)
    {
        nada();
    }

    return 0;
}
