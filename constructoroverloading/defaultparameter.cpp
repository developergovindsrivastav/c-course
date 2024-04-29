#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int x,int y=0){
            a=x;
            b=y;
        }
        complex(float a,float b = 9.55){
            a=a;
            b=b;
        }
        void print(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    complex c1(9);
    c1.print();
    complex c2(2);
    c2.print();
return 0;
}