#include "registros.hpp"

using namespace reg;

DateTime::DateTime()
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

int DateTime::Dia() { return dia; }
int DateTime::Mes() { return mes; }
int DateTime::Anio() { return anio; }
int DateTime::Hora() { return hora; }
int DateTime::Minuto() { return minuto; }
int DateTime::Segundo() { return segundo; }