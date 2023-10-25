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

    double Area()
    {
        return 0.0;
    }

    double Perimetro()
    {
        return 0.0;
    }
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
};

class Triangulo
{
};

int main()
{
    Rectangulo rectangulo;
    rectangulo.Base(6.7);
    rectangulo.Altura(3.3);

    cout << rectangulo.Base() << "," << rectangulo.Altura() << endl;
    cout << rectangulo.Figura::Area() << endl;
    cout << rectangulo.Area();
    return 0;
}
