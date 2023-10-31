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
#include <vector>
#include "registros.hpp"

using namespace std;
using namespace reg;


int main()
{

    reg::Libro libro;
    Empleado* found = libro.Buscar(7);
    if(found == NULL) {
        cout << "No encontrado" << endl;
    } else {
        cout << found->Nombre() << endl;
    }

    return 0;
}
