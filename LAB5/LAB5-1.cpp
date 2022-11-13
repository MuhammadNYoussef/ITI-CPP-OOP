#include <iostream>
#include <windows.h>

using namespace std;

class Employee
{
private:
    char *emp_name;
    char *emp_company;
    int emp_ID;
    float emp_salary;

    static int emp_count;

public:
    // Setters
    void setEmpName(char *name) { emp_name = name; }
    void setCompanyName(char *company_name) { emp_company = company_name; }
    void setEmpID(int ID) { emp_ID = ID; }
    void setSalary(int Salary) { emp_salary = Salary; }

    // Getters
    char *getEmpName() { return emp_name; }
    char *getCompanyName() { return emp_company; }
    int getEmpID() { return emp_ID; }
    float getSalary() { return emp_salary; }

    // Default Constructor
    Employee()
    {
        emp_name = new char[50];
        emp_company = new char[50];
        emp_ID = -1;
        emp_salary = -1;

        emp_count++;
    }

    // Parameterized Constructor
    Employee(char *name, char *company, float salary)
    {
        emp_name = name;
        emp_company = company;
        emp_ID = -1;
        emp_salary = salary;

        emp_count++;
    }

    // Parameterized Constructor #2
    Employee(char *name, char *company)
    {
        emp_name = name;
        emp_company = company;
        emp_ID = -1;
        emp_salary = -1;

        emp_count++;
    }

    void printEmp()
    {
        cout << "\n[OUTPUT] Employee Name: " << this->getEmpName() << endl;
        cout << "[OUTPUT] Employee Company: " << this->getCompanyName() << endl;
        cout << "[OUTPUT] Employee ID: " << this->getEmpID() << endl;
        cout << "[OUTPUT] Employee Salary: " << this->getSalary() << endl;
        cout << "====================================================" << endl;
    }

    static int GetCount() { return emp_count; }

    ~Employee()
    {
        // cout << "\n[DELETE] Employee Name: " << this->getEmpName() << endl;
        // cout << "[DELETE] Employee Company: " << this->getCompanyName() << endl;
        // cout << "[DELETE] Employee ID: " << this->getEmpID() << endl;
        // cout << "[DELETE] Employee Salary: " << this->getSalary() << endl;
        // cout << "====================================================" << endl;

        emp_count--;
    }
};

int Employee::emp_count = 0;

int main()
{
    system("cls");

    Employee Employees[2] = {Employee((char *)"Employee #1", (char *)"Company #1", 5000), Employee((char *)"Employee #2", (char *)"Company #2")};
    cout << "[>>] NUMBER OF CREATED CLASSES: " << Employee::GetCount() << endl;

    Employee E3;
    E3.setEmpName((char *)"Employee#3");
    E3.setCompanyName((char *)"Company#3");
    E3.setEmpID(1000);
    E3.setSalary(5000);
    cout << "[>>] NUMBER OF CREATED CLASSES: " << Employee::GetCount() << endl;

    cout << "Employee #3 Company Name: " << E3.getCompanyName() << endl;

    // Employee E2;
    // E2.setEmpName((char *)"Employee#2");
    // E2.setCompanyName((char *)"Company#2");
    // E2.setEmpID(1001);
    // E2.setSalary(5500);

    // cout << "Employee Name\t|\tCompany\t\t|\tID\t|\tSalary\t|\t" << endl;
    // cout << "=========================================================================" << endl;
    // cout << E1.getEmpName() << "\t|\t" << E1.getCompanyName() << "\t|\t" << E1.getEmpID() << "\t|\t" << E1.getSalary() << "\t|\t" << endl;
    // cout << E2.getEmpName() << "\t|\t" << E2.getCompanyName() << "\t|\t" << E2.getEmpID() << "\t|\t" << E2.getSalary() << "\t|\t" << endl;
    // cout << "\n[>>] NUMBER OF CREATED CLASSES: " << Employee::GetCount() << endl;
    // cout << Employee::GetCount();

    // Employee E3;
    // E3.setEmpName((char *)"Employee#3");
    // E3.setCompanyName((char *)"Company#3");
    // E3.setEmpID(1002);
    // E3.setSalary(6000);

    // cout << "\n" << E3.getEmpName() << "\t|\t" << E3.getCompanyName() << "\t|\t" << E3.getEmpID() << "\t|\t" << E3.getSalary() << "\t|\t" << endl;
    // cout << "\n[>>] NUMBER OF CREATED CLASSES: " << Employee::GetCount() << endl;
    return 0;
}