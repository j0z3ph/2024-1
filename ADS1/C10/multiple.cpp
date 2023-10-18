/**
 * @file multiple.cpp
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

class Mama {
    public:
    void habla() {
        cout << "Soy la mama." << endl;
    }
};

class Papa {
    public:
    void habla() {
        cout << "Soy el papa." << endl;
    }
};

class Hija : public Mama, public Papa {

};

int main()
{
    Hija h;
    h.Mama::habla();
    return 0;
}
