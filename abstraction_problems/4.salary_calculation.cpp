#include<iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;   // Pure virtual function
};

class FullTimeEmployee : public Employee {
private:
    int monthlySalary;

public:
    void input() {
        cout << "Enter monthly salary of Full Time Employee: ";
        cin >> monthlySalary;
    }

    void calculateSalary() {
        cout << "\nFull Time Employee Salary is: " << monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    int hourlyRate;

public:
    void input() {
        cout << "\nEnter hours worked by Part Time Employee: ";
        cin >> hoursWorked;

        cout << "Enter hourly rate: ";
        cin >> hourlyRate;
    }

    void calculateSalary() {
        int salary = hoursWorked * hourlyRate;

        cout << "\nPart Time Employee Salary is: " << salary;
    }
};

int main() {
    FullTimeEmployee f;
    PartTimeEmployee p;

    f.input();
    f.calculateSalary();

    p.input();
    p.calculateSalary();

    return 0;
}