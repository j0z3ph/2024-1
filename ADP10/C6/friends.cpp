/**
 * @file friends.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class SoloSolinSolito
{
private:
    int edad, altura;
    friend int suma(SoloSolinSolito alone);
};

int suma(SoloSolinSolito alone)
{
    return alone.edad + alone.altura;
}

int main()
{

    return 0;
}
