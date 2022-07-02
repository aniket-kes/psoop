#include <iostream>
using namespace std;

class Employee
{
protected:
    int emp_id;
    string name;

public:
    Employee(int a = 1000, string b = "XYZ")
    {
        emp_id = a;
        name = b;
    }
    void getter()
    {
        cout << "Enter the Employee ID: ";
        cin >> emp_id;
        cout << "Enter the name of the employee: ";
        cin >> name;
    }
};
class FullTimeEmployees : public Employee
{
protected:
    int salary;
    int dearness_allowance;
    int HRA;
    int total;

public:
    FullTimeEmployees()
    {
        salary = 20000;
        dearness_allowance = 2000;
        HRA = 1000;
    }
    void getter()
    {
        Employee::getter();
        cout << "Enter the basic salary: ";
        cin >> salary;
        cout << "Enter the Dearness allowance: ";
        cin >> dearness_allowance;
        cout << "Enter the HRA: ";
        cin >> HRA;
    }
    void calculateSalary()
    {
        total = salary + dearness_allowance + HRA;
        cout << "\n\n----Salary recieved monthly----\n\n"
             << endl;
        cout << "Employee ID is " << emp_id << endl;
        cout << "Employee name is " << name << endl;
        cout << "Employee Basic salary is " << salary << " in rupee." << endl;
        cout << "Employee Dearness allowance is " << dearness_allowance << " in rupee." << endl;
        cout << "Employee HRA is " << HRA << " in rupee." << endl;
        cout << "Employee total salary is " << total << " in rupee." << endl;
    }
};
class PartTimeEmployee : public Employee
{
private:
    int hrs;

public:
    PartTimeEmployee() { hrs = 10; }
    int getter()
    {
        Employee::getter();
        cout << "Enter number of hours: ";
        cin >> hrs;
    }
    void calculateWages()
    {
        hrs = hrs * 30 * 100;
        cout << "\n\n----Wages recieved on hour Basis for 30 days----\n\n"
             << endl;
        cout << "Employee ID is " << emp_id << endl;
        cout << "Employee name is " << name << endl;
        cout << "Wages recieved is " << hrs << "rupee." << endl;
    }
};
int main()
{
    FullTimeEmployees e1;
    PartTimeEmployee f1;
    int choice;
    cout << "Which employee's data you want?" << endl
         << "1-Full time Employee." << endl
         << "2-Part time Employee." << endl;
    cin >> choice;
    if (choice == 1)
    {
        e1.getter();
        e1.calculateSalary();
    }
    else if (choice == 2)
    {
        f1.getter();
        f1.calculateWages();
    }
    else
        cout << "Invalid Input";
    return 0;
}
