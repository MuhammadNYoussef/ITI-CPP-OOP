#include <iostream>
using namespace std;

/*
* Question #1: Write Structure Employee (ID, Name, and Salary).
*/


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
    cout << "QUESTION [1]: Write Structure Employee (ID, Name, and Salary)." << endl;
    // Create an object from the struct Employee.
    Employee E1;

    cout << "\n=== Enter Employee Information ===" << endl;
    // Input required data for the Struct [Name/ID/Salary] respectively.
    cout << "1. Employee Full Name: ";
    cin.get(E1.Name, 50);

    cout << "2. Employee Staff ID: ";
    cin >> E1.ID;

    cout << "3. Employee Salary: ";
    cin >> E1.Salary;

    // Display the input data from the Struct {E1}
    cout << "\n=== Employee Information ===" << endl;
    cout << "> Employee Full Name: " << E1.Name << endl;
    cout << "> Employee Staff ID: " << E1.ID << endl;
    cout << "> Employee Salary: " << E1.Salary;

    return 0;
}