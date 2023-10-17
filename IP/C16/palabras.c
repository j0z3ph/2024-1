/**
 * @file palabras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char cadena[100];
    int espacios = 0;
    bool espacioAnterior = false;

    printf("Usuario, ingrese una cadena:\n");
    fgets(cadena, 100, stdin);

    for (int i = 0; i < strlen(cadena); i++)
    {
        if (cadena[i] == ' ')
        {
            if (!espacioAnterior)
            {
                espacios++;
                espacioAnterior = true;
            }
        }
        else
        {
            espacioAnterior = false;
        }
    }

    printf("Hay %i palabras", espacios + 1);

    return 0;
}
