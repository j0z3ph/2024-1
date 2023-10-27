/**
 * @file herencia.cpp
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

class Figura
{
protected:
    double base, altura;

public:
    double Base() { return base; }
    double Altura() { return altura; }

    void Base(double base) { this->base = base; }
    void Altura(double altura) { this->altura = altura; }

    virtual double Area() = 0;

    virtual double Perimetro() = 0;
};

class Rectangulo : public Figura
{
public:
    // Polimorfismo - Sobreescritura (Overwrite)
    double Area()
    {
        return base * altura;
    }
    double Perimetro()
    {
        return 2 * base + 2 * altura;
    }
};

class Cuadrado : public Figura
{
    public:
    // Polimorfismo - Sobreescritura (Overwrite)
    double Area()
    {
        return base * altura;
    }
    double Perimetro()
    {
        return 2 * base + 2 * altura;
    }
};

class Triangulo
{
};

int main()
{
    Cuadrado c;

    cout << c.Area() << endl;


    return 0;
}
