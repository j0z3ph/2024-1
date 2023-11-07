/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Escribe
    ofstream archivo;
    archivo.open("archivo.txt", ios::app);
    if(!archivo.is_open()) {
        cout << "Ups, error";
        exit(1);
    }
    
    archivo << "Hola Mundo" << endl;

    archivo.close();

    // Lee
    ifstream alectura;
    alectura.open("archivo.txt", ios::in);
    if(!alectura.is_open()) {
        cout << "Ups, error";
        exit(1);
    }
    string str;
    while (!alectura.eof())
    {
        getline(alectura, str);
        cout << str << endl;
    }

    alectura.close();
    
    


    return 0;
}
