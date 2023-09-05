/**
 * @file entradas.c
 * @author Yo Merengues (jlcruz@ipn.mx)
 * @brief Ejemplos de entradas
 * @version 0.1
 * @date 2023-09-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
int main()
{
    char cadena[5];
    // putc(getc(stdin), stdout);
    // putchar(getchar());
    // gets(cadena); // ¡¡¡¡¡ INSEGURA !!!!!!
    // puts(cadena);
     fgets(cadena,5, stdin);
     puts(cadena);
    //scanf("%s", cadena);
    //printf("%s", cadena);

    return 0;
}
