#include <iostream>
using namespace std;
int funcout(string f)
{
    cout << f << endl;
}
class number
{
private:
    int count;

public:
    number();
    ~number();
};

number::number()
{
    count = 0;
    funcout("constructor called");
}

number::~number()
{
    funcout("destructor called");
}

int main()
{
    funcout("main");
    number n1;
    {
        funcout("block1");
        number n2;
        funcout("exit block1");
    }
    return 0;
}