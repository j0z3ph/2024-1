/**
 * @file herencia2.cpp
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

class A{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};

class B : public A {
    // a - public
    // b - protected
};

class C : protected A {
    // a - protected
    // b - protected
};

class D : private A {
    // a - private
    // b - private
};

int main()
{
    A a;
    a.a = 10;
    B b;
    b.a = 10;
    C c;
    //c.a = 10;
    D d;
    //d.a = 10;
    
    return 0;
}
