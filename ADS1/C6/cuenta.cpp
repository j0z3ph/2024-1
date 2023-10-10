/**
 * @file cuenta.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de recursion 3
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

void cuenta(int n, int i)
{
    //static int i = n;
    if (i > 0)
    {
        cout << i << endl;
        i--;
        cuenta(n, i);
    }
}

int main(int argc, char const *argv[])
{
    cuenta(5, 5);
    return 0;
}
