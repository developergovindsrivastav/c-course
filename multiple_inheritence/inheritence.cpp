#include <iostream>
using namespace std;
void funcout(int b, string a = "cout is")
{
    cout << a << b << endl;
}
class base1
{
protected:
    int baseint1;
public:
    void setbase1(int x){

        baseint1 = x;
    }
};
class base2
{
protected:
    int baseint2;
public:
    void setbase2(int x){

        baseint2 = x;
    }
};
class base3
{
protected:
    int baseint3;
public:
    void setbase3(int x){

        baseint3 = x;
    }
};
class derived : public base1, public base2, public base3{
    public:
        void display(){
            funcout(baseint1,"data1 is ");
            funcout(baseint2,"data2 is ");
            funcout(baseint3,"data3 is ");
            funcout(baseint1+baseint2+baseint3,"the sum of data is ");
        }
        
};
int main()
{
    derived d1;
    d1.setbase1(10);
    d1.setbase2(20);
    d1.setbase3(30);
    d1.display();
    return 0;
}