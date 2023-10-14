/**
 * @file cadenas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nombre[50];
    char numero[] = "5";

    printf("%i", atoi(numero));

    return 0;
    char n[] = "Jose Luis";
    char ap[] = "Cruz Mora";
    strcpy(nombre, n);
    strcat(nombre, " ");
    strcat(nombre, ap);

    sprintf(nombre,"%i. %s", 23, n);

    printf("%s, %lu", nombre, strlen(nombre));
    
    return 0;
}
