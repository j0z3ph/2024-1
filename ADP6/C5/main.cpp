/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

class Ejemplo {
    private:
    string name;

    public:
    // Constructor
    Ejemplo(string n) : name(n) {
        cout << "Ya naci " + name << endl;
    }

    // Destructor
    ~Ejemplo() {
        cout << "Ya me mori " + name << endl;
    }

};

int main()
{
    Ejemplo obj("Obj1");

    {
        Ejemplo obj2("Obj2");
    }

    return 0;
}
