/**
 * @file herencia.cpp
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

class Figura
{
protected:
    double base, altura;

public:
    double Base() { return base; }
    double Altura() { return altura; }

    // void Base(double base) { this->base = base; }
    // void Altura(double altura) { this->altura = altura; }

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
    Rectangulo(double base, double altura) : Figura()
    {
        if (base <= 0.0)
            throw "Error: Solo se permiten valores mayores a cero.";
        else
            this->base = base;
        if (altura <= 0.0)
            throw "Error: Solo se permiten valores mayores a cero.";
        else
            this->altura = altura;
    }
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
    Cuadrado(double lado) : Figura()
    {
        if (lado <= 0.0)
            throw "Error: Solo se permiten valores mayores a cero.";
        else
        {
            this->base = lado;
            this->altura = lado;
        }
    }
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

class Triangulo : public Figura
{
};

int main(int argc, char const *argv[])
{
    try
    {
        Rectangulo r(5.6, 7.7);

        Cuadrado c(34.7);

        cout << c.Area();
    }
    catch (const char *err)
    {
        std::cerr << err << '\n';
    }
    catch (...)
    {
        std::cerr << "Error \n";
    }

    return 0;
}
