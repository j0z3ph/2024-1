/**
 * @file contactos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-11-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include "tools.h"
#define BD "agenda.bd"

typedef struct Contacto
{
    char nombre[100];
    unsigned int numero;
    int id;
} Contacto;

int main()
{
    FILE *bd = fopen(BD, "r");
    size_t len = 0;
    char *menu[] = {"Agregar Contacto", "Buscar Contacto", "Editar Contacto", "Eliminar Contacto", "Salir"};
    int opt = 0;
    Contacto contacto;

    if (bd == NULL)
    {
        bd = fopen(BD, "w");
        if (bd == NULL)
        {
            printf("Imposible crear la base de datos :c\n");
            return 1;
        }
    }
    fclose(bd);

    while (opt != 4)
    {
        // Mostramos el menu
        opt = showMenu(5, menu, "Menu de Prueba");

        switch (opt)
        {
        case 0:
            contacto.id = 0;
            while (contacto.id <= 0)
            {
                printf("Ingrese un ID: ");
                scanf("%i", &contacto.id);
                getc(stdin);
            }
            printf("Ingrese el nombre del contacto: ");
            fgets(contacto.nombre, 100, stdin);
            printf("Ingrese el numero telefonico: ");
            scanf("%i", &contacto.numero);
            getc(stdin);
            // Escribir el contacto en mi archivo
            bd = fopen(BD, "rb+");
            fseek(bd, sizeof(Contacto) * (contacto.id - 1), SEEK_SET);
            fwrite(&contacto, sizeof(Contacto), 1, bd);
            fclose(bd);

            break;
        case 1:
            contacto.id = 0;
            while (contacto.id <= 0)
            {
                printf("Ingrese un ID: ");
                scanf("%i", &contacto.id);
                getc(stdin);
            }

            // Leer el contacto de mi archivo
            bd = fopen(BD, "rb+");
            fseek(bd, sizeof(Contacto) * (contacto.id - 1), SEEK_SET);
            len = fread(&contacto, sizeof(Contacto), 1, bd);
            fclose(bd);

            if (contacto.id == 0 || len == 0)
            {
                printf("El contacto aun no ha sido registrado.\n");
            }
            else
            {
                printf("ID: %i\nNombre: %sTelefono: %i\n", contacto.id, contacto.nombre, contacto.numero);
            }

            printf("Presione ENTER para continuar...");
            getc(stdin);
            break;
        case 2:
            contacto.id = 0;
            while (contacto.id <= 0)
            {
                printf("Ingrese un ID: ");
                scanf("%i", &contacto.id);
                getc(stdin);
            }
            // Leer el contacto de mi archivo
            bd = fopen(BD, "rb+");
            fseek(bd, sizeof(Contacto) * (contacto.id - 1), SEEK_SET);
            len = fread(&contacto, sizeof(Contacto), 1, bd);
            fclose(bd);

            if (contacto.id == 0 || len == 0)
            {
                printf("El contacto aun no ha sido registrado.\n");
                printf("Presione ENTER para continuar...");
                getc(stdin);
            }
            else
            {
                printf("Ingrese el nuevo nombre del contacto: ");
                fgets(contacto.nombre, 100, stdin);
                printf("Ingrese el nuevo numero telefonico: ");
                scanf("%i", &contacto.numero);
                getc(stdin);
                // Escribir el contacto en mi archivo
                bd = fopen(BD, "rb+");
                fseek(bd, sizeof(Contacto) * (contacto.id - 1), SEEK_SET);
                fwrite(&contacto, sizeof(Contacto), 1, bd);
                fclose(bd);
            }
            break;
        case 3:
            contacto.id = 0;
            while (contacto.id <= 0)
            {
                printf("Ingrese un ID: ");
                scanf("%i", &contacto.id);
                getc(stdin);
            }
            // Leer el contacto de mi archivo
            bd = fopen(BD, "rb+");
            fseek(bd, sizeof(Contacto) * (contacto.id - 1), SEEK_SET);
            len = fread(&contacto, sizeof(Contacto), 1, bd);
            fclose(bd);

            if (contacto.id == 0 || len == 0)
            {
                printf("El contacto aun no ha sido registrado.\n");
                printf("Presione ENTER para continuar...");
                getc(stdin);
            }
            else
            {
                int tmp = contacto.id;
                contacto.id = 0;
                strcpy(contacto.nombre, "");
                contacto.numero = 0;

                // Escribir el contacto en mi archivo
                bd = fopen(BD, "rb+");
                fseek(bd, sizeof(Contacto) * (tmp - 1), SEEK_SET);
                fwrite(&contacto, sizeof(Contacto), 1, bd);
                fclose(bd);
            }

            break;
        case 4:

            break;
        default:
            printf("Opcion no valida.\n");
            break;
        }
    }

    return 0;
}
