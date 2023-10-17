/**
 * @file dinamico.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
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

class Mishi
{
private:
    string nombre;
    string color;
    int edad;

public:
    /**
     * @brief Construct a new Mishi object
     *
     * @param name El nombre del mishi
     * @param colour El color dle mishi
     * @param age La edad en meses
     */
    Mishi(string name, string colour, int age)
    {

        this->nombre = name;
        this->color = colour;
        this->edad = age < 0 ? 0 : age; // Si la edad es negativa, asigno 0
    }

    string getNombre() { return nombre; }

    void setNombre(string newName) { nombre = newName; }

    string getColor() { return color; }

    int getEdad() { return edad; }

    void setEdad(int newAge) { edad = newAge < 0 ? 0 : newAge; }
};

class MishiLista
{
private:
    vector<Mishi *> lista;

public:
    ~MishiLista()
    {
        for (int i = 0; i < lista.size(); i++)
        {
            delete lista[i];
        }
        lista.clear();
    }

    int size() { return lista.size(); }

    void agregar(Mishi *m)
    {
        lista.push_back(m);
    }

    void agregar(string nombre, string color, int edad)
    {
        lista.push_back(new Mishi(nombre, color, edad));
    }

    string listar()
    {
        string str = "Lista de Mishis\n\n";

        for (int i = 0; i < lista.size(); i++)
        {
            str += to_string(i + 1) + ". " + lista[i]->getNombre() +
                   " - " + lista[i]->getColor() + " - " + to_string(lista[i]->getEdad()) +
                   " meses\n";
        }
        return str;
    }
};

int main()
{
    MishiLista lista;

    lista.agregar(new Mishi("Mandarino", "Naranja", 7));
    lista.agregar("Blanquita", "Negro", 10);
    lista.agregar("Chabelo", "Gris", 12);

    cout << lista.listar();

    return 0;
}
