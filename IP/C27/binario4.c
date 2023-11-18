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
    int id;
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
    Contacto contacto;
    int cont = 0;
    int sel = 0;
    
    FILE *archi = fopen("basesita.bin", "rb+");
    
    strcpy(contacto.nombre, "Hector");
    contacto.numero = 202402123;
    contacto.id = 5;


    fseek(archi, sizeof(Contacto) * contacto.id, SEEK_SET);
    fwrite(&contacto, sizeof(Contacto), 1, archi);

    fclose(archi);


    return 0;
}
