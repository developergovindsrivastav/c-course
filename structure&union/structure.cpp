#include<iostream>
using namespace std;

int main(){
typedef struct student // many things can accces // typedef for acceessing by other name
{
    int rollno;
    string name;
    float marks;
} cp;
cp athrav;
athrav.rollno=17;
athrav.marks=90.5;
athrav.name="athrav";
// cout<<athrav.rollno<<endl;
// cout<<athrav.marks<<endl;
// cout<<athrav.name<<endl;
cp govind;
govind.rollno=39;
govind.marks = 96.5;
govind.name = "govind";
cout<<govind.rollno<<endl;
cout<<govind.marks<<endl;
cout<<govind.name<<endl;



return 0;
}
