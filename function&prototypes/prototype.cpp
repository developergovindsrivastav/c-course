#include<iostream>
using namespace std;
int product(int a, int b); // function prototype(accepetable)
// int product(int,int) - accepetable
// int product(int a,  b) - not accepetable
int main(){
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int result = product(num1, num2);
    cout << "The product of the two numbers is: " << result << endl;
return 0;
}
int product(int a, int b){
    //  int a , int b is formal parameter but num1 and num2 are actual parameter
    return a*b;
}