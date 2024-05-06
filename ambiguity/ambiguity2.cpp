#include<iostream>
using namespace std;
void funcout(string b,string a = "the messsage is"){
 cout<<a<<b<<endl;
}
class base{
    public:
    void greet(){
        funcout("hello");
    }
};
class derivesd:public base{
    int a;
    public:
    // it can use separetely if you want to use it in base class
    // void greet(){
    //     cout<<"hello world"<<endl;        
    // }

};
int main(){
    derivesd d;
    d.greet();
return 0;
}