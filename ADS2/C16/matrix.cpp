/**
 * @file main.cpp
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
    int **matriz;
    int rows, cols;

public:
    Matrix(int rows, int cols)
    {
        matriz = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            //*(matriz + i) = new int[cols];
            matriz[i] = new int[cols];
        }
        this->rows = rows;
        this->cols = cols;
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++)
        {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

    void set(int x, int y, int valor)
    {
        matriz[x][y] = valor;
    }

    int get(int x, int y)
    {
        return matriz[x][y];
    }

    int Rows() { return rows; }
    int Cols() { return cols; }
};

Matrix operator+(Matrix a, Matrix b)
{
    Matrix res(a.Rows(), a.Cols());

    return res;
}

int main()
{
    
    for(;;) {
        Matrix m(10,10);
    }

    return 0;
}
