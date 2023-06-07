#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int MAX_NAME_LENGTH = 50;
const int MAX_DESIGNATION_LENGTH = 50;
const int MAX_EMPLOYEES = 100;

// Structure to hold employee information
struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    char designation[MAX_DESIGNATION_LENGTH];
    float salary;
};

// Function to add an employee to the file
void addEmployee(fstream& file) {
    Employee employee;

    cout << "Enter Employee ID: ";
    cin >> employee.id;

    cout << "Enter Employee Name: ";
    cin.ignore();
    cin.getline(employee.name, MAX_NAME_LENGTH);

    cout << "Enter Employee Designation: ";
    cin.getline(employee.designation, MAX_DESIGNATION_LENGTH);

    cout << "Enter Employee Salary: ";
    cin >> employee.salary;

    // Move the file pointer to the end to append the new employee
    file.seekp(0, ios::end);
    file.write((char*)&employee, sizeof(Employee));

    cout << "Employee added successfully." << endl;
}

// Function to delete an employee from the file
void deleteEmployee(fstream& file) {
    int employeeId;
    cout << "Enter Employee ID to delete: ";
    cin >> employeeId;

    Employee employee;
    bool found = false;

    // Read each employee from the file and check if ID matches
    file.seekg(0, ios::beg);
    while (file.read((char*)&employee, sizeof(Employee))) {
        if (employee.id == employeeId) {
            found = true;
            break;
        }
    }

    if (found) {
        // Move the file pointer back to the beginning of the record to delete
        file.seekp(-static_cast<int>(sizeof(Employee)), ios::cur);

        // Overwrite the record with zeros
        Employee emptyEmployee{};
        file.write((char*)&emptyEmployee, sizeof(Employee));

        cout << "Employee deleted successfully." << endl;
    } else {
        cout << "Employee not found." << endl;
    }
}

// Function to display information of a particular employee
void displayEmployee(fstream& file) {
    int employeeId;
    cout << "Enter Employee ID to display: ";
    cin >> employeeId;

    Employee employee;
    bool found = false;

    // Read each employee from the file and check if ID matches
    file.seekg(0, ios::beg);
    while (file.read((char*)&employee, sizeof(Employee))) {
        if (employee.id == employeeId) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Employee ID: " << employee.id << endl;
        cout << "Name: " << employee.name << endl;
        cout << "Designation: " << employee.designation << endl;
        cout << "Salary: " << employee.salary << endl;
    } else {
        cout << "Employee not found." << endl;
    }
}

int main() {
    fstream file("employees.txt", ios::in | ios::out | ios::binary);

    if (!file) {
        cout << "Error opening file. Make sure the file exists and you have the necessary permissions." << endl;
        return 1;
    }

    int choice;

    do {
        cout << "1. Add Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. Display Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(file);
                break;
            case 2:
                deleteEmployee(file);
                break;
            case 3:
                displayEmployee(file);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    file.close();
    return 0;
}
