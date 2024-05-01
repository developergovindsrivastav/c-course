#include <iostream>
#include <typeinfo>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void funcout(int b,string a = "cout is "){
    cout<<a<<b<<endl;
}
void derived::display(){
    funcout(getdata1(),"data1 is ");
    funcout(data2,"data2 is ");
    funcout(data3,"data3 is ");
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}


