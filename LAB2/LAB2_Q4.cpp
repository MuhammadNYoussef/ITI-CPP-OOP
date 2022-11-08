#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

inline int sum(int a, int b);
inline double sum(double a, double b, double c);
inline int sum(int a, int b, int c, int d);

int main()
{

    system("CLS");
    cout << "QUESTION [4]: Try function overloading and inline function." << endl;

    cout << "\n==== FIRST FUNCTION ====" << endl;
    cout << sum(1, 2);
    cout << "\n==== SECOND FUNCTION ====" << endl;
    cout << sum(1000, 2000, 3000);
    cout << "\n==== THIRD FUNCTION ====" << endl;
    cout << sum(1, 2, 3, 4);
    return 0;
}

inline int sum(int a, int b)
{
    return a + b;
}

inline double sum(double a, double b, double c)
{
    return a + b + c;
}

inline int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}