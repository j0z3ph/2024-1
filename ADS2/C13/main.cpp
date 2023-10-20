/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-20
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Rectangulo
{
private:
    double base, altura;

public:
    /**
     * @brief Contruye un objeto de tipo Rectangulo con
     * las dimensiones proporcionadas. Si se dan dimensiones
     * menore o iguales a cero, se crea un rectangulo de
     * 1x1.
     *
     * @param base La base
     * @param altura La altura
     */
    Rectangulo(double base, double altura)
    {
        this->base = base <= 0.0 ? 1.0 : base;
        if (altura <= 0.0)
            this->altura = 1.0;
        else
            this->altura = altura;
    }

    // Setter y Getters

    double Base() { return base; }
    void Base(double base) { this->base = base <= 0.0 ? 1.0 : base; }

    double Altura() { return altura; }
    void Altura(double altura) { this->altura = altura <= 0.0 ? 1.0 : altura; }
};

class RectaLista{
    private:
    vector<Rectangulo> lista;

    public:
    void agregar(Rectangulo r) { lista.push_back(r); }
    void agregar(double base, double altura) { lista.push_back(Rectangulo(base, altura)); }

    string toString() {
        string cadena = "";

        for (int i = 0; i < lista.size(); i++)
        {
            cadena += to_string(i+1) + ". Base: " + to_string(lista[i].Base()) +
            ", Altura: " + to_string(lista[i].Altura()) + "\n"; 
        }
        return cadena;
    }
};

int main()
{
    RectaLista lista;

    lista.agregar(5.6,7.9);
    Rectangulo r(4.5,7.1);
    lista.agregar(r);

    cout << lista.toString();

    return 0;
}
