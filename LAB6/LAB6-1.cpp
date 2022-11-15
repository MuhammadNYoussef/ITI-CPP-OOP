#include <iostream>

using namespace std;

class Person
{
protected:
    char *person_name;
    int person_id;

public:
    Person(char *name, int id)
    {
        this->person_name = name;
        this->person_id = id;
    }

    void p_setID(int id) { person_id = id; }
    int p_getID() { return person_id; }
    void p_setName(char *name) { person_name = name; }
    char *p_getName() { return person_name; }
};

class Employee : public Person
{
private:
    int emp_salary;

public:
    Employee(char *name, int id, int salary) : Person(name, id) { this->emp_salary = salary; }
    void setEmpSalary(int salary) { emp_salary = salary; }
    int getEmpSalary() { return emp_salary; }

    void printEmp()
    {
        cout << "\n[OUTPUT] Employee Name: " << this->p_getName() << endl;
        cout << "[OUTPUT] Employee ID: " << this->p_getID() << endl;
        cout << "[OUTPUT] Employee Salary: " << this->getEmpSalary() << endl;
        cout << "====================================================" << endl;
    }
};

int main()
{
    system("cls");
    Employee E1((char *)"Muhammad", 1, 1000);
    E1.printEmp();

    Employee E2((char *)"Nasser", 2, 2000);
    E2.printEmp();
    return 0;
}