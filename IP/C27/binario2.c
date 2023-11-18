/**
 * @file archviostxt.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-11-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contacto
{
    char nombre[100];
    unsigned long numero;
} Contacto;

void guardarBD(Contacto lista[], int numContacto)
{
    FILE *archivo;
    archivo = fopen("bd.bin", "wb");
    if (archivo == NULL)
    {
        printf("Upssss :c \n");
        return;
    }

    for (int i = 0; i < numContacto; i++)
    {
        fwrite(&lista[i], sizeof(Contacto), 1, archivo);
    }

    fclose(archivo);
}

int cargarBD(Contacto lista[])
{
    FILE *archivo;
    char buff[100];
    int cont = 0;
    archivo = fopen("bd.bin", "rb");
    if (archivo == NULL)
    {
        printf("Upssss :c \n");
        return -1;
    }
    fread(&cont, sizeof(int), 1, archivo);
    for (int i = 0; i < cont; i++)
    {
        fread(&lista[i], sizeof(Contacto), 1, archivo);
    }
    
    fclose(archivo);
    return cont;
}

int main()
{
    Contacto lista[100];
    int cont = cargarBD(lista);

    for (int i = 0; i < cont; i++)
    {
        printf("%s - %lu\n", lista[i].nombre, lista[i].numero);
    }

    return 0;
}
