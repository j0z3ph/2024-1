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

using namespace std;

int main(int argc, char const *argv[])
{
    int A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int det = 9;

    det = A[0][0] * A[1][1] * A[2][2] +
          A[1][0] * A[2][1] * A[0][2] +
          A[2][0] * A[0][1] * A[1][2] -
          A[2][0] * A[1][1] * A[0][2] -
          A[0][0] * A[2][1] * A[1][2] -
          A[1][0] * A[0][1] * A[2][2];

    cout << det << endl;
    return 0;
}
