/**
 * @file herencia2.cpp
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

class Diosito
{
public:
    int publico;

protected:
    int protegido;

private:
    int privado;
};

class Adan : public Diosito
{
private:
    void fun()
    {
        this->protegido = 10;
        // this->privado = 10;
    }
};

class Eva : protected Diosito
{
private:
    void fun()
    {
        this->protegido = 90;
        this->publico = 90;
    }
};

class Lilith : private Diosito
{
private:
    void fun()
    {
        this->protegido = 90;
        this->publico = 90;
    }
};

class Cain : public Eva
{
    void fun()
    {
        this->protegido = 90;
        this->publico = 90;
    }
};

class Hugo : public Lilith
{
    void fun()
    {
        //this->protegido = 90;
        //this->publico = 90;
    }
};

int main()
{
    Diosito d;
    Adan a;
    a.publico = 90;
    Eva e;
    // e.publico = 90;
    Lilith l;
    // l.publico = 10;

    return 0;
}
