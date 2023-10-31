/**
 * @file ascii.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-30
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cadena = "HolI Canoli";
    int *arr = (int *)calloc(256, sizeof(int));
    for (int i = 0; i < 12; i++)
    {
        if (cadena[i] >= 65 && cadena[i] <= 90)
            arr[cadena[i] + 32]++;
        else
            arr[cadena[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        // printf("%03i - %i\n", i ,arr[i]);
        if (arr[i] != 0 && i != '\0')
        {
            printf("%c - %i\n", i, arr[i]);
        }
    }

    return 0;
}
