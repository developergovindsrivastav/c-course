#include <iostream>
using namespace std;

class c2; // Forward declaration

class c1 {
public:
    int num1;
    void get(int x) {
        num1 = x;
    }
    friend void exchange(c1 &, c2 &);
    void display() {
        cout << num1 << endl;
    }
};

class c2 {
public:
    int num2;
    void get(int x) {
        num2 = x;
    }
    friend void exchange(c1 &, c2 &);
    void display() {
        cout << num2 << endl;
    }
};

void exchange(c1 &x, c2 &y) {
    int temp;
    temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
};

int main() {
    c1 o1;
    c2 o2;
    o1.get(5);
    o2.get(10);
    exchange(o1, o2);
    cout << "the value of num1 after exchanging is " << o1.num1 << endl;
    cout << "the value of num2 after exchanging is " << o2.num2 << endl;
    return 0;
}
