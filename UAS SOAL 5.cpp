#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(string name, double hourlyRate, double hoursWorked) {
        this->name = name;
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }

    double calculate_salary() {
        return hourlyRate *= hoursWorked;
    }
};

int main() {
    Employee emp("Adrian Nashif Fahri", 60, 30);

    double total_salary = emp.calculate_salary();

    cout << "Total salary for " << emp.name << ": Rp" << total_salary << endl;

    return 0;
}