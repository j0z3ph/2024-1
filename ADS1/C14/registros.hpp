#ifndef __REGISTROS_HPP
#define __REGISTROS_HPP
#include<string>
#include<ctime>
#include<vector>

using namespace std;

namespace reg {

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
    DateTime();

    int Dia();
    int Mes();
    int Anio();
    int Hora();
    int Minuto();
    int Segundo();
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

class Libro
{
private:
    vector<Empleado> lista_empleado;

public:
    Libro()
    {
        lista_empleado.push_back(Empleado("Iker", 1, RRHH, Chalan, Completo));
        lista_empleado.push_back(Empleado("Isac", 2, RRHH, Chalan, Matutino));
        lista_empleado.push_back(Empleado("Null", 3, RRHH, Chalan, Vespertino));
        lista_empleado.push_back(Empleado("Manuel", 4, RRHH, Chalan, MedioTiempo));
    }

    Empleado *Buscar(unsigned int numero)
    {
        Empleado *ptr = NULL;
        for (int i = 0; i < lista_empleado.size(); i++)
        {
            if (lista_empleado[i].NumeroEmpleado() == numero)
            {
                ptr = &lista_empleado[i];
                break;
            }
        }
        return ptr;
    }
};

}
#endif
