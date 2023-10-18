/**
 * @file herencia3.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Animal
{
private:
    string nombre;

protected:
    string genero;

public:
    void come()
    {
        cout << "Estoy comiendo." << endl;
    }
    void duerme()
    {
        cout << "Estoy durmiendo." << endl;
    }

    void habla()
    {
        cout << "Estoy hablando." << endl;
    }
};

class Mishi : public Animal
{
public:
    // Sobre escritura (Override)
    void habla()
    {
        cout << "Rauuuuul" << endl;
    }

    // Sobre carga (Overload)
    void habla(string msg) {
        cout << msg << endl;
    }
};

int main()
{
    Mishi m;
    m.habla();
    m.habla("Mensaje");
    m.Animal::habla();

    return 0;
}
