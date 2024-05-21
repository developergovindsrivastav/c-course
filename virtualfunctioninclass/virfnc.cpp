#include<iostream>
using namespace std;
void funcout(int b,string a = "cout is"){
 cout<<a<<b<<endl;
}
class base {
    public:
         int var_base;
       virtual void display(){
            funcout(var_base,"the value of varr_base is ");

        }
};
class derived : public base{
    public:
        int var_derived;
        void display(){
            funcout(var_derived,"the value of var_derived is ");
            funcout(var_base,"the value of var_base is ");
        }
};
int main(){
    base *basepointer;
    derived d1;
    basepointer = &d1;
    basepointer->var_base = 10;
    basepointer->display();
    
return 0;
}