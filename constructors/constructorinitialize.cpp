#include <iostream>
using namespace std;
void funcout(int b, string a = "cout")
{
    cout << a << b << endl;
}
class test
{
    int a;
    int b;

public:
    // test(int x, int y) : a(x), b(y)
    // test(int i, int j) : b(j), a(i+b) order according to varible
    test(int i, int j) : a(i), b(a + j)
    {
        cout << "constructor is called" << endl;
        funcout(a, "value of a");
        funcout(b, "value of b");
    }
};
int main()
{
    test t(10, 20);
    
    return 0;
}