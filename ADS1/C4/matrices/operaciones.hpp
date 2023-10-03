#pragma once

#include<iostream>

using namespace std;
// Declaraciones

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
 * @brief Imprime una matriz de 3x3
 * 
 * @param A La matriz.
 */
void imprime(int A[3][3]);
