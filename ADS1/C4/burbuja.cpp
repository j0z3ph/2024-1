/**
 * @file burbuja.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Implementacion de burbuja
 * @version 0.1
 * @date 2023-09-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "funciones.hpp"

using namespace std;

int main()
{
    int arr[N] = {5, 4, 3, 2, 1};

    burbuja(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
