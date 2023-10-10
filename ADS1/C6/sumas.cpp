/**
 * @file sumas.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplo de recursion 4
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int sumas(int n) {
    static int sum_acc = 0;
    static int i = 1;
    if ( i <= n)
    {
        sum_acc += i;
        i++;
        sumas(n);
    }
    return sum_acc;
}

int main()
{
    cout << sumas(5) << endl;
    return 0;
}
