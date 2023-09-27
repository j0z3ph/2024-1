/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    return 0;
}
