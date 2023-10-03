#include"operaciones.hpp"
// Definicion


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

void imprime(int A[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
