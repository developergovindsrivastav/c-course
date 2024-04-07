#include <iostream>
using namespace std;
/*output {  very important
true = 1
false = 0
}*/
int main()
{
    bool a = true;
    int c = 10;
    int d = 5;
    if (c > d)
    {
        a = false;
        cout << a;
    }
    else if (d > c)
    {
        a = true;
        cout << a;
    }
    else
    {
        a = false;
        cout << a;
    }
}