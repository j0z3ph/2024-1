/**
 * @file bb.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int arrg[] = {2, 3, 4, 5, 6};
    int i = 0, s = 4, m;
    int perdida = 1;
    bool encontrado = false;

    while (i <= s)
    {
        m = ((s - i) / 2) + i;
        if (arrg[m] == perdida)
        {
            encontrado = true;
            break;
        }
        else if (perdida > arrg[m])
        {
            i = m + 1;
        }
        else
        {
            s = m - 1;
        }
    }

    printf("%s\n", (encontrado ? "Encontrado :D" : "No encontrado :c"));

    return 0;
}
