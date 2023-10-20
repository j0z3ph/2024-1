/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-19
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include<vector>

using namespace std;

class Alumno
{
private:
    string nombre;
    string cuenta;

public:
    Alumno(string nombre, string cuenta) : nombre(nombre), cuenta(cuenta)
    {
    }

    string getNombre()
    {
        return this->nombre;
    }

    string getCuenta()
    {
        return cuenta;
    }
};

int main()
{
    vector<Alumno> lista;

    lista.push_back(Alumno("Jesus", "762537623"));
    Alumno a("Jesus", "7653762");

    cout << a.getNombre() << endl;
    cout << a.getCuenta() << endl;

    return 0;
}
