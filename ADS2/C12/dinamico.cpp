/**
 * @file dinamico.cpp
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
protected:
    double *base;
    double *altura;

public:
    Figura(double base, double altura)
    {
        this->base = new double(base);
        this->altura = new double(altura);
    }

    ~Figura()
    {
        delete base;
        delete altura;
    }

    double getBase() { return *base; }
    double getAltura() { return *altura; }

    double getArea()
    {
        return 0.0;
    }

    double getPerimetro()
    {
        return 0.0;
    }
};

class Rectangulo : public Figura {
    public:
    Rectangulo(double base, double altura): Figura(base, altura) {}

    // Polimorfismo : Sobreescritura (Override)
    double getArea(){
        return *base * *altura;
    }

    // Polimorfismo : Sobrecarga (Overload)
    double getArea(double b, double a) {
        return b * a;
    }

    // Polimorfismo : Sobreescritura (Override)
    double getPerimetro() {
        return 2 * *base + 2* *altura;
    }
};



int main()
{
    Rectangulo rect(5.0,4.0);

    cout << rect.getArea();

    return 0;
}
