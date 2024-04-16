#include <iostream>
using namespace std;
class student
{
public:
    int marks, rollno;
    char grade;
    string name;
    void setdata(int r, string n, int m)
    {
        rollno = r;
        name = n;
        marks = m;
    }
    int checkdata();
    void display();
    void namechanger();

};
 int student::checkdata()
{
    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80)
    {
        grade = 'B';
    }
}
void student :: display(){

    cout << "rollno: " << rollno << endl;
    cout << "name: " << name << endl;
    cout << "marks: " << marks << endl;
    cout << "grade: " << grade << endl;
}
void student::namechanger(){
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            name[i] = '*';
        }
    }
    
}
int main()
{
    student athrav;
    athrav.setdata(17, "athrav", 90);
    athrav.checkdata();
    athrav.namechanger();
    athrav.display();

    return 0;
}