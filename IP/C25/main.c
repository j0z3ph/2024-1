/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int* resta(int *a, int *b){
    int *dinamico = (int *)malloc(sizeof(int));
    *dinamico = *a - *b;
    return dinamico;
}

int main()
{
    int var1 = 6, var2 = 10;
    int *res;

    res = resta(&var1, &var2);
    printf("%i\n", *res);
    
    return 0;
}
