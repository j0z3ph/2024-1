/**
 * @file amigos1.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class MiCrush
{
private:
    int no_Novios;

public:
    int secretos()
    {
        SinAmigos yo;
        return yo.b;
    }
};

class SinAmigos
{
private:
    int a, b;
    friend int suma(SinAmigos sa);
    friend class MiCrush;
    int secretos()
    {
        MiCrush mc;
        return mc.no_Novios;
    }
};

int suma(SinAmigos sa)
{
    return sa.a + sa.b;
}

int main()
{
    return 0;
}
