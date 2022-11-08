#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

//  * Author: Muhammad Nasser
//  * ITI Menoufia - Artificial Intelligence & Machine Learning Track - Batch 43 [2022-2023]

// Create a class <Employee> with private variables and public <Setters> & <Getters>
class Employee
{
private:
    char *emp_name;
    int emp_ID;
    float emp_salary;

public:
    // Setters
    void setEmpName(char *name) { emp_name = name; }
    void setEmpID(int ID) { emp_ID = ID; }
    void setSalary(int Salary) { emp_salary = Salary; }

    // Getters
    char *getEmpName() { return emp_name; }
    int getEmpID() { return emp_ID; }
    float getSalary() { return emp_salary; }
};

int main()
{
    // Create an object from class <Employee>.
    Employee E1;

    // Initialize temporary variables to store user input and communicate with the <E1> object from <Employee> class.
    char temp_empName[50];
    int temp_empID;
    float temp_empSalary;

    // Input data
    cout << "\n[INPUT] Employee Name: ";
    cin.get(temp_empName, 50, '\n');
    E1.setEmpName(temp_empName);

    cout << "[INPUT] Employee ID: ";
    cin >> temp_empID;
    E1.setEmpID(temp_empID);

    cout << "[INPUT] Employee Salary: ";
    cin >> temp_empSalary;
    E1.setSalary(temp_empSalary);

    // Output data (display)
    cout << "\n============== EMPLOYEE DETAILS ==============";
    cout << "\n[OUTPUT] Employee Name: " << E1.getEmpName();
    cout << "\n[OUTPUT] Employee ID: " << E1.getEmpID();
    cout << "\n[OUTPUT] Employee Salary: " << E1.getSalary();
    cout << "\n==============================================";
    return 0;
}



