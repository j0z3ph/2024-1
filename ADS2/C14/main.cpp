/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

// Clase abstracta
class Figura
{
protected:
    double base, altura;

public:
    Figura(double base, double altura)
    {
        this->base = base <= 0 ? 1 : base;
        if (altura <= 0)
            this->altura = 1;
        else
            this->altura = altura;
    }

    double Base()
    {
        return base;
    }

    double Altura()
    {
        return altura;
    }

    /*void Base(double base)
    {
        this->base = base;
    }

    void Altura(double altura)
    {
        this->altura = altura;
    }*/

    // Funcion virtual pura
    virtual double Area() = 0;

    virtual double Perimetro() = 0;
};

class Rectangulo : public Figura
{
public:
    Rectangulo(double base, double altura) : Figura(base, altura) {}
    // Polimorfismo - Sobreescritura (Overwrite)
    double Area()
    {
        return base * altura;
    }

    // Sobre carga (Overload)
    //double Area(double base, double altura) {
    //    return base * altura;
    //}

    double Perimetro()
    {
        return 2 * base + 2 * altura;
    }
};

class Cuadrado : public Figura
{
public:
    Cuadrado(double lado) : Figura(lado, lado) {}
    // Polimorfismo - Sobreescritura (Overrite)
    double Area()
    {
        return base * altura;
    }
    double Perimetro()
    {
        return 2 * base + 2 * altura;
    }
};

class Triangulo : public Figura
{
public:
    Triangulo(double base, double altura) : Figura(base, altura) {}

    double Area()
    {
        return (base * altura) / 2.0;
    }
    double Perimetro()
    {
        return 2 * base + 2 * altura;
    }
};

int main()
{
    Triangulo fig(3.4, 5.6);

    cout << fig.Base() << endl
         << fig.Altura() << endl
         << fig.Area() << endl
         << fig.Perimetro();

    return 0;
}
