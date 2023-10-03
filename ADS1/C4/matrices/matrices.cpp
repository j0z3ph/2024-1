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
#include "operaciones.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t[3][3];

    traspuesta(A, t);

    imprime(A);
    cout << endl;
    imprime(t);
    return 0;
}
