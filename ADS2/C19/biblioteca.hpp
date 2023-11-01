#ifndef __BIBLIOTECA_HPP__
#define __BIBLIOTECA_HPP__
#include <iostream>

using namespace std;

namespace bib
{

    class Empleado
    {
    private:
        int numero;
        string nombre;

    public:
        Empleado(int n, string nom);

        int Numero();
        string Nombre();
    };

}

#endif