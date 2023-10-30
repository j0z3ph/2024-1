/**
 * @file fechas.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-30
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <ctime>

using namespace std;

class DateTime
{
private:
    int dia, mes, anio, hora, minuto, segundo;

public:
    DateTime()
    {
        time_t fecha = time(0);
        tm *ahora = localtime(&fecha);
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

ostream &operator<<(ostream &os, DateTime &dt)
{
    os << dt.Dia() << "/" << dt.Mes() << "/" << dt.Anio() << " "
       << dt.Hora() << ":" << dt.Minuto() << ":" << dt.Segundo() << endl;
    return os;
}

int main(int argc, char const *argv[])
{
    DateTime ahora;

    cout << ahora;

    return 0;
}
