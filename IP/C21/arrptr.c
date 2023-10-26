/**
 * @file arrptr.c
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
    int *arrptr[5];
    for (int i = 0; i < 5; i++)
    {
        arrptr[i] = (int *)malloc(sizeof(int));
        *arrptr[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%p - %i \n", arrptr[i], *arrptr[i]);
    }
    

    return 0;
}
