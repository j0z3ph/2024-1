#include <iostream>

using namespace std;

class Persona
{
private:
    int edad;

public:
    Persona(int edad)
    {
        if (edad <= 0)
            throw "Error: Solo se permiten edades mayor a cero.";
        else
            this->edad = edad;
    }
};

int main()
{
    try
    {
        Persona jesus(2013);
    }
    catch(const char * err)
    {
        std::cerr << err << '\n';
    }
    
    

    return 0;
}
