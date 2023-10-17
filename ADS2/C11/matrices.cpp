/**
 * @file matrices.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int m[5][6];
    int cont = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            *(*(m + i) + j) = cont++;
        }
    }

    return 0;
}
