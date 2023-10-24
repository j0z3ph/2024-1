/**
 * @file multiple.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

class A {
    public:
    void fun() {
        cout << "Clase A" << endl;
    }
};
class B {
    public:
    void fun() {
        cout << "Clase B" << endl;
    }
};
class C {
    public:
    void fun() {
        cout << "Clase C" << endl;
    }
};

class D : public A, public B, public C {

};

int main(int argc, char const *argv[])
{
    D d;
    d.B::fun();
    
    return 0;
}
