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

int main()
{
    int m[3][3];

    int *ptr = &m[0][0];

    for (int i = 0; i < 9; i++)
    {
        *(ptr + i) = i + 1;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
        
    }

    return 0;
    

    *(*(m + 1) + 2) = 10;

    *(*(m + 2) + 1) = 18;

    cout << m[1][2] << endl;
    cout << m[2][1] << endl;
    cout << *(m + 2) + 1 << endl;
    cout << &m[2][1] << endl;

    return 0;
}
