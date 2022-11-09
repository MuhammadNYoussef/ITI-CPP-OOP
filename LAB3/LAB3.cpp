#include <iostream>
#include <windows.h>

using namespace std;

//  * Author: Muhammad Nasser
//  * ITI Menoufia - Artificial Intelligence & Machine Learning Track - Batch 43 [2022-2023]

// Create a class <Employee> with private variables and public <Setters> & <Getters>
class Employee
{
private:
    char *emp_name;
    char *emp_department;
    int emp_ID;
    float emp_salary;

public:
    // Setters
    void setEmpName(char *name) { emp_name = name; }
    void setDeptName(char *dept_name) { emp_department = dept_name; }
    void setEmpID(int ID) { emp_ID = ID; }
    void setSalary(int Salary) { emp_salary = Salary; }


    // Getters
    char *getEmpName() { return emp_name; }
    char *getDeptName() { return emp_department; }
    int getEmpID() { return emp_ID; }
    float getSalary() { return emp_salary; }


    // Default Constructor
    Employee()
    {
        emp_name = new char[50];
        emp_department = new char[50];
        emp_ID = -1;
        emp_salary = -1;
    }

    // Copy Constructor
    Employee(Employee &emp)
    {
        emp_name = emp.emp_name;
        emp_department = emp.emp_department;
        emp_ID = emp.emp_ID;
        emp_salary = emp.emp_salary;
    }

    // Parameterized Constructor
    // Called when object is created from <Employee> class (Specific for Managers) # CUSTOM SALARY.
    Employee(float min_manager_salary)
    {
        emp_name = new char[50];
        emp_department = new char[50];
        emp_ID = -1;
        emp_salary = min_manager_salary;
    }

    Employee fillEmp(char *name, char *dept_name, int ID, float Salary)
    {
        emp_name = name;
        emp_department = dept_name;
        emp_ID = ID;
        emp_salary = Salary;
    }

    void printEmp()
    {
        cout << "\n\t\t================= EMPLOYEE DETAILS =================";
        cout << "\n\t\t[DEFAULT OUTPUT] Employee Name: " << this->getEmpName();
        cout << "\n\t\t[DEFAULT OUTPUT] Employee's Department Name: " << this->getDeptName();
        cout << "\n\t\t[DEFAULT OUTPUT] Employee ID: " << this->getEmpID();
        cout << "\n\t\t[DEFAULT OUTPUT] Employee Salary: " << this->getSalary();
        cout << "\n\t\t====================================================";
    }

    // Destructor - Activates automatically when object no longer is needed.
    ~Employee()
    {
        // delete emp_department;
        cout << "\n[DELETED] EMPLOYEE ID: " << this->emp_ID << " WITH SALARY: " << this->emp_salary;
    }
};

int main()
{
    system("cls");

    // ========================= EMPLOYEE #1 =========================
    // Object from (Employee) class with Default Constructor as an initializer.
    Employee E1;

    cout << "1. TESTING <DEFAULT CONSTRUCTOR>";
    // Set values to the char* arrays (aka. Strings).
    E1.setEmpName((char *)"Muhammad Test 1");
    E1.setDeptName((char *)"Department Test 1");

    // Call (printEmp) function to display the object details.
    E1.printEmp();

    // ========================= EMPLOYEE #2 =========================
    Employee E2(5000.5);

    cout << "\n\n\n2. TESTING <PARAMETERIZED CONSTRUCTOR>";
    // Set values to the char* arrays (aka. Strings).
    E2.setEmpName((char *)"Muhammad Test 2");
    E2.setDeptName((char *)"Department Test 2");

    // Call (printEmp) function to display the object details.
    E2.printEmp();

    // ========================= EMPLOYEE #3 =========================
    Employee E3;

    // Temporary variables to store User Input and update (E3) object private variables.
    char *temp_empName = new char[50];
    char *temp_deptName = new char[50];
    int temp_empID;
    float temp_empSalary;

    cout << "\n\n\n3. CREATING A NEW OBJECT.";

    cout << "\n[INPUT] Employee Name: ";
    cin.getline(temp_empName, 50);
    E3.setEmpName(temp_empName);

    cout << "[INPUT] Employee Department Name: ";
    cin.getline(temp_deptName, 50);
    E3.setDeptName(temp_deptName);

    cout << "[INPUT] Employee ID: ";
    cin >> temp_empID;
    E3.setEmpID(temp_empID);

    cout << "[INPUT] Employee Salary: ";
    cin >> temp_empSalary;
    E3.setSalary(temp_empSalary);

    // Call (printEmp) function to display the object details.
    E3.printEmp();

    // ========================= EMPLOYEE #4 =========================
    Employee E4(E3);

    cout << "\n\n\n3. TESTING <COPY CONSTRUCTOR>";
    // Call (printEmp) function to display the object details.
    E4.printEmp();
    
    cout << "\n\n";
    system("pause");
    return 0;
}
