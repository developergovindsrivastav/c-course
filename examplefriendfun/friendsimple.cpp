#include <iostream>
using namespace std;
class b;
class a
{
    int data;

public:
    void dataset(int x)
    {
        data = x;
    }
    friend void add(a, b);
};
class b
{
    int num;

public:
    void dataset(int x)
    {
        num = x;
    }

    friend void add(a, b);
};

void add(a a1, b b1)
{
    cout << a1.data + b1.num << endl;
}
int main()
{
    a a1;
    b b1;
    a1.dataset(3);
    b1.dataset(5);
    add(a1, b1);
    return 0;
}