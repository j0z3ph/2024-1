/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que utiliza burbuja para ordenar
 * un arreglo
 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

/**
 * @brief Imprime un arreglo de tamanio N
 * 
 * @param arr El arreglo.
 */
void imprimir(int arr[N])
{
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int arr[N];
    int aux = 0;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % N;
    }

    imprimir(arr);

    for (int f = 0; f < N - 1; f++)
    {
        for (int c = 0; c < N - (f + 1); c++)
        {
            if (arr[c] > arr[c + 1])
            {
                aux = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = aux;
            }
        }
    }

    imprimir(arr);

    return 0;
}
