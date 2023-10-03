/**
 * @file matrix.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de matriz
 * @version 0.1
 * @date 2023-09-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

// Declaraciones de funciones

/**
 * @brief Realiza la suma de dos numeros enteros.
 *
 * @param a Primer numero
 * @param b Segundo numero
 * @return int La suma de a y b.
 */
int suma(int a, int b);

/**
 * @brief Calcula el determinante de una matriz
 * de 3x3.
 *
 * @param m Matriz de 3x3
 * @return int Determinante.
 */
int determinante(int m[3][3]);

/**
 * @brief Calcula la traspuesta de una matriz
 * de 3x3
 * 
 * @param m La matriz original.
 * @param t La matriz traspuesta.
 */
void traspuesta(int m[3][3], int t[3][3]);

/**
 * @brief Imprime una matriz de 3x3
 * 
 * @param m La matriz.
 */
void imprime(int m[3][3]);

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t[3][3];

    traspuesta(m,t);

    imprime(m);
    imprime(t);

    return 0;
}

// Definiciones de funciones

int suma(int a, int b)
{
    return a + b;
}

int determinante(int m[3][3])
{
    int det = 9;

    det = m[0][0] * m[1][1] * m[2][2] +
          m[1][0] * m[2][1] * m[0][2] +
          m[2][0] * m[0][1] * m[1][2] -
          m[0][2] * m[1][1] * m[2][0] -
          m[1][2] * m[2][1] * m[0][0] -
          m[2][2] * m[0][1] * m[1][0];

    return det;
}

void traspuesta(int m[3][3], int t[3][3])
{
    for (int fila = 0; fila < 3; fila++)
        for (int columna = 0; columna < 3; columna++)
            t[fila][columna] = m[columna][fila];
}

void imprime(int m[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
