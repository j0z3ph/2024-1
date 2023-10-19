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
#include<stdio.h>

int main()
{
    int var = 10;
    int * ptr;

    ptr = &var;

    *ptr = 25;

    printf("%i - %p - %p\n", var, &var, ptr);
    return 0;
}
