#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    float salary;

public:
    void setEmployeeDetails(string n, int id, float s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void calculateSalary(char performance) {
        if (performance == 'A')
            salary += salary * 0.20; 
        else if (performance == 'B')
            salary += salary * 0.10;  
        else if (performance == 'C')
            salary += salary * 0.05;  
    }

    void displayEmployeeInfo() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployeeDetails("Alice", 12345, 50000);
    emp.calculateSalary('A');
    emp.displayEmployeeInfo();
    return 0;
}
