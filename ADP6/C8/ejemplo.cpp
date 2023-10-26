/**
 * @file ejemplo.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

using namespace std;

class Matrix
{
private:
    int **matrix;
    int filas, columnas;

public:
    Matrix(int filas, int columnas)
    {
        matrix = new int *[filas];
        for (int i = 0; i < filas; i++)
        {
            matrix[i] = new int[columnas];
        }
        this->filas = filas;
        this->columnas = columnas;
    }

    ~Matrix()
    {
        for (int i = 0; i < filas; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    void set(int x, int y, int valor)
    {
        matrix[x][y] = valor;
    }

    int get(int x, int y)
    {
        return matrix[x][y];
    }

    int Columnas() { return columnas; }
    int Filas() { return filas; }
};

Matrix operator+(Matrix a, matrix b)
{
    Matrix res(a.Filas(), a.Columnas());
    return res;
}

int main()
{
    while (true)
    {
        // Opcion crear
        Matrix m(3, 4);
        m.set(0, 0, 5);
        m.set(3, 2, 10);
        Matrix n(3,4);

        Matrix res = m + n;
    }

    return 0;
}
