/**
 * @file constructor.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-12
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Contacto
{
private:
    string nombre;
    string numero;
    int edad;

public:
    Contacto()
    {
        edad = 0;
    }
    Contacto(string name, string number, int age)
    {
        nombre = name;
        numero = number;
        edad = age;
    }

    string getNombre()
    {
        return nombre;
    }

    string getNumero()
    {
        return numero;
    }

    int getEdad()
    {
        return edad;
    }
};

int main()
{
    Contacto cont("Julio", "12356737", 33);
    Contacto cont1;

    cout << cont.getNombre() << endl;
    cout << cont.getNumero() << endl;
    cout << cont.getEdad() << endl;
    return 0;
}
