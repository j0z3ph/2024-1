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
    archivo = fopen("bd.txt", "w");
    if (archivo == NULL)
    {
        printf("Upssss :c \n");
        return;
    }

    for (int i = 0; i < numContacto; i++)
    {
        fprintf(archivo, "%s\n", lista[i].nombre);
        if (i == numContacto - 1)
            fprintf(archivo, "%lu", lista[i].numero);
        else
            fprintf(archivo, "%lu\n", lista[i].numero);
    }

    fclose(archivo);
}

int cargarBD(Contacto lista[])
{
    FILE *archivo;
    char buff[100];
    int cont = 0;
    archivo = fopen("bd.txt", "r");
    if (archivo == NULL)
    {
        printf("Upssss :c \n");
        return -1;
    }

    while (!feof(archivo))
    {
        fgets(lista[cont].nombre, 100, archivo);
        fgets(buff, 100, archivo);
        lista[cont].numero = atol(buff);
        cont++;
    }

    fclose(archivo);
    return cont;
}

int main()
{

    Contacto lista[100];
    int cont = 0;

    strcpy(lista[cont].nombre, "Jose Luis");
    lista[cont].numero = 1234567;
    cont++;

    strcpy(lista[cont].nombre, "Guillermo");
    lista[cont].numero = 9474838;
    cont++;

    strcpy(lista[cont].nombre, "Uriel");
    lista[cont].numero = 76873644;
    cont++;

    guardarBD(lista, cont);

    return 0;
}
