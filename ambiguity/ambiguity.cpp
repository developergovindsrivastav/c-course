#include <iostream>
using namespace std;
void funcout(string b, string a = "cout is")
{
    cout << a <<  '\n'  << b << endl;
}
class base
{
public:
    void greet()
    {
        string a = "hello";
        funcout(a);
    }
};
class base2
{
public:
    void greet()
    {
        string b = "hii";
        funcout(b);
    }
};
class base3
{
public:
    void greet()
    {
        string c = "namaste";
        funcout(c);
    }
};
class derived : public base, public base2, public base3{
public:
    void greet(){
        base::greet();
    }
};
int main()
{
    derived d;
    d.greet();
    return 0;
}