#include <iostream>
using namespace std;
void funcout(int b, string a = "cout is ")
{
    cout << a << b << endl;
}
class complex
{
    int x, y;

public:
    void setdata(int a, int b);
    void getdata();
};
void complex::setdata(int a, int b)
{
    x = a;
    y = b;
}
void complex::getdata()
{
    funcout(x, "the value of x is ");
    funcout(y, "the value of y is ");
}
int main()
{
    complex c1;
    // c1.setdata(4,5);
    // c1.getdata();
    complex *cptr = &c1;//? this cptr pointing to c1 
// * this up syntax is also known as dereferencing operator and used as a syntax
    (*cptr).setdata(4, 5);
    (*cptr).getdata();
    complex *prt = new complex[4];
    prt->setdata(4, 5);//* this syntax is also known as indirection operator and work as a syntax just before 
    prt->getdata();
    prt->setdata(4, 5);
    return 0;
}