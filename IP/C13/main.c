/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de recursion
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    static int i = 1;
    printf("%i. Hola a mi mejor grupo <3\n", i);
    i++;
    main();
    return 0;
}
