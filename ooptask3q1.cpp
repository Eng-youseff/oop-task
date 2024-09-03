#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    void setStudentDetails(string n, string c, int r, float m) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    student.setStudentDetails("John Doe", "10th", 25, 85.5);
    student.displayStudentInfo();
    return 0;
}
