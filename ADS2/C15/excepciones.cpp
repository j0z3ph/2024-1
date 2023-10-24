/**
 * @file main.cpp
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

class Persona
{
private:
    int edad;
    double altura;

public:
    Persona(int edad, double altura)
    {
        if (edad <= 0)
        {
            throw "Error: Solo se permiten edades mayores a cero.";
        }
        else
        {
            this->edad = edad;
        }

        if (altura <= 1.0)
        {
            // throw "Error: No se acepta minions.";
            throw -1;
        }
        else
        {
            this->altura = altura;
        }
        if (altura > 2.0)
        {
            // throw "Error: No se acepta minions.";
            throw -2.5;
        }
        else
        {
            this->altura = altura;
        }
    }

    int Edad() { return edad; }
    double Altura() { return altura; }

    void Edad(int nueva)
    {
        if (nueva <= 0)
        {
            throw "Error: Solo se permiten edades mayores a cero.";
        }
        else
        {
            this->edad = nueva;
        }
    }
};

double divide(double a, double b)
{
    if (b == 0.0)
        throw "Se indefine";
    else
        return a / b;
}

int main()
{
    try
    {
        divide(5.6, 0.0);
    }
    catch (const char *e)
    {
        std::cerr << e << '\n';
    }

    Persona *jesus;
    try
    {
        jesus = new Persona(2023, 1.8);
        cout << jesus->Edad();
    }
    catch (const char *err)
    {
        std::cerr << err << '\n';
    }
    catch (const int e)
    {
        if (e == -1)
            std::cerr << "Error: No se aceptan minions." << '\n';
        else if (e == -2)
            std::cerr << "Error: No se aceptan postes." << '\n';
        else
            std::cerr << "Error desconocido." << '\n';
    }
    catch (...)
    {
        std::cerr << "Errorrrrrr." << '\n';
    }

    try
    {
        jesus->Edad(-15);
    }
    catch (const char *e)
    {
        cerr << e << endl;
    }

    cout << jesus->Edad();

    return 0;
}
