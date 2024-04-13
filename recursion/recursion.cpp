// recursion means function calling itself
// Recursion is a function that calls itself. It is a function that has a call to itself inside its definition.
#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
    /*
    first n= 5
    then 5*factorial(4)
    then 5*4*factorial(3)
    then 5*4*3*factorial(2)
    then 5*4*3*2*factorial(1)
    when n = 1
    then 5*4*3*2*1
    */
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the factorial is "<<factorial(n);
return 0;
}