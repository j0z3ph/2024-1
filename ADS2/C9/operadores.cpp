/**
 * @file operadores.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-13
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
    Punto(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }

    friend Punto operator+(Punto c, Punto a)
    {
        Punto p(c.x + a.x, c.y + a.y);
        return p;
    }
};

int main(int argc, char const *argv[])
{
    Punto p(5, 6);
    Punto p2(7, 8);
    Punto c = p + p2;
    cout << c.getX() << "," << c.getY() << endl;

    return 0;
}
