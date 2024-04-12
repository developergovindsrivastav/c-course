#include<iostream>
using namespace std;
int & change(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a= 5,b= 2;
    change(a,b)= 766 ;
    cout<<a<<endl<<b<<endl;
return 0;
}