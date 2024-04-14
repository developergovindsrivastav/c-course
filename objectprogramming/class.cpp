#include<iostream>
using namespace std;

class student{
    private:
        string fathername;
        int marks;
        int rollno;
        string name;
    public:
        void setdata(int r, string n, string f, int m);
        void display(){
            cout << "rollno: " << rollno << endl;
            cout << "name: " << name << endl;
            cout << "fathername: " << fathername << endl;
            cout << "marks: " << marks << endl;
        }
};

void student::setdata(int r, string n, string f, int m){
    rollno = r;
    name = n;
    fathername = f;
    marks = m;
}

int main(){
    student govind;
    govind.setdata(1, "Govind", "John", 85);
    govind.display();
    return 0;
}
