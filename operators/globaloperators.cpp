#include<iostream>
// for accesing the global var we use '::' operator in c++

using namespace std;
int a = 50;
int main(){
int a = 1000;
cout<<"local operator variable value is:"<<a<<endl;
cout<<"local operator variable value is:"<<::a<<endl;
}