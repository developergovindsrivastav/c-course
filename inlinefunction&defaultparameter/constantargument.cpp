#include<iostream>
using namespace std;
int sum(int a ,int b,const int p  = 10){
    return p*5+(a+b);
}
int main(){
    cout<<"the sum of"<<sum(5,6);
return 0;
}