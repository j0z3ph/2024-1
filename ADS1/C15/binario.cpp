/**
 * @file binario.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int var = 7, var2 = 25;
    ofstream archivo("binario", ios::out);

    archivo.write((char*)&var, sizeof(int));
    archivo.write((char*)&var2, sizeof(int));

    archivo.close();
    
    return 0;
}
