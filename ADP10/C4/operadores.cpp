/**
 * @file operadores.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2023-10-18
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
    int x, y;

public:
    Punto(int x, int y) : x(x), y(y) {}

    int getX() { return x; }
    int getY() { return y; }

    string toString()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }

    // Declaracion
    friend Punto operator+(Punto a, Punto b);
};

// Definicion
Punto operator+(Punto a, Punto b)
{
    return Punto(a.x + b.x, a.y + b.y);
}

int main()
{
    Punto punto1(7, 6);
    Punto punto2(2, -7);
    Punto punto3 = punto1 + punto2;
    cout << punto3.toString() << endl;

    return 0;
}
