#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int* p1 = &a;
    cout << "value of a = " << a<< endl;
    cout << "value stored at address p1 = " << p1 << endl;
    cout << "value of a after updating p1 = " << a << endl;

    return 0;

    int** p2 = &p1;
    cout << "address of p1 is stored at address p2 = " << p2 << endl;
    cout << "value stored at address p2 = " << *p2 << endl;
}