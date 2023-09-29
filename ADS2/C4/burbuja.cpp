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
#define N 6

using namespace std;

int main()
{
    int arr[N] = {6, 5, 4, 3, 2, 1};
    int aux;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
