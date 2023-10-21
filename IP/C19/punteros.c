/**
 * @file punteros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int* suma(int *a, int *b)
{
    int temp = *a + *b;
    int *ptr = &temp;
    return &temp;
}

int main(int argc, char const *argv[])
{
    int var1 = 4, var2 = 5;
    printf("%i", *(suma(&var1, &var2)));

    return 0;
}
