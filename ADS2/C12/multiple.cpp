/**
 * @file multiple.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

class A {
    public:
    void funcion() {
        cout << "A" << endl;
    }
};
class B {
    public:
    void funcion() {
        cout << "B" << endl;
    }
};
class C {
    public:
    void funcion() {
        cout << "C" << endl;
    }
};

class D: public A, public B, public C {

};
int main()
{
    D d;
    d.funcion();
    
    return 0;
}
