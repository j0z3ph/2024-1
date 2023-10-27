/**
 * @file amigos.cpp
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
    string mis_gustos;

public:
    int chisme(ForeverAlone f)
    {
        return f.maximo_secreto;
    }
};

class ForeverAlone
{
private:
    int maximo_secreto;
    friend class MiCrush;

public:
    string chisme(MiCrush mc)
    {
        return mc.mis_gustos;
    }
};

int main()
{

    return 0;
}
