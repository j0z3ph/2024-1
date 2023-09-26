/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de arreglos multidimencionales
 * @version 0.1
 * @date 2023-09-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int n, m;
    printf("Dimensiones: ");
    scanf("%i,%i", &n, &m);

    if (n < 1 || m < 1)
    {
        printf("Dimensiones incorrectas.\n");
        return 1;
    }

    int matrix[n][m];

    // Inicializa la matriz
    for (int fila = 0; fila < n; fila++)
    {
        for (int columna = 0; columna < m; columna++)
        {
            matrix[fila][columna] = (fila * m) + columna + 1;
        }
    }

    // Imprime el contenido de la matriz
    for (int fila = 0; fila < n; fila++)
    {
        printf("[ ");
        // Recorro de fila en fila
        for (int columna = 0; columna < m; columna++)
        {
            printf("%4i ", matrix[fila][columna]);
        }
        printf("]\n");
    }

    return 0;
}
