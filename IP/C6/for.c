/**
 * @file for.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de for
 * @version 0.1
 * @date 2023-09-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    
    int maximo = 0;

    printf("Usuario, cuantos numeros quieres?: ");
    scanf("%d", &maximo);

    for (int numero = 1; numero <= maximo; numero++)
    {
        printf("%i\n", numero);
    }

    return 0;
}
