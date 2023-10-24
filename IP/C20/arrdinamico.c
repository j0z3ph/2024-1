/**
 * @file arrdinamico.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *arr = (int *)calloc(1, sizeof(int));
    int cont = 0;
    int dato = -1;
    while (dato != 0)
    {
        printf("Escriba un numero o 0 para terminar: ");
        scanf("%d", &dato);
        *(arr + cont) = dato;
        cont++;
        arr = realloc(arr, sizeof(int) * (cont + 1));
    }

    for (int i = 0; i < cont; i++)
    {
        printf("%i ", arr[i]);
    }

    return 0;
}
