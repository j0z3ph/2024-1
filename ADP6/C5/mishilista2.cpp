/**
 * @file mishilista.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <list>

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
     * @param nombre Nombre del gato
     * @param color Color del gato
     * @param edad Edad en meses
     */
    Mishi(string nombre, string color, int edad)
    {
        this->nombre = nombre;
        this->color = color;
        this->edad = edad < 0 ? 0 : edad;
    }

    string getNombre() { return nombre; }
    void setNombre(string nuevo_nombre) { nombre = nuevo_nombre; }

    string getColor() { return color; }

    int getEdad() { return edad; }

    void setEdad(int nueva_edad)
    {
        edad = nueva_edad > edad ? nueva_edad : edad;
    }
};

class MishiLista
{
private:
    list<Mishi> lista;

public:
    void agregar(Mishi m)
    {
        lista.push_back(m);
    }

    void agregar(string nombre, string color, int edad)
    {
        lista.push_back(Mishi(nombre, color, edad));
    }

    string listar()
    {
        string str = "Mis Mishis\n\n";
        int i = 0;
        for (auto mishi : lista)
        {
            str += to_string(i + 1) + ". " + mishi.getNombre() +
                   " - " + mishi.getColor() + " - " +
                   to_string(mishi.getEdad()) +
                   " meses\n";
            i++;
        }

        str += "\nTotal: " + to_string(lista.size());

        return str;
    }
};

int main()
{
    MishiLista lista;
    Mishi mishi("orchato", "negro", 12);

    lista.agregar(mishi);
    lista.agregar("Mandarino", "Naranja", 8);
    lista.agregar("Sombra", "Blanco", 14);

    cout << lista.listar();

    return 0;
}
