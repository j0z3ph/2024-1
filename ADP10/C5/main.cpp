/**
 * @file main.cpp
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

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i + 1;
        //arr[i] = i + 1;
    }
    

    cout << *arr << " - " << arr << endl;
    cout << *(arr + 1) << " - " << arr+1 << endl;
    cout << arr[1] << " - " << &arr[1] << endl;

    return 0;
}
