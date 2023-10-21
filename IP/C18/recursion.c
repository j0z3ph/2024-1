/**
 * @file recursion.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

void rellena(int *arreglo, int size, int i)
{
    if (i < size)
    {
        arreglo[i] = i + 1;
        i++;
        rellena(arreglo, size, i);
    }
}

void imprime(int *arr, int size)
{
    static int i = 0;
    if (i < size)
    {
        printf("%i ", arr[i]);
        i++;
        imprime(arr, size);
    }
}

int main()
{
    int num = 0;
    printf("Usuario, escriba un numero: ");
    scanf("%d", &num);

    int arr[num];
    rellena(arr, num, 0);

    imprime(arr, num);

    return 0;
}
