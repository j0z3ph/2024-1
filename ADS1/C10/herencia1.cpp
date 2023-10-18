/**
 * @file herencia1.cpp
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
};

class Mishi : public Animal
{
public:
    void habla()
    {
        this->genero = "Macho";
        cout << "Rauuuulll" << endl;
    }
};

int main()
{
    Animal a;

    a.come();
    a.duerme();

    Mishi gato;

    gato.habla();
    gato.come();
    gato.duerme();

    return 0;
}
