#include<iostream>
using namespace std;
int sum(int a ,int b , int c = 5){
    return a*b+c;
}
int main(){
    int a = 10,b = 5;
    cout<<"the sum of a and b "<<sum(a,b);
    cout<<"the sum of a and b "<<sum(a,b,10);
return 0;
}