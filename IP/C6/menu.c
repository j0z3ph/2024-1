/**
 * @file menu.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de switch
 * @version 0.1
 * @date 2023-09-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int opcion = 0;
    int num1 = 0;
    int num2 = 0;

    do
    {

        printf("\tLA MAIZORO\n");
        printf("Operaciones:\n");
        printf("\t1. Suma\n");
        printf("\t2. Resta\n");
        printf("\t3. Multiplicacion\n");
        printf("\t4. Division\n");
        printf("\t5. Salir\n");
        printf("Seleccione su operacion: ");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Proporcione el operando A y el operando B: ");
            scanf("%i,%i", &num1, &num2);
            printf("La suma es: %d\n", num1 + num2);
            break;
        case 2:
            // Aqui va todo lo de la resta
            printf("REST\n");
            break;
        case 3:
            // Aqui va todo lo de la multi
            printf("MULTI\n");
            break;
        case 4:
            // Aqui va todo lo de la divi
            printf("DIVI\n");
            break;
        case 5:
            printf("Ai nos vidrios.");
            break;
        default:
            printf("Opcion no valida.");
            break;
        }
    }while (opcion != 5);

    return 0;
}
