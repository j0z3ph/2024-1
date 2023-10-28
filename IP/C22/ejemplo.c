#include<stdio.h>
//Definiciones
void Ejemplo(int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%i ", i + j);
        }
        printf("\n");
    }
}