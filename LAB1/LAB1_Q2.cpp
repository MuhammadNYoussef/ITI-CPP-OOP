#include <iostream>
using namespace std;

// Create a struct template for Employees
typedef struct Employee
{
    char Name[50];
    int ID;
    float Salary;

} Employee;

int main()
{

    system("Cls");
    cout << "QUESTION [2]: Make a pointer to the structure and allocate it with a number read by the user." << endl;
    // Create an object from the struct Employee, and a Pointer.
    Employee E1, *E1Ptr;
    // Assign the pointer-to-struct to the struct.
    E1Ptr = &E1;

    cout << "\n=== Enter Employee Information ===" << endl;
    // Input required data for the Struct [Name/ID/Salary] respectively.
    cout << "1. Employee Full Name: ";
    cin.get((*E1Ptr).Name, 50);

    cout << "2. Employee Staff ID: ";
    cin >> (*E1Ptr).ID;

    cout << "3. Employee Salary: ";
    cin >> (*E1Ptr).Salary;

    // Display the input data from the Struct {E1}
    cout << "\n=== Employee Information ===" << endl;
    cout << "> Employee Full Name: " << (*E1Ptr).Name << endl;
    cout << "> Employee Staff ID: " << (*E1Ptr).ID << endl;
    cout << "> Employee Salary: " << (*E1Ptr).Salary;

    return 0;
}