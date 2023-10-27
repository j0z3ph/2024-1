/**
 * @file matriz.cpp
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
    int rows, cols;

public:
    Matrix(int rows, int cols)
    {
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            matrix[i] = new int[cols];
            //*(matrix + i) = new int[cols];
        }
        this->rows = rows;
        this->cols = cols;
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
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

    int Rows() { return rows; }
    int Cols() { return cols; }
};

Matrix operator+(Matrix a, Matrix b)
{
    Matrix res(a.Rows(), a.Cols());
    // Operaciones
    return res;
}

int main()
{
    for (;;)
    {
        Matrix m(4, 4);
    }

    return 0;
}
