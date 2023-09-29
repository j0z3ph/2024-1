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

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int det = 9;

    det = m[0][0] * m[1][1] * m[2][2] +
          m[1][0] * m[2][1] * m[0][2] +
          m[2][0] * m[0][1] * m[1][2] -
          m[0][2] * m[1][1] * m[2][0] -
          m[1][2] * m[2][1] * m[0][0] -
          m[2][2] * m[0][1] * m[1][0];

    cout << det;

    return 0;
}
