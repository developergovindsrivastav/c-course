#include<iostream>
using namespace std;
class construct{
  int a;
  int b;
  public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    construct(void);
    void printnum(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }  
};
construct :: construct(void){
    a=10;
    b=20;
    cout<<"constructor is called"<<endl;
}
int main(){
    construct c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
return 0;
}
/*
 *. A constructor should be declared in the public section of the class
 *. They are automatically invoked whenever the object is created
 *. They cannot return values and do not have return types
 *. It can have default arguments
 *. We cannot refer to their address
*/