#include<iostream>
using namespace std;
class simple{
    int x,y;
    public:
        simple(){
            x=0;
            y=0;
        }
        simple(int a,int b){
            x=a;
            y=b;    
        }
        simple(int a){
            x=a;
            y=0;
        }
        void display(){
            cout<<"the value of x is "<<x<<endl;
            cout<<"the value of y is "<<y<<endl;
        }
};
int main(){
    simple s1;
    s1.display();
    simple s2(10);
    s2.display();
    simple s3(10,20);
    s3.display();
return 0;
}