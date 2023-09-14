/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos de if
 * @version 0.1
 * @date 2023-09-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int edad = 0;

    printf("Querido usuario, escribe tu edad: ");
    scanf("%i", &edad);

    if (edad < 0)
    {
        printf(">:|");
    }
    else
    {

        if (edad >= 0 && edad <= 10)
        {
            printf("Hola Beibi");
        }
        else if (edad >= 11 && edad <= 18)
        {
            printf("Hola Secunene");
        }
        else if (edad >= 19 && edad <= 30)
        {
            printf("Hola Don");
        }
        else
        {
            printf("Hola Sugar");
        }
    }

    return 0;
}
