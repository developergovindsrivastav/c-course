#include <iostream>
// #include <format>
using namespace std;
void funcout(int b, string a = "the messsage is ")
{
    cout << a << b << endl;
}
int main()
{
    int a = 5;
    int *ptr = &a;
    funcout(*ptr);
    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    delete[] arr;
    for (int i = 0; i < 5; i++)
    {
        funcout(arr[i], "the value of arr[]is");
    }

    return 0;
}