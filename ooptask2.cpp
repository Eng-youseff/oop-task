#include <iostream>
#include <vector>

class Patient {
public:
    int id;
    std::string name;

    Patient(int id, string name) : id(id), name(name) {}
};

class Doctor {
public:
    int id;
    string name;

    Doctor(int id, string name) : id(id), name(name) {}
};

class Appointment {
public:
    Patient* patient;
    Doctor* doctor;
    string date;

    Appointment(Patient* patient, Doctor* doctor, string date) 
        : patient(patient), doctor(doctor), date(date) {}

    void display() {
        cout << "Patient ID: " << patient->id << ", Name: " << patient->name << endl;
        cout << "Doctor ID: " << doctor->id << ", Name: " << doctor->name << endl;
        cout << "Appointment Date: " << date << endl;
    }
};

class Hospital {
public:
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;

    void addPatient(Patient patient) {
        patients.push_back(patient);
    }

    void addDoctor(Doctor doctor) {
        doctors.push_back(doctor);
    }

    void scheduleAppointment(int patientId, int doctorId, string date) {
        Patient* patient = findPatient(patientId);
        Doctor* doctor = findDoctor(doctorId);

        if (patient != nullptr && doctor != nullptr) {
            Appointment appointment(patient, doctor, date);
            appointments.push_back(appointment);
        } else {
            cout << "Patient or doctor not found." << endl;
        }
    }

    void displayAppointments() {
        for (const auto& appointment : appointments) {
            appointment.display();
            cout << std::endl;
        }
    }

    Patient* findPatient(int id) {
        for (auto& patient : patients) {
            if (patient.id == id) {
                return &patient;
            }
        }
        return nullptr;
    }

    Doctor* findDoctor(int id) {
        for (auto& doctor : doctors) {
            if (doctor.id == id) {
                return &doctor;
            }
        }
        return nullptr;
    }
};

int main() {
    Hospital hospital;

    hospital.addPatient(Patient(1, "John Doe"));
    hospital.addPatient(Patient(2, "Jane Doe"));

    hospital.addDoctor(Doctor(1, "Dr. Smith"));
    hospital.addDoctor(Doctor(2, "Dr. Johnson"));

    hospital.scheduleAppointment(1, 1, "2024-07-26");
    hospital.scheduleAppointment(2, 2, "2024-07-27");

    hospital.displayAppointments();

    return 0;
}
