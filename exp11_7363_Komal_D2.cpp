//Create a base class Employee with a virtual function calculateSalary(). Different types of employees, such as
//full-time employees, part-time employees, and managers, have varying salary calculation methods. Explain
//how you would implement calculateSalary() in derived classes to handle salary calculation differently for
//each employee type.

#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() const = 0; 
};

class FullTimeEmployee : public Employee {
private:
    double salary;

public:
    FullTimeEmployee(double sal) : salary(sal) {}

    double calculateSalary() const override {
        return salary;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double base, double bon) : baseSalary(base), bonus(bon) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }
};

int main() {
    FullTimeEmployee fullTimeEmp(30000);
    PartTimeEmployee partTimeEmp(2000, 4000); 
    Manager managerEmp(50000, 30000); 

    cout << "Full-Time Employee Salary: Rs." << fullTimeEmp.calculateSalary() <<endl;
    cout << "Part-Time Employee Salary: Rs." << partTimeEmp.calculateSalary() <<endl;
    cout << "Manager Salary: Rs." << managerEmp.calculateSalary() <<endl;

    return 0;
}

