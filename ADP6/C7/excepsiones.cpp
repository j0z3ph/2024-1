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

class Clase
{
private:
    int edad;
    double estatura;

public:
    Clase(int edad, double estatura)
    {
        if (edad <= 0)
        {
            throw "Error: La edad no puede ser menor o igual a cero.";
        }
        else
        {
            this->edad = edad;
        }
        if (estatura <= 1.0)
        {
            throw 10.5;
        }
        else
        {
            this->estatura = estatura;
        }
    }

    void Edad(int nueva_edad)
    {
        if (nueva_edad <= 0)
        {
            throw "Error: La edad no puede ser menor o igual a cero.";
        }
        else
        {
            this->edad = nueva_edad;
        }
    }

    int Edad()
    {
        return edad;
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        Clase clase(30, 0.8);
        cout << clase.Edad() << endl;
        clase.Edad(-5);
        cout << clase.Edad() << endl;
    }
    catch (const char *err)
    {
        std::cerr << err << '\n';
    }
    catch (const int err)
    {
        std::cerr << err << '\n';
    }
    catch (...)
    {
        std::cerr << "Error generico" << '\n';
    }

    return 0;
}
