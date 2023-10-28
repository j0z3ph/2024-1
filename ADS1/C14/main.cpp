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
#include <ctime>

using namespace std;

enum Areas
{
    Vigilancia,
    RRHH,
    Ventas,
    Mantenimiento,
    Ingenieria,
    Contabilidad,
    Marketing,
    Manufactura,
    AtencionCliente
};

enum Cargos
{
    Vigilante,
    Ayudante,
    Gerente,
    Chalan,
    GC,
    Secretario
};

enum Turnos
{
    Completo,
    MedioTiempo,
    Matutino,
    Vespertino,
    Diurno
};

class DateTime
{
private:
    int dia, mes, anio, hora, minuto, segundo;

public:
    DateTime()
    {
        time_t tt = time(0);
        tm *ahora = localtime(&tt);
        dia = ahora->tm_mday;
        mes = ahora->tm_mon + 1;
        anio = ahora->tm_year + 1900;
        hora = ahora->tm_hour;
        minuto = ahora->tm_min;
        segundo = ahora->tm_sec;
    }

    int Dia() { return dia; }
    int Mes() { return mes; }
    int Anio() { return anio; }
    int Hora() { return hora; }
    int Minuto() { return minuto; }
    int Segundo() { return segundo; }
};

class Empleado
{
private:
    string nombre;
    unsigned int num_empleado;
    Areas area;
    Cargos cargo;
    Turnos turno;

public:
    Empleado(string nombre, unsigned int num_empleado,
             Areas area, Cargos cargo,
             Turnos turno) : nombre(nombre),
                             num_empleado(num_empleado),
                             area(area), cargo(cargo),
                             turno(turno) {}

    string Nombre() { return nombre; }
    unsigned int NumeroEmpleado() { return num_empleado; }
    Areas Area() { return area; }
    Cargos Cargo() { return cargo; }
    Turnos Turno() { return turno; }

    void Area(Areas area) { this->area = area; }
    void Cargo(Cargos cargo) { this->cargo = cargo; }
    void Turno(Turnos turno) { this->turno = turno; }
};

class Visitante
{
private:
    string nombre;
    unsigned int id;

public:
    Visitante(string nombre, unsigned int id)
        : nombre(nombre), id(id) {}

    string Nombre() { return nombre; }
    unsigned int ID() { return id; }
};

class RegistroEmpleado
{
private:
    string nombre;
    unsigned int num_emp;
    Areas area;
    Cargos cargo;
    Turnos turno;
    DateTime date_time;

    public:
    
};

int main()
{

    return 0;
}
