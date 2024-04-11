#include<iostream>
using namespace std;

int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int result = product(num1, num2);
    cout << "The product of the two numbers is: " << result << endl;
    return 0;
}
