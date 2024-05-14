#include <iostream>
using namespace std;
void funcout(int b, string a = "cout is")
{
    cout << a << b << endl;
}
class age
{
    float weight, height;

public:
    age(float weight, float height)
    {
        this->height = height;
        this->weight = weight;
    }
    void printbmi()
    {
        int bmi = weight / (height * height);
        funcout(bmi, "your bmi is ");
    }
};
int main()
{
    float height, weight;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the weight and height" << endl;
        cin >> weight >> height;
        age a(weight, height);
        a.printbmi();
    }

    return 0;
}