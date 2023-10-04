/**
 * @file matrices.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Operaciones con matrices
 * @version 0.1
 * @date 2023-09-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#define ERROR -1
#define OK 0

using namespace std;

/**
 * @brief Calcula el determinante de una
 * matriz de 3x3.
 *
 * @param A Una matriz de 3x3.
 * @return int El determinante.
 */
int determinante(int A[3][3]);

/**
 * @brief Obtiene la traspuesta de una
 * matriz de 3x3
 *
 * @param A Matriz original
 * @param T Matriz traspuesta
 */
void traspuesta(int A[3][3], int T[3][3]);

/**
 * @brief Calcula la adjunta de una matriz de 3x3
 *
 * @param A La matriz
 * @param Adj La adjunta
 */
void adjunta(int A[3][3], int Adj[3][3]);

int inversa(int A[3][3], double Inv[3][3]);

/**
 * @brief Imprime una matriz de 3x3
 *
 * @param A La matriz.
 */
void imprime(int A[3][3]);

void imprime(double A[3][3]);

int main(int argc, char const *argv[])
{
    int A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, -6, 9}};
    double t[3][3];

    if (inversa(A, t) == ERROR)
    {
        cout << "Upss, no tiene inversa" << endl;
    }
    else
    {
        imprime(A);
        cout << endl;
        imprime(t);
    }
    return 0;
}

int determinante(int A[3][3])
{
    int det = 9;

    det = A[0][0] * A[1][1] * A[2][2] +
          A[1][0] * A[2][1] * A[0][2] +
          A[2][0] * A[0][1] * A[1][2] -
          A[2][0] * A[1][1] * A[0][2] -
          A[0][0] * A[2][1] * A[1][2] -
          A[1][0] * A[0][1] * A[2][2];

    return det;
}

void traspuesta(int A[3][3], int T[3][3])
{
    for (int fila = 0; fila < 3; fila++)
        for (int columna = 0; columna < 3; columna++)
            T[fila][columna] = A[columna][fila];
}

void imprime(int A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void imprime(double A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void adjunta(int A[3][3], int Adj[3][3])
{
    Adj[0][0] = +1 * (A[1][1] * A[2][2] - A[2][1] * A[1][2]);
    Adj[0][1] = -1 * (A[1][0] * A[2][2] - A[2][0] * A[1][2]);
    Adj[0][2] = +1 * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);
    Adj[1][0] = -1 * (A[0][1] * A[2][2] - A[2][1] * A[0][2]);
    Adj[1][1] = +1 * (A[0][0] * A[2][2] - A[2][0] * A[0][2]);
    Adj[1][2] = -1 * (A[0][0] * A[2][1] - A[2][0] * A[0][1]);
    Adj[2][0] = +1 * (A[0][1] * A[1][2] - A[1][1] * A[0][2]);
    Adj[2][1] = -1 * (A[0][0] * A[1][2] - A[1][0] * A[0][2]);
    Adj[2][2] = +1 * (A[0][0] * A[1][1] - A[1][0] * A[0][1]);
}

int inversa(int A[3][3], double Inv[3][3])
{

    int det = determinante(A);
    int T[3][3];
    int Adj[3][3];
    double factor = 1.0;

    if (det == 0)
    {
        return ERROR;
    }

    factor /= (double)det;

    traspuesta(A, T);
    adjunta(T, Adj);

    for (int fila = 0; fila < 3; fila++)
    {
        for (int col = 0; col < 3; col++)
        {
            Inv[fila][col] = factor * (double)Adj[fila][col];
        }
    }

    return OK;
}
