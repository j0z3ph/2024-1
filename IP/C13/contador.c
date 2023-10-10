/**
 * @file contador.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

void contador(int n, int i)
{
    //static int i = 1;
    if (i <= n)
    {
        printf("%i\n", i);
        i++;
        contador(n, i);
    }
}

int main(int argc, char const *argv[])
{
    contador(5, 1);
    return 0;
}
