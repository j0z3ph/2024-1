/**
 * @file whiledowhile.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int var = 5;

    while (var != 5) {
        cout << "Entre While";
    }

    do {
        cout << "Entre Do-While";
    } while (var != 5);
    
    return 0;
}
