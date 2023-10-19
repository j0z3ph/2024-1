/**
 * @file herencia1.cpp
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

class Base
{
public:
    int publica;

private:
    int privada;

protected:
    int protegida;
};

class Derivada1 : public Base {
    void f() {
        this->protegida = 89;
    }
};

class Derivada2 : protected Base {
    protected:
    void f() {
        this->protegida = 10;
        this->publica = 10;
    }
};

class Derivada3 : private Base {
    private :
    void f() {
        this->protegida = 10;
        this->publica = 10;
    }
};

class Mostro : public Derivada1 {
    public:
    void f() {
        this->publica = 10;
        this->protegida = 10;
    }
};

int main()
{
    Derivada3 d;
    //d.publica = 10;
    

    return 0;
}
