/**
 * @file punteros.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr;
    ptr = &a;

    *ptr = 17;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}
