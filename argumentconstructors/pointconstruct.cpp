#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
friend int distance(point p1, point p2);
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the points are (" << x << "," << y << ")" << endl;
    }
};
int distance(point p1, point p2){
     int x1 = p1.x;
     int x2 = p2.x;
     int y1 = p1.y;
     int y2 = p2.y;
     int square = pow(x2 - x1, 2) + pow(y2 - y1, 2);

    return sqrt(square);
};
int main()
{
    point p(10, 20);
    p.display();
    point q(20,30);
    cout<<"the distance between two points is "<<distance(p, q)<<endl;
    return 0;
}