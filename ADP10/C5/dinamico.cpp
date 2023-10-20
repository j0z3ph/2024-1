/**
 * @file dinamico.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-19
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

void nada()
{
    int *var = new int[100];
    delete[] var;
}

int main(int argc, char const *argv[])
{
    for (;;)
    {
        nada();
    }

    return 0;
}
