/**
 * @file herencia.cpp
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

// Clase abstracta
class Figura
{
protected:
    double base;
    double altura;

public:
    Figura(double base, double altura) : base(base), altura(altura) {}
    double getBase() { return base; }
    void setBase(double base) { this->base = base; }

    double getAltura() { return altura; }
    void setAltura(double altura) { this->altura = altura; }
    // Funciones virtuales puras
    virtual double area() = 0;
    virtual double perimetro() = 0;
};

class Cuadrado : public Figura
{
public:
    Cuadrado(double base, double altura) : Figura(base, altura) {}
    // Polimorfismo : Sobreescritura (Override)
    double area() { return base * altura; }
    // Polimorfismo : Sobrecarga (Overload)
    double area(double b, double a)
    {
        return b * a;
    }

    // Polimorfismo : Sobreescritura (Override)
    double perimetro() { return 2 * base + 2 * altura; }
};

class Triangulo : public Figura
{
public:
    Triangulo(double base, double altura) : Figura(base, altura) {}
    double area() { return (base * altura) / 2; }

    double perimetro() { return (base * altura) / 2; }
};

int main()
{

    Cuadrado cuadrado(5.6, 7.1);
    Triangulo triangulo(5.6, 3.4);

    cout << cuadrado.Figura::area();
    cout << triangulo.Figura::area();
    cout << triangulo.area();

    return 0;
}
