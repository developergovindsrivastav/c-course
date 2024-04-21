#include <iostream>
using namespace std;
class A
{
    int a, b;
    friend A sum(A o1, A o2);

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    };
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    };
};
A sum(A o1, A o2)
{
    A o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    A o1, o2,sum;
    o1.setdata(3, 4);
    o1.getdata();
    o2.setdata(5, 6);
    o2.getdata();
    sum =  sum(o1, o2);
    sum.getdata();

    return 0;
}