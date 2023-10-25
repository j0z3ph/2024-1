/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-25
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

class Persona
{
private:
    int edad;
    double estatura;

public:
    Persona(int edad, double estatura)
    {
        if (edad < 0)
        {
            throw "Error: solo se permiten edades mayores a cero.";
        }
        else
            this->edad = edad;

        if (estatura <= 1.0)
            throw -1.7;
        else
            this->estatura = estatura;
    }
};

int main()
{
    try
    {
        Persona jesus(2023, 1.8);
    }
    catch(const char * err)
    {
        std::cerr << err << '\n';
    }
    catch(const int err) {
        if(err == -1) {
            cerr << "No se aceptan chaneques." << endl;
        }
    }
    catch(...) {
        cerr << "Upss, error." << endl;
    }
    
    

    return 0;
}
