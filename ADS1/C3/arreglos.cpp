/**
 * @file arreglos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de arreglos
 * @version 0.1
 * @date 2023-09-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

void imprimir(int size, int *arrg);

int main()
{
    // int arrg[3] = {1,2,3};
    // int arrg[] = {1,2,3};
    int arrg[10];

    for (int cont = 0; cont < 10; cont++)
        arrg[cont] = cont + 1;

    imprimir(10, arrg);
    return 0;
}

void imprimir(int size, int *arrg)
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arrg[i] << " ";
    }
    cout << "]" << endl;
}
