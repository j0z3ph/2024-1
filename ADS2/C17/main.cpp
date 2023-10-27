/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

enum Turnos
{
    Matutino,
    Vespertino,
    Nocturno,
    Completo
};

enum Cargos
{
    Vigilante,
    Secretarie,
    Vendedor,
    Gerente,
    Supervisor,
    Ayudante,
    GC
};

enum Areas
{
    RRHH,
    Ventas,
    Marketing,
    Finanzas,
    CEO,
    CEOJr
};

class Empleado
{
private:
    string nombre;
    unsigned int no_empleado;
    Areas area;
    Cargos cargo;
    Turnos turno;

public:
    Empleado(string nombre, unsigned int no_empleado,
             Areas area, Cargos cargo,
             Turnos turno) : nombre(nombre),
                             no_empleado(no_empleado),
                             area(area),
                             cargo(cargo),
                             turno(turno) {}
    string Nombre() { return nombre; }
    unsigned int NumeroEmpleado() { return no_empleado; }
    Areas Area() { return area; }
    Cargos Cargo() { return cargo; }
    Turnos Turno() { return turno; }

    void Area(Areas area) { this->area = area; }
    void Cargo(Cargos cargo) { this->cargo = cargo; }
    void Turno(Turnos turno) { this->turno = turno; }
};

class Visita
{
private:
    string nombre;
    unsigned int id;

public:
    Visita(string nombre, unsigned int id) : nombre(nombre), id(id) {}
    
};

int main()
{

    return 0;
}
