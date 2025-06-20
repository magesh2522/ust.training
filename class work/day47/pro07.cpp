#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

void inputEmployees(Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> emp[i].id;
        cin.ignore(); // To ignore leftover newline
        cout << "Name: ";
        getline(cin, emp[i].name);
        cout << "Department: ";
        getline(cin, emp[i].department);    
        cout << "Salary: ";
        cin >> emp[i].salary;
        cout << endl;
    }
}

float calculateAverageSalary(Employee emp[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += emp[i].salary;
    }
    return total / size;
}

void displayAboveAverage(Employee emp[], int size, float average) {
    cout << "Employees with salary above average (" << average << "):\n";
    for (int i = 0; i < size; i++) {
        if (emp[i].salary > average) {
            cout << emp[i].name << endl;
        }
    }
}

int main() {
    const int SIZE = 3;
    Employee employees[SIZE];

    inputEmployees(employees, SIZE);

    float averageSalary = calculateAverageSalary(employees, SIZE);

    displayAboveAverage(employees, SIZE, averageSalary);

    return 0;
}
