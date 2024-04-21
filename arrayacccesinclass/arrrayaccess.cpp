#include<iostream>
using namespace std;
class arrayaccess{
    int a;
    int b;
    public:
     void setdata(){
         cout<<"enter the value of a"<<endl;
         cin>>a;
         cout<<"enter the value of b"<<endl;
         cin>>b;
     };
     void getdata(){
         cout<<"the value of a is"<<a<<endl;
         cout<<"the value of b is"<<b<<endl;
     }
};
int main(){
    arrayaccess arrrrrr[5];
    for (int  i = 0; i < 5; i++)
    {
        arrrrrr[i].setdata();
        arrrrrr[i].getdata();
    }
    
return 0;
}