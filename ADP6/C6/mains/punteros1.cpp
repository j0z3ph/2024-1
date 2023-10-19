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
#include<iostream>

using namespace std;

int main()
{
    int var = 10;
    int *variable_normal;

    variable_normal = &var;

    *variable_normal = 15;

    cout << var << endl;
    cout << &var << endl;
    cout << variable_normal << endl;
    cout << *variable_normal << endl;
    
    return 0;
}
