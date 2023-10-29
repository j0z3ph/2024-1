/**
 * @file matrix.h
 * @author Jose Luis
 * @brief 
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

/**
 * @brief Crea una matriz dinamica de filas x columnas
 * 
 * @param filas Numero de filas
 * @param columnas Numero de columnas
 * @return int** Puntero a la matriz creada
 */
int **Matrix(int filas, int columnas);

/**
 * @brief Imprime una matrix de filas x columnas
 * 
 * @param matrix Puntero a la matriz
 * @param filas Numero de Filas
 * @param columnas Numero de Columnas
 */
void Imprime(int **matrix, int filas, int columnas);

/**
 * @brief Libera la memoria de una matriz
 * 
 * @param matrix Puntero a la matriz
 * @param filas Numero de filas
 */
void Destruye(int **matrix, int filas);

#endif