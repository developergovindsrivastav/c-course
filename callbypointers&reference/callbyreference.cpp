#include<iostream>
using namespace std;
int swapbyreference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5,b = 10;
    cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;
    swapbyreference(a,b);
    cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;
return 0;
}