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
    int arrg[10];
    int * apuntador;
    apuntador = arrg;
    arrg[0] = 12;
    arrg[1] = 25;

    printf("%p - %i\n%p - %i\n" , arrg, *apuntador, arrg + 1, *(apuntador+1));
    printf("%p - %i\n%p - %i\n" , arrg + 0, apuntador[0], arrg + 1, apuntador[1]);
    return 0;
}
