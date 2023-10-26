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

using namespace std;

template <typename T>
T suma(T a, T b)
{
    return a + b;
}

enum Dias
{
    Gluglunes,
    Mamartes,
    Miercolitros,
    Juebebes,
    Bebiernes,
    Sabradrinks,
    Pomingo
};

int main()
{
    Dias hoy;
    hoy = Juebebes;

    hoy = Pomingo;

    cout << hoy << endl;

    vector<int> lista;
    cout << suma<double>(5.6, 5);

    return 0;
}
