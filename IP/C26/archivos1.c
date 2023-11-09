/**
 * @file archivos1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    FILE *archivo;
    archivo = fopen("archivo.txt", "a");

    if(archivo == NULL) {
        printf("Ups, el archivo no existe.\n");
        return 1;
    }

    fprintf(archivo, "Hola a todos los machos Alfa\n");

    fclose(archivo);
    return 0;
}
