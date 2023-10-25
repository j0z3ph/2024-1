/**
 * @file multiple.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-10-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

using namespace std;

class A {
    public:
    void fun(){
        cout << "Soy A";
    }
};

class B {
    public:
    void fun(){
        cout << "Soy B";
    }
};

class C {
    public:
    void fun(){
        cout << "Soy C";
    }
};

class Mole : public A, public B, public C {

};

int main()
{
    Mole m;
    m.fun();
    return 0;
}
