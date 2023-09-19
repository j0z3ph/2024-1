/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de while
 * @version 0.1
 * @date 2023-09-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int numero = 1;
    int maximo = 0;

    printf("Usuario, cuantos numeros quieres?: ");
    scanf("%d", &maximo);

    while (numero <= maximo)
    {
        printf("%i\n", numero++);
        //numero++;
        //numero += 1;
        //numero = numero + 1;
    }

    return 0;
}
