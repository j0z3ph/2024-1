/**
 * @file punteros1.cpp
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
    int *var = new int;
    *var = 10;
    delete var;
}

int main()
{
    for (;;)
        nada();

    return 0;
}
