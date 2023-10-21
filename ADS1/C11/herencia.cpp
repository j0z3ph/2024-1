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
    //void setBase(double base) { this->base = base; }

    double getAltura() { return altura; }
    //void setAltura(double altura) { this->altura = altura; }
    // Funciones virtuales puras
    virtual double area() = 0;
    virtual double perimetro() = 0;
};

class Cuadrado : public Figura
{
public:
    /**
     * @brief Crea un objeto de tipo rectangulo.
     * Si recibe un valor negativo o cero crea un cuadrado
     *  de 1 x 1.
     * @param lado 
     */
    Cuadrado(double lado) : Figura(lado, lado) {
        this->base = lado <= 0 ? 1 : lado;
        this->altura = lado <= 0 ? 1 : lado;
    }
    // Polimorfismo : Sobreescritura (Override)
    double area() { return base * altura; }
    // Polimorfismo : Sobrecarga (Overload)
    // double area(double b, double a)
    //{
    //    return b * a;
    //}

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
    Cuadrado cuadrado(-17.0);
    Triangulo triangulo(5.6, 3.4);

    cout << cuadrado.area();
    cout << cuadrado.getBase();
    //cout << triangulo.area();
    //cout << triangulo.area();

    return 0;
}
