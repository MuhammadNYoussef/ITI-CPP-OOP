#include <iostream>
using namespace std;

// GLOBAL VARIABLE
int number = 10;

int func();

int main()
{

    system("Cls");
    cout << "QUESTION [4]: Try the scope operator." << endl;

    // LOCAL VARIABLE
    int number = 20;

    // We use "::" to access the Global Variable.
    cout << "\n> GLOBAL = " << ::number << endl;

    cout << "> LOCAL =  " << number << endl;

    cout << "> FUNCTION = " << func();
    return 0;
}

int func()
{
    // FUNCTION VARIABLE
    int number = 30;
    return number;
}