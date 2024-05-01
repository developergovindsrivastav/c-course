#include <iostream>
using namespace std;
int fun(int s)
{
    cout << s << endl;
}
class baseclass
{
public:
    int id;
    int salary;
    baseclass(int id, int salary)
    {
        fun(id);
        fun(salary);
    }
    baseclass() {}
};
class derivedclass : public baseclass
{
public:
    int laungage = 9;
    derivedclass()
    {
        fun(laungage);
    }
};
int main()
{
    baseclass(1, 344);
    derivedclass obj;
    cout << obj.laungage;
    return 0;
}