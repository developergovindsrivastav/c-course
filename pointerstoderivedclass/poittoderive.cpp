#include<iostream>
using namespace std;
void funcout(int b,string a = "cout is"){
 cout<<a<<b<<endl;
}
class base {
    public:
        int var_base;
        void display(){
            funcout(var_base,"the value of varr_base is ");

        }
};
class derived : public base{
    public:
        int var_derived;
        void display(){
            funcout(var_derived,"the value of var_derived is ");
        }
};

int main(){
base *basepointer;
derived d1;
basepointer = &d1;
basepointer->var_base = 10;
basepointer->display();
derived *derivedpointer;
derivedpointer = &d1;
derivedpointer->var_base = 1000;
derivedpointer->base::display();
derivedpointer->var_derived =  200;
derivedpointer->derived::display();

return 0;
}