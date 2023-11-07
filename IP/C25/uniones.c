/**
 * @file uniones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

struct Punto {
    int x;
    int y;
    double z;
};

union Punto2
{
    int x;
    int y;
    double z;
    
};


int main()
{
    struct Punto p;
    union Punto2 p2;

    p2.x = 1;
    p2.y = 2;
    p2.z = 4.5;
    p2.x = 999999999;
    printf("%i, %i, %lf\n", p2.x, p2.y, p2.z);


    printf("%p - %lu\n", &p2, sizeof(p2));
    
    return 0;
}
