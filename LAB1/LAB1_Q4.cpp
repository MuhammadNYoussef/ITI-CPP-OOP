#include <iostream>
using namespace std;

// Function Prototype
int add_multiply_num(int numOne, int numTwo = 50);

int main()
{

    system("Cls");
    cout << "QUESTION [4]: Make a function with default argument values and use it." << endl;
    int numOne;
    // int numTwo;

    cout << "\n1. First Number: ";
    cin >> numOne;
    // cout << "2. Second Number: ";
    // cin >> numTwo;

    int result = add_multiply_num(numOne);

    cout << "\n>> Result = " << result << endl;
    return 0;
}

int add_multiply_num(int numOne, int numTwo)
{
    return (numOne + numTwo);
}