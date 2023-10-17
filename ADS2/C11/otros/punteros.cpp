/**
 * @file punteros.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    //cout << arr + 3 << endl;
    //cout << *(arr + 3) << endl; // arr[3]

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << ",";
    }
    

    return 0;
}
