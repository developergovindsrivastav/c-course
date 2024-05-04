#include <iostream>
using namespace std;
void funcout(int b, string a = "cout is")
{
    cout << a << b << endl;
}

class base1
{
protected:
    int rollno;

public:
    void setrollno(int r)
    {
        rollno = r;
    }
    void getrollno()
    {
        cout << "the roll no is " << rollno << endl;
    }
};
class exam : public base1
{
protected:
    int marks;

public:
    void setmarks(int m)
    {
        marks = m;
    }
    void getmarks()
    {
        cout << "the marks is " << marks << endl;
    }
};
class result : public exam
{
public:
    void display()
    {
        cout << "the roll no is " << rollno << " and marks is " << marks << endl;
    }
};
int main()
{
    result rohan;
    rohan.setrollno(1);
    rohan.setmarks(90);
    rohan.display();
    return 0;
}