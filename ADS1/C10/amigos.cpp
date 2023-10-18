/**
 * @file amigos.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Mishi
{
private:
    string nombre;
    string color;

public:
    Mishi() {}
    Mishi(string nombre, string color) : nombre(nombre), color(color) {}

    string getNombre()
    {
        return this->nombre;
    }
    friend void setNombreMishi(string nombre, Mishi &m);

};

void setNombreMishi(string nombre, Mishi &m) {
    m.nombre = nombre;
}

int main()
{
    Mishi m;
    
    setNombreMishi("Mandarino", m);

    cout << m.getNombre() << endl;

    return 0;
}

