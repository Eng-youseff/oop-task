#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    static int totalCount; cts

public:
    Person() : name(""), age(0) {
        ++totalCount;
    }

    // Parameterized constructor
    Person(const string& n, int a) : name(n), age(a) {
        ++totalCount;
    }

    virtual ~Person() {
        --totalCount;
    }

    void setName(const string& n) { name = n; }

    string getName() const { return name; }

    void setAge(int a) { age = a; }

    int getAge() const { return age; }

    static int getTotalCount() { return totalCount; }

    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int Person::totalCount = 0;

class Student : public Person {
private:
    string studentId;
    char grade;

public:
    Student() : Person(), studentId(""), grade('F') {}

    Student(const string& n, int a, const string& id, char g)
        : Person(n, a), studentId(id), grade(g) {}

    ~Student() {}

    void setStudentId(const string& id) { studentId = id; }

    string getStudentId() const { return studentId; }

    void setGrade(char g) { grade = g; }

    char getGrade() const { return grade; }

    void displayInfo() const override {
        Person::displayInfo(); // Call base class displayInfo
        cout << "Student ID: " << studentId << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public Person {
private:
    string employeeId;
    string subject;

public:
    Teacher() : Person(), employeeId(""), subject("") {}

    Teacher(const string& n, int a, const string& id, const string& sub)
        : Person(n, a), employeeId(id), subject(sub) {}

    ~Teacher() {}

    void setEmployeeId(const string& id) { employeeId = id; }

    string getEmployeeId() const { return employeeId; }

    void setSubject(const string& sub) { subject = sub; }

    string getSubject() const { return subject; }

    void displayInfo() const override {
        Person::displayInfo(); 
        cout << "Employee ID: " << employeeId << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student student("Alice", 20, "S12345", 'A');
    Teacher teacher("Bob", 40, "T54321", "Mathematics");

    cout << "Student Info:" << std::endl;
    student.displayInfo();
    cout << endl;

    cout << "Teacher Info:" << endl;
    teacher.displayInfo();
    cout << endl;

    cout << "Total Person objects created: " << Person::getTotalCount() << endl;

    return 0;
}
