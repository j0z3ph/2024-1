#include <iostream>

using namespace std;

class Matrix
{
public:
    int m[2][2];
    Matrix traspuesta() {
        Matrix res;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                res.m[j][i] = this->m[i][j];
            }
            
        }
        

        return res;
    }
};

Matrix operator+(Matrix &a, Matrix &b)
{
    Matrix res;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res.m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }

    return res;
}

ostream &operator<<(ostream &os, Matrix &m)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            os << m.m[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

int main(int argc, char const *argv[])
{
    Matrix m1, m2, res;
    m1.m[0][0] = 1;
    m1.m[0][1] = 2;
    m1.m[1][0] = 3;
    m1.m[1][1] = 4;

    m2.m[0][0] = 1;
    m2.m[0][1] = 2;
    m2.m[1][0] = 3;
    m2.m[1][1] = 4;

    res = m1 + m2;

    Matrix res2 = m1 + m2;

    cout << res;
    cout << res2;

    Matrix res3 = res2.traspuesta();

    cout << res3;

    return 0;
}
