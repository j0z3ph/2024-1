/**
 * @file funciones.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Archivo de funciones
 * @version 0.1
 * @date 2023-09-29
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "funciones.hpp"

void burbuja(int arr[], int size)
{
    int vext = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                vext = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = vext;
            }
        }
    }
}