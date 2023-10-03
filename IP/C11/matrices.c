/**
 * @file matrices.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa con matrices
 * @version 0.1
 * @date 2023-09-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#define ERROR -1
#define OK 0

// Aqui van las declaraciones (firmas)

/**
 * @brief Calcula el determinante de
 * una matriz de 3x3.
 *
 * @param A Matriz de 3x3.
 * @return int Determinante.
 */
int determinante(int A[][3]);

void transpuesta(int A[][3], int T[][3]);

void imprime(int A[][3]);

void imprimeDouble(double A[][3]);

int suma(int valor1, int valor2, int valor3);

void adjunta(int A[][3], int Adj[][3]);

int inversa(int A[][3], double I[][3]);

int main()
{
    int A[3][3] = {{1, 2, 7}, {4, 5, 6}, {7, 8, 9}};
    double I[3][3];

    if(inversa(A,I) == ERROR) {
        printf("La matriz no tiene inversa :'(\n");
    } else {
        imprimeDouble(I);
    }

    return 0;
}

// Aqui van las definiciones

int determinante(int A[][3])
{
    int det = A[0][0] * A[1][1] * A[2][2] +
              A[0][1] * A[1][2] * A[2][0] +
              A[0][2] * A[1][0] * A[2][1] -
              A[2][0] * A[1][1] * A[0][2] -
              A[2][1] * A[1][2] * A[0][0] -
              A[2][2] * A[1][0] * A[0][1];

    return det;
}

int suma(int valor1,
         int valor2,
         int valor3)
{
    int resultado = valor1 + valor2 + valor3;
    return resultado;
}

void transpuesta(int A[][3], int T[][3])
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            T[f][c] = A[c][f];
        }
    }
}

void imprime(int A[][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[ ");
        for (int j = 0; j < 3; j++)
        {
            printf("%3i ", A[i][j]);
        }
        printf("]\n");
    }
}

void imprimeDouble(double A[][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[ ");
        for (int j = 0; j < 3; j++)
        {
            printf("%5.2lf ", A[i][j]);
        }
        printf("]\n");
    }
}

void adjunta(int A[][3], int Adj[][3])
{
    Adj[0][0] = +1 * (A[1][1] * A[2][2] - A[2][1] * A[1][2]);
    Adj[0][1] = -1 * (A[1][0] * A[2][2] - A[2][0] * A[1][2]);
    Adj[0][2] = +1 * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);
    Adj[1][0] = -1 * (A[0][1] * A[2][2] - A[2][1] * A[0][2]);
    Adj[1][1] = +1 * (A[0][0] * A[2][2] - A[2][0] * A[0][2]);
    Adj[1][2] = -1 * (A[0][0] * A[2][1] - A[0][1] * A[2][0]);
    Adj[2][0] = +1 * (A[0][1] * A[1][2] - A[1][1] * A[0][2]);
    Adj[2][1] = -1 * (A[0][0] * A[1][2] - A[1][0] * A[0][2]);
    Adj[2][2] = +1 * (A[0][0] * A[1][1] - A[1][0] * A[0][1]);
}

int inversa(int A[][3], double I[][3])
{
    int det = determinante(A);
    double factor = 1.0;
    int t[3][3];
    int a[3][3];

    if (det == 0)
        return ERROR;

    factor /= (double)det;

    // Calculamos la traspuesta
    transpuesta(A, t);

    // Adjunta de la traspuesta
    adjunta(t, a);

    //
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            I[f][c] = factor * (double)a[f][c];
        }
    }
    return OK;
}