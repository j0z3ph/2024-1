/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string>

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

    int getX() { return this->x; }
    int getY() { return this->y; }

    Punto suma(Punto a, Punto b)
    {
        return Punto(a.x + b.x, a.y + b.y);
    }

    Punto suma(int xa, int xb, int ya, int yb)
    {
        return Punto(xa + xb, ya + yb);
    }

    string toString()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }

    friend Punto operator+(Punto a, Punto b)
    {
        return Punto(a.x + b.x, a.y + b.y);
    }

    friend Punto operator-(Punto a, Punto b)
    {
        return Punto(a.x - b.x, a.y - b.y);
    }
};

int main(int argc, char const *argv[])
{
    Punto p1(3, 4);
    Punto p2(6, 5);
    Punto res = p1 - p2;

    cout << res.toString() << endl;

    return 0;
}
