/**
 * @file main.c
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
    int *arr = (int *)calloc(10, sizeof(int));
    arr[0] = 666;
    printf("%p\n", arr);
    arr = (int *)realloc(arr, 20000000 * sizeof(int));
    printf("%p - %i\n", arr, arr[0]);

    return 0;
}
