/**
 * @file sumas.cpp
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

int suma(int n)
{
    static int sum_acc = 0;
    static int i = 1;
    if (i <= n)
    {
        sum_acc += i;
        i++;
        suma(n);
    }
    return sum_acc;
}

int main()
{
    cout << suma(5) << endl;
    return 0;
}
