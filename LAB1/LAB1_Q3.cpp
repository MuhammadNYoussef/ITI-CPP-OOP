#include <iostream>
using namespace std;

int main()
{

    system("Cls");
    cout << "QUESTION [3]: Fill the allocated array and then print it." << endl;

    // Create a local array and fill it with int random data.
    int array[5] = {123, 456, 789, 101, 234};

    // Iterate over the array and print its content.
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << "Element " << i << " = " << array[i] << endl;
    }
    return 0;
}