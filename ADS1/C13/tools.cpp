/**
 * @file tools.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template <typename T>
T suma(T a, T b)
{
    return a + b;
}

enum Dias
{
    Lunes = 10,
    Martes = -2,
    Miercoles = 15,
    Jueves = 1,
    Viernes = 8,
    Sabado,
    Domingo = 11
};

int main()
{
    time_t now = time(0);
    tm *ahora = localtime(&now);

    cout << ahora->tm_mday << endl
         << ahora->tm_mon + 1 << endl
         << ahora->tm_year + 1900 << endl
         << ahora->tm_hour << endl
         << ahora->tm_min << endl
         << ahora->tm_sec << endl
         << ahora->tm_zone << endl;

    cout << now << endl;

    Dias hoy = Jueves;

    hoy = Viernes;

    cout << hoy << endl;
    vector<int> lista;
    cout << suma<string>("Hola ", "Todas y Todos") << endl;
    return 0;
}
