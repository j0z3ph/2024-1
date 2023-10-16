/**
 * @file lista.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Michi lista
 * @version 0.1
 * @date 2023-10-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Michi
{
private:
    string nombre;
    string color;
    char genero;
    int edad;

public:
    /**
     * @brief Construct a new Michi object
     *
     * @param nombre Nombre del michi
     * @param color Color del michi
     * @param genero H - Hembra, M - Macho, N - No identificado
     * @param edad Edad en meses
     */
    Michi(string nombre, string color, char genero, int edad)
    {
        if (genero == 'H' || genero == 'h')
            this->genero = 'H';
        else if (genero == 'M' || genero == 'm')
            this->genero = 'M';
        else
            this->genero = 'N';

        this->nombre = nombre;
        this->color = color;
        this->edad = edad;
    }

    string getNombre() { return nombre; }
    void setNombre(string new_name) { this->nombre = new_name; }
    string getColor() { return color; }
    string getGenero() { return genero == 'H' ? "Hembra" : genero == 'M' ? "Macho"
                                                                         : "No definido"; }
    int getEdad() { return edad; }
    void setEdad(int new_age) { edad = new_age < 0 ? 0 : new_age; }
};

class MichiLista
{
private:
    vector<Michi> lista;

public:
    void agregar(Michi m)
    {
        lista.push_back(m);
    }
    void agregar(string nombre, string color, char genero, int edad)
    {
        lista.push_back(Michi(nombre, color, genero, edad));
    }

    string listar()
    {
        string res = "Lista de mis Gatos\n";

        for (int i = 0; i < lista.size(); i++)
        {
            res += to_string(i + 1) + ". " + lista[i].getNombre() +
                   " - " + lista[i].getColor() + " - " + lista[i].getGenero() +
                   " - " + to_string(lista[i].getEdad()) + " meses\n";
        }

        return res;
    }
};

int main()
{
    MichiLista michilista;
    michilista.agregar("Naranjoso", "Naranja", 'M', 8);
    michilista.agregar(Michi("Blanquita", "Negro", 'H', 10));
    michilista.agregar("Shira", "Blanco", 'H', 6);

    cout << michilista.listar();

    return 0;
}
