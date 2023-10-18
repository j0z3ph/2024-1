/**
 * @file mishilista.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <list>
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
     * @param nombre Nombre del Gato
     * @param color Color del Gato
     * @param edad Edad en meses
     */
    Mishi(string nombre, string color, int edad)
    {
        this->nombre = nombre;
        this->color = color;
        this->edad = edad < 0 ? 0 : edad;
    }

    string getNombre() { return this->nombre; }
    void setNombre(string nuevo_nombre) { this->nombre = nuevo_nombre; }

    string getColor() { return this->color; }

    int getEdad() { return this->edad; }
    void setEdad(int nueva_edad)
    {
        this->edad = nueva_edad > this->edad ? nueva_edad : this->edad;
    }
};

class MishiLista
{
private:
    list<Mishi> lista;

public:
    void agregar(Mishi mishi)
    {
        lista.push_back(mishi);
    }
    void agregar(string nombre, string color, int edad)
    {
        lista.push_back(Mishi(nombre, color, edad));
    }

    string listar()
    {
        string str = "Mi Mishi Lista\n\n";
        int i = 0;
        for (auto mishi : lista)
        {
            str += to_string(i + 1) + ". " + mishi.getNombre() +
                   " - " + mishi.getColor() + " - " + to_string(mishi.getEdad()) +
                   " meses.\n";
            i++;
        }

        str += "\nTotal: " + to_string(lista.size()) + "\n";
        return str;
    }
};

int main()
{
    MishiLista lista;
    Mishi gato("Mazapan", "Cafe", 2);

    lista.agregar(gato);
    lista.agregar("Mandarino", "Naranja", 12);
    lista.agregar("Wero", "Negro", 3);

    cout << lista.listar();

    return 0;
}
