#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age) {}

    // Destructor
    ~Person() {}

    void Display() const
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};
class Patient : public Person
{
private:
    string patientId;
    string diagnosis;

public:
    Patient(const string &name, int age, const string &patientId, const string &diagnosis)
        : Person(name, age), patientId(patientId), diagnosis(diagnosis) {}

    void Display() const
    {
        Person::Display();
        cout << "Patient ID: " << patientId << "\n";
        cout << "Diagnosis: " << diagnosis << "\n";
    }

    string Get_patientId() const
    {
        return patientId;
    }
};
class Doctor : public Person
{
private:
    string doctorId;
    string specialization;

public:
    Doctor(const string &name, int age, const string &doctorId, const string &specialization)
        : Person(name, age), doctorId(doctorId), specialization(specialization) {}

    void Display() const
    {
        Person::Display();
        cout << "Doctor ID: " << doctorId << "\n";
        cout << "Specialization: " << specialization << "\n";
    }

    string Get_doctorId() const
    {
        return doctorId;
    }
};
int main()
{
    Patient patient("Hassan Ahmed", 30, "P12345", "Flu");
    patient.Display();
    cout << "Patient ID: " << patient.Get_patientId() << "\n";

    cout <<endl;

    Doctor doctor("Dr. Ahmed Antar", 45, "D54321", "Cardiology");
    doctor.Display();
    cout << "Doctor ID: " << doctor.Get_doctorId() << "\n";

    return 0;
}
