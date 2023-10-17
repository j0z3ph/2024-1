/**
 * @file strcpy.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    char destino[100];
    char origen[] = "Cadena a copiar";
    int i = 0;

    for (; origen[i] != 0; i++)
    {
        destino[i] = origen[i];
    }
    destino[i] = '\0';

    printf("%s\n%s", origen, destino);

    return 0;
}
