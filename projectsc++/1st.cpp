// calculator
#include <iostream>
using namespace std;
void funcout(int b, string a = "cout is")
{
    cout << a << b << endl;
}
class calculator
{
    int a, b;

public:
    calculator(int x, int y)
    {
        this->a = x;
        this->b = y;
        int opertaor;
        cout << "enter the operator" << endl;
        cin >> opertaor;
        switch (opertaor)
        {
        case 1:
            cout << "the sum is " << a + b << endl;
            break;
        case 2:
            cout << "the difference is " << a - b << endl;
            break;
        case 3:
            cout << "the product is " << a * b << endl;
            break;
        case 4:
            cout << "the division is " << a / b << endl;
            break;
        case 5:
            cout << "the modulus is " << a % b << endl;
            break;
        default:
            cout << "invalid " << endl;
        }
    }
};
int main()
{
    int input1, input2;
    cout << "enter the first number " << endl;
    cin >> input1;
    cout << "enter the second number " << endl;
    cin >> input2;
    calculator obj(input1, input2);

    return 0;
}