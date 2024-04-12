#include<iostream>
using namespace std;
inline int product(int a, int b){
    // below line not used in inline function
    static int c = 0;
    c = c+1;
     return a*b+c;
}
int main(){
    int a = 5 ,b= 10;
    cout<<"the sum of a and b is"<<product(a,b);
    cout<<"the sum of a and b is"<<product(a,b);
    cout<<"the sum of a and b is"<<product(a,b);
    cout<<"the sum of a and b is"<<product(a,b);
return 0;
}