#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{

private:
    int x, y;

public:
    // Default Constructor
    Point() { x = y = 0; }

    // Parameterized Constructor
    Point(int n) { x = y = n; }

    // Parameterized Constructor
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    // Setters
    void set_X(int n) { x = n; }
    void set_Y(int n) { y = n; }

    // Getters
    int get_X() { return x; }
    int get_Y() { return y; }
};

class Rectangle
{
    Point p1, p2;
    double length, width;

public:
    Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2)
    {
        length = abs(x1 - x2);
        width = abs(y1 - y2);
    }

    void setP(int x, int y)
    {
        p1.set_X(x);
        p1.set_Y(y);
        length = abs(x - p2.get_X());
        width = abs(y - p2.get_Y());
    }

    double getLength() { return length; }
    double getWidth() { return width; }

    int getArea()
    {

        return (length * width);
    }
};

int main()
{
    system("cls");

    Rectangle Rect1(2, 2, 4, 4);
    cout << "Area: " << Rect1.getLength() << " * " << Rect1.getWidth() << " = " << Rect1.getArea() << endl;

    Rect1.setP(3, 5);
    cout << "Area: " << Rect1.getLength() << " * " << Rect1.getWidth() << " = " << Rect1.getArea() << endl;

    Rect1.setP(2, 6);
    cout << "Area: " << Rect1.getLength() << " * " << Rect1.getWidth() << " = " << Rect1.getArea() << endl;
    return 0;
}