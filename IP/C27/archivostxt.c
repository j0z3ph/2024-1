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
#include<stdio.h>
#include<string.h>

typedef struct Contacto
{
    char nombre[100];
    unsigned long numero;
} Contacto;

void imprimeContactos(Contacto lista[], int numContacto) {
    FILE *archivo;
    archivo = fopen("archivo.txt", "w");
    if(archivo == NULL) {
        printf("Upssss :c \n");
        return;
    }

    for (int i = 0; i < numContacto; i++)
    {
        fprintf(archivo,"Contacto %i\n", i + 1);
        fprintf(archivo, "Nombre: %s\n", lista[i].nombre);
        fprintf(archivo, "Numero: %lu\n", lista[i].numero);
        fprintf(archivo,"---------------------------------\n");
    }
    
    fclose(archivo);

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

    imprimeContactos(lista, cont);


    return 0;
}
