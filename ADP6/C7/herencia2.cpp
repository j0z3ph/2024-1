/**
 * @file herencia2.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-24
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Chayane
{
public:
    int publico;

protected:
    int protegido;

private:
    int privado;
};

class Hijo1 : public Chayane {
    public:
    void fun() {
        this->protegido = 9;
        //this->privado = 9;
    }
};

class Hijo2 : protected Chayane {
    public:
    void fun() {
        this->protegido = 9;
        this->publico = 9;
        //this->privado = 9;
    }

};

class Hijo3 : private Chayane {
    public:
    void fun() {
        this->protegido = 9;
        this->publico = 9;
        //this->privado = 9;
    }
};

class Hijo4 : public Hijo3 {
    public:
    void fun() {
        //this->protegido = 9;
        //this->publico = 9;
        //this->privado = 9;
    }
};

int main(int argc, char const *argv[])
{
    Hijo1 h;
    h.publico = 9;

    Hijo2 h2;
    //h2.publico = 9;

    Hijo3 h3;
    //h3.publico = 9;

    Hijo4 h4;
    //h4.publico = 9;

    return 0;
}
