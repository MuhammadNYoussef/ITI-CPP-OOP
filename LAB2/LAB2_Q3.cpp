#include <iostream>

using namespace std;

void numSwap(int &one, int &two);

int main()
{

    system("CLS");
    cout << "QUESTION [3]: Write a swap function that takes a reference for tow variables and swaps values." << endl;

    int numOne, numTwo;
    
    int &refOne = numOne;
    int &refTwo = numTwo;

    numOne = 5;
    numTwo = 4;

    // cout << "[INPUT] numOne: ";
    // cin >> numOne;
    // cout << "[INPUT] numTwo: ";
    // cin >> numTwo;

    cout << "===== BEFORE SWAP =====" << endl;
    cout << "[<] numOne = " << numOne << endl;
    cout << "[<] numTwo = " << numTwo << endl;

    numSwap(refOne, refTwo);

    cout << "===== AFTER SWAP =====" << endl;
    cout << "[>] numOne = " << numOne << endl;
    cout << "[>] numTwo = " << numTwo << endl;

    return 0;
}

void numSwap(int &one, int &two)
{
    one = one + two;
    two = one - two;
    one = one - two;
}

// void numSwap(int &one, int &two)
// {
//     int temp;
//     temp = one;
//     one = two;
//     two = temp;
// }