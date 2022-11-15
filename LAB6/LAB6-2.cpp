#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Point
{
    int x, y;

public:
    Point() { x = y = 0; }
    Point(int a) { x = y = a; }

    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void SetX(int a) { x = a; }
    void SetY(int b) { y = b; }

    int GetX() { return x; }
    int GetY() { return y; }
};

class Circle
{
    Point p1, p2;
    float radius;

public:
    Circle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2)
    {
        radius = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
    }

    void setP1(int x1, int y1)
    {
        p1.SetX(x1);
        p1.SetY(y1);
    }
    void setP2(int x2, int y2)
    {
        p2.SetX(x2);
        p2.SetY(y2);
    }

    float calc_Radius()
    {
        cout << "Cirlce Radius: " << radius << endl;
        return radius;
    }
};

int main()
{
    Circle C1(2, 2, 8, 8);
    C1.calc_Radius();
}