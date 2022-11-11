#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

class Employee
{
private:
    int unique_id;
    char *emp_name;
    int emp_ID;
    float emp_salary;

public:
    // Setters
    void setEmpName(char *name) { emp_name = name; }
    void setEmpID(int ID) { emp_ID = ID; }
    void setUniqueID(int _id) { unique_id = _id; }
    void setSalary(float Salary) { emp_salary = Salary; }

    // Getters
    char *getEmpName() { return emp_name; }
    int getEmpID() { return emp_ID; }
    int getUniqueID() { return unique_id; }
    float getSalary() { return emp_salary; }

    // Default Constructor
    Employee()
    {
        emp_name = new char[50];
        emp_ID = -1;
        emp_salary = -1;
        unique_id = 0;
    }

    // Function to populate the object's variables in one line.
    Employee fillEmp(int id, char *name, int ID, float Salary)
    {
        unique_id = id;
        emp_name = name;
        emp_ID = ID;
        emp_salary = Salary;
    }

    // Function to display the values of the object's variables.
    void printEmp()
    {
        cout << "[DETAILS ID: " << this->unique_id << "] Employee Name: " << this->getEmpName() << endl;
        cout << "[DETAILS ID: " << this->unique_id << "] Employee ID: " << this->getEmpID() << endl;
        cout << "[DETAILS ID: " << this->unique_id << "] Employee Salary: " << this->getSalary() << endl;
        cout << "====================================================" << endl;
    }

    Employee operator+(Employee C);
    Employee operator+(int m);

    friend Employee operator+(char *m, Employee C);
    friend Employee operator+(Employee C, char *m);
    friend Employee operator+(int m, Employee C);

    int operator==(Employee C);
    Employee &operator=(Employee C);

    operator int() const { return emp_ID; }
    operator char *() const { return emp_name; }
};

// Function to overload the (==) operator - Works on (Salary).
int Employee::operator==(Employee C)
{
    return (emp_salary == C.emp_salary);
}

// Function to copy the values of one object into the other.
Employee &Employee::operator=(Employee C)
{
    emp_name = C.emp_name;
    emp_ID = C.emp_ID;
    emp_salary = C.emp_salary;
    return *this;
}

// Function to add (m) to the Salary variable of the object (BEFORE THE OPERATOR)
Employee operator+(int m, Employee C)
{
    Employee temp;
    temp.emp_name = C.emp_name;
    temp.emp_salary = m + C.emp_salary;
    temp.emp_ID = C.emp_ID;
    return temp;
}

// Function to add (m) to the Salary variable of the object (AFTER THE OPERATOR)
Employee Employee::operator+(int m)
{
    Employee temp;
    temp.emp_name = emp_name;
    temp.emp_salary = emp_salary + m;
    temp.emp_ID = emp_ID;
    return temp;
}

// Function to add (m) charactors to the Name variable of the object (BEFORE THE OPERATOR)
Employee operator+(char *m, Employee C)
{
    Employee temp;
    char *temp_name = new char[strlen(m) + strlen(C.emp_name) + 1];

    strcpy(temp_name, m);
    strcat(temp_name, "--");
    strcat(temp_name, C.emp_name);

    temp.emp_name = temp_name;
    temp.emp_ID = C.emp_ID;
    temp.emp_salary = C.emp_salary;

    return temp;
}

// Function to add (m) charactors to the Name variable of the object (AFTER THE OPERATOR)
Employee operator+(Employee C, char *m)
{
    Employee temp;
    char *temp_name = new char[strlen(m) + strlen(C.emp_name) + 1];

    strcpy(temp_name, C.emp_name);
    strcat(temp_name, "--");
    strcat(temp_name, m);

    temp.emp_name = temp_name;
    temp.emp_ID = C.emp_ID;
    temp.emp_salary = C.emp_salary;

    return temp;
}

// Function to concatenate 2 objects of the class.
Employee Employee::operator+(Employee C)
{
    Employee temp;

    char *s = new char[strlen(emp_name) + strlen(emp_name) + 1];
    strcpy(s, emp_name);
    strcat(s, " ");
    strcat(s, C.emp_name);

    temp.emp_name = s;
    temp.emp_ID = emp_ID + C.emp_ID;
    temp.emp_salary = emp_salary + C.emp_salary;

    return temp;
}

int main()
{
    system("cls");

    // PRINT DETAILS AFTER MANUAL IN-CODE INPUT.
    Employee E1;
    E1.fillEmp(1, (char *)"Muhammad", 1, 10);
    E1.printEmp();

    Employee E2;
    E2.fillEmp(2, (char *)"Nasser", 2, 20);
    E2.printEmp();

    Employee E3;
    E3.fillEmp(3, (char *)"Youssef", 3, 30);
    E3.printEmp();

    Employee E4;
    E4 = E1 + E2 + E3;
    E4.setUniqueID(4);
    E4.printEmp();

    // USE TYPECAST OVERLOADING FOR (int) AND (char *).
    cout << "[TYPECASE OVERLOADING] - ID: " << (int)E1 << endl;
    cout << "[TYPECASE OVERLOADING] - NAME: " << (char *)E1 << endl;
    cout << "====================================================" << endl;

    cout << "[OPERATOR OVERLOADING (+) - ADD TO E1 SALARY 100. (AFTER+)]" << endl;
    Employee E5;
    E5 = E1;
    E5 = E5 + 100;
    E5.setUniqueID(5);
    E5.printEmp();

    cout << "[OPERATOR OVERLOADING (+) - ADD TO E1 SALARY 100. (BEFORE+)]" << endl;
    Employee E6;
    E6 = E1;
    E6 = 200 + E6;
    E6.setUniqueID(6);
    E6.printEmp();

    cout << "[OPERATOR OVERLOADING (+) - ADD TO E2 NAME 'STRING'. (BEFORE+)]" << endl;
    Employee E7;
    E7 = E2;
    E7 = (char *)"Muhammad" + E7;
    E7.setUniqueID(7);
    E7.printEmp();

    cout << "[OPERATOR OVERLOADING (+) - ADD TO E2 NAME 'STRING'. (AFTER+)]" << endl;
    Employee E8;
    E8 = E2;
    E8 = E8 + (char *)"Muhammad";
    E8.setUniqueID(8);
    E8.printEmp();

    cout << "[OPERATOR OVERLOADING (==) - CHECK SALARY VALUES IF EQUAL]" << endl;
    if (E7 == E8)
    {
        cout << "The SALARY of Employee ID: [" << E6.getUniqueID() << "] is >>> EQUAL <<< to Employee ID: [" << E8.getUniqueID() << "]";
    }
    else
    {
        cout << "The SALARY of Employee ID: [" << E6.getUniqueID() << "] is >>> NOT EQUAL <<< to Employee ID: [" << E8.getUniqueID() << "]";
    }
    // system("pause");
    return 0;
}
