/**
 * @file masdinamico.cpp
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

class Punto
{
private:
    int x;
    int y;

public:
    Punto(int x, int y) : x(x), y(y) {}

    int getX() { return x; }
    int getY() { return y; }
};

int main()
{
    Punto *p = new Punto(5,6);

    cout << p->getX() << endl;
    cout << p->getY() << endl;

    delete p;

    return 0;
}
