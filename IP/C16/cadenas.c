/**
 * @file cadenas.c
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

int main()
{
    char cadena[100];

    printf("Usuario, ingrese una cadena:\n");
    fgets(cadena, 100, stdin);

    for (int i = (int)strlen(cadena) - 1; i >= 0; i--)
    {
        putc(cadena[i], stdout);
    }

    return 0;
}
