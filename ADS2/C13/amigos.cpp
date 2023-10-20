/**
 * @file amigos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Base
{
private:
    int privada;

public:
    int publica;

protected:
    int protegida;
};

class Derivada1 : public Base
{
public:
    void fun()
    {
        this->protegida = 7;
    }
};

class Derivada2 : protected Base
{
public:
    void fun()
    {
        this->protegida = 7;
        this->publica = 8;
    }
};

class Derivada3 : private Base
{
private:
    void fun()
    {
        this->protegida = 8;
        this->publica = 8;
    }

public:
    friend class Bruja;
    friend void bruja71(Derivada3 d);
};

void bruja71(Derivada3 d)
{
    cout << d.publica << endl;
    cout << d.protegida << endl;
}

class Bruja
{
public:
    void chismosa(Derivada3 d)
    {
        cout << d.publica << endl;
        cout << d.protegida << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derivada3 d;

    return 0;
}
