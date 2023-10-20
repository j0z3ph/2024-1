#include <iostream>

using namespace std;

class Fun
{
private:
    int *var;

public:
    Fun()
    {
        var = new int;
    }
    ~Fun() {
        delete var;
    }
};

int main(int argc, char const *argv[])
{
    for (;;)
    {
        Fun *objeto = new Fun();
        delete objeto;
    }

    return 0;
}
