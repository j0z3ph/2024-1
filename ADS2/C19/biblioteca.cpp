#include  "biblioteca.hpp"

using namespace bib;

Empleado::Empleado(int n, string nom) : numero(n), nombre(nom) {}

int Empleado::Numero() { return numero; }
string Empleado::Nombre() { return nombre; }