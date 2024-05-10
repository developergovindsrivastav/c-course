#include<iostream>
using namespace std;
class simple{
    int a,b;
    public:
    simple(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
int main(){
    // implicit call
    simple a(10,20);
    a.display();
    // explicit call
    simple b= simple(10,20);
    b.display();

return 0;

}