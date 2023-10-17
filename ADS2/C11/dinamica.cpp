/**
 * @file dinamica.cpp
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

void nada()
{
    int *a = new int;
    *a = 10;
    delete a;
}

int main()
{
    int *arr = new int[100];
    // Hago cosas con arr
    delete[] arr;
    
    for (;;)
    {
        nada();
    }

    return 0;
}
