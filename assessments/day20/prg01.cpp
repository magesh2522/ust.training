#include <iostream>
#include <string>
using namespace std;

const int MAX_PATIENTS = 100;
const int MAX_DOCTORS = 10;

struct Patient {
    int id;
    string name;
    string disease;
    int roomNo;
    int daysAdmitted;
};

struct Doctor {
    int id;
    string name;
    string department;
    bool Available;
};
Patient patients[MAX_PATIENTS];
Doctor doctors[MAX_DOCTORS];
int patientCount = 0;
int doctorCount = 0;

void addDoctor()
{
    Doctor newDoctor;
    newDoctor.id = doctorCount + 1;

    cout << "Enter doctor's name: ";
    cin.ignore();
    getline(cin, newDoctor.name);

    cout << "Enter department: ";
    getline(cin, newDoctor.department);

    cout << "Enter availability (1/0): ";
    cin >> newDoctor.Available;

    doctors[doctorCount] = newDoctor;
    doctorCount++;

    // cout << "Doctor added successfully" << endl;
}
void displayDoctors()
{
    for (int i = 0; i < doctorCount; i++) {
        cout << "ID " << doctors[i].id << endl << "Name " << doctors[i].name << endl << "Department " << doctors[i].department
            << endl << "Room No " << doctors[i].Available << endl;
    }
}
void addPatient()
{
    Patient newPatient;
    newPatient.id = patientCount + 1;

    cout << "Enter patient's name: ";
    cin.ignore();
    getline(cin, newPatient.name);

    cout << "Enter disease: ";
    getline(cin, newPatient.disease);

    cout << "Enter room number: ";
    cin >> newPatient.roomNo;

    cout << "Enter number of days admitted: ";
    cin >> newPatient.daysAdmitted;

    patients[patientCount] = newPatient;
    patientCount++;

}
void displayPatients()
{

    for (int i = 0; i < patientCount; i++) {
        cout << "ID " << patients[i].id << endl << "Name " << patients[i].name << endl << "Disease " << patients[i].disease
            << endl << "Room No " << patients[i].roomNo << "Days " << patients[i].daysAdmitted << endl;
    }
}
void bookAppointment() {
    int patientId, doctorId;
    cout << "Enter patient ID: ";
    cin >> patientId;

    cout << "Enter doctor ID: ";
    cin >> doctorId;


    if (!doctors[doctorId - 1].Available) {
        cout << "Doctor is not available!" << endl;
        return;
    }

    cout << "Doctor " << doctors[doctorId - 1].name << " assigned to patient " << patients[patientId - 1].name << endl;
    //doctors[doctorId - 1].Available = false; // Mark doctor as unavailable
}
int main() {
    int choice;
    do {
        cout << "\nHospital Management System\n";
        cout << "1. Add Doctor\n";
        cout << "2. Display Doctors\n";
        cout << "3. Add Patient\n";
        cout << "4. Display Patients\n";
        cout << "5. Doctor Appointment\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addDoctor();
            break;
        case 2: displayDoctors();
            break;
        case 3: addPatient();
            break;
        case 4: displayPatients();
            break;
        case 5: bookAppointment();
            break;

        default: cout << "Invalid choice" << endl;
        }
    } while (choice != 6);

    return 0;
}