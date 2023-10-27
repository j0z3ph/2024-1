/**
 * @file utils.cpp
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

using namespace std;

typedef int entero;

template <typename T>
T suma(T a, T b)
{
    return a + b;
}

enum Dia
{
    Lunes = 5,
    Martes = 1,
    Miercoles = -10,
    Jueves = 8,
    Viernes,
    Sabado,
    Domingo = 12
};

int main()
{
    Dia hoy;
    hoy = Jueves;
    hoy = Viernes;

    cout << hoy << endl;

    cout << suma<int>('0', 1) << endl;

    return 0;
}
