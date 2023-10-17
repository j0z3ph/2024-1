/**
 * @file operadores.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-17
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
    Punto(int x, int y) : x(x), y(y) {}

    int getX() { return x; }

    int getY() { return y; }

    string toString()
    {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
};

Punto operator+(Punto a, Punto b)
{
    return Punto(a.getX() + b.getX(), a.getY() + b.getY());
}

int main()
{
    Punto p1(5, 6);
    Punto p2(3, 4);
    Punto p3 = p1 + p2;

    cout << p3.toString();

    return 0;
}