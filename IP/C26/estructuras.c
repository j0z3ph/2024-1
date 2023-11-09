/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

struct Estructura {
    char c;
    int i;
    double d;
};

union Union {
    char c;
    int i;
    double d;
};

int main()
{
    struct Estructura e;
    union Union u;

    e.c = 'A';
    e.i = 66;
    e.d = 66.6;

    u.c = 'A';
    u.i = 66;
    u.d = 66.6;



    printf("%lu, %lu\n", sizeof(struct Estructura), sizeof(union Union));
    return 0;
}
