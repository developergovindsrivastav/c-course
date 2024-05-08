#include<iostream>
using namespace std;

class base1{
int data1;
public:
    base1(int a){
        data1=a;
        cout<<"base1 class constructor is called"<<endl;
    }
    void display1(){
        cout<<"the value of data1 is "<<data1<<endl;
    }
};
class base2{
int data2;
public:
    base2(int a){
        data2=a;
        cout<<"base2 class constructor is called"<<endl;    
    }
    void display2(){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};
class derived : public base1,public base2{
    int data3;
    public:
    derived(int a,int b,int c):base1(a),base2(b){
        data3=c;
        cout<<"derived class constructor is called"<<endl;
    }
    void display3(){
        cout<<"the value of data3 is "<<data3<<endl;
    }
};

int main(){
    derived d1(2,4,6);
    d1.display1();
    d1.display2();
    d1.display3();
    

return 0;
}