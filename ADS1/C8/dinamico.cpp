/**
 * @file dinamico.cpp
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
    int *x;
    int *y;

public:
    Punto(int x, int y)
    {
        this->x = new int;
        this->y = new int;
        *this->x = x;
        *this->y = y;
    }

    ~Punto() {
        delete x;
        delete y;
    }

    int getX() { return *x; }
    int getY() { return *y; }
};

int main(int argc, char const *argv[])
{
    while(true) {
        Punto p(5,6);
    }

    return 0;
}
