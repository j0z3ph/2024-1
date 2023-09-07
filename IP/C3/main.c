/**
 * @file main.c
 * @author Jose luis (jlcruz@ipn.mx)
 * @brief Mi tercer programa
 * @version 0.1
 * @date 2023-09-06
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
int edad = 10; // Variable global

int main()
{
    char nombre[10] = "Jose"; // Variable Local
    {
        float pi = 3.1416; // Variable Local que no pertenece a main
    }
    printf("Mi Nombre es: %s\nLa edad es: %i\nEl valor de PI es: %f", nombre, edad, pi);
    return 0;
}
