#include<iostream>
using namespace std;
int product(int a, int b){
    return a*b;
}
int product(int a, int b, int c){
    return a*b*c;
}
int volume(int l, int b, int h){
    return l*b*h;
}
int volume(int r, int h){
    return 3.14*r*r*h;
}
float volume(int r){
    return 3.14*r*r;
}
int main(){
    // cout<<"the product of two numbers is"<<product(2,3)<<endl<<"the product of three numbers is"<<product(2,3,4);
    cout<<"the volume of cuboid is"<<volume(2,3,4)<<endl;
    cout<<"the volume of cyclinder is"<<volume(5,6)<<endl;
    cout<<"the volume of circle is"<<volume(5)<<endl;
return 0;
}