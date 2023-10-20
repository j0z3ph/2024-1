/**
 * @file main2.cpp
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

class Figura
{
private:
    double base, altura;
    friend class Amiga;

public:
    
};

class Amiga {
    public:
    void LoL(Figura f) {
        f.base + f.altura;
    }
};



int main()
{
    Figura f;
    f.base;

    return 0;
}
