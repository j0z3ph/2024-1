/**
 * @file archivos2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-11-15
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *archivo;
    char linea[1000];
    int size = 0;
    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL)
    {
        printf("Upss, no se encontro el archivo :c");
        return 1;
    }

    while (size != 1)
    {
        fgets(linea, 1000, archivo);
        size = strlen(linea);
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}
