/**
 * @file ptrs.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matrix[3][3];

    *((*(matrix + 2)) + 1) = 10;

    cout << matrix[2][1] << endl;

    return 0;
}
