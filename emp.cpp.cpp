#include<iostream>
#include<string>
using namespace std;

// Define Employee structure
struct Employee {
    string name;
    int age;
    string gender;
    string position;
    string department;
};

// Define structure for Attendance
struct Attendance {
    string date;
    string status; // "Present" or "Absent"
};

// Function to display list of employees
void displayEmployees(Employee employees[], int totalEmployees) {
    // Loop through employees array and display information
    for(int i = 0; i < totalEmployees; i++) {
        cout << "Employee Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << " Gender: " << employees[i].gender << endl;
        cout << "Position: " << employees[i].position << " Department: " << employees[i].department << endl;
        cout << endl;
    }
}

// Function to search for an employee by name
int searchEmployeeByName(Employee employees[], int totalEmployees) {
    string target;
    cout << "Enter the name of the employee: ";
    cin >> target;

    for(int i = 0; i < totalEmployees; i++) {
        if(employees[i].name == target) {
            return i; // Return index of found employee
        }
    }
    return -1; // Return -1 if employee not found
}

// Function to update employee information
void updateEmployeeInfo(Employee employees[], int totalEmployees) {
    int index;
    cout << "Enter the index of the employee you want to update: ";
    cin >> index;

    if(index >= 0 && index < totalEmployees) {
        cout << "Update Employee Info: " << endl;
        cout << "Name: ";
        cin >> employees[index].name;
        cout << "Age: ";
        cin >> employees[index].age;
        cout << "Gender: ";
        cin >> employees[index].gender;
        cout << "Position: ";
        cin >> employees[index].position;
        cout << "Department: ";
        cin >> employees[index].department;
    }
    else {
        cout << "No such employee found in the system." << endl;
    }
}

// Function to mark attendance for employees
void markAttendance(Attendance attendance[], int& totalAttendance, string date) {
    for(int i = 0; i < totalEmployees; i++) 
	{
        cout << "Is " << employees[i].name << " present? (y/n): ";
        char choice;
        cin >> choice;

        if(tolower(choice) == 'y') {
            attendance[totalAttendance].date = date;
            attendance[totalAttendance].status = "Present";
        }
        else {
            attendance[totalAttendance].date = date;
            attendance[totalAttendance].status = "Absent";
        }
        totalAttendance++;
    }
}

// Function to display attendance records
void displayAttendance(Attendance attendance[], int totalAttendance) {
    cout << "Attendance Records:" << endl;
    for(int i = 0; i < totalAttendance; i++) {
        cout << "Date: " << attendance[i].date << " - Status: " << attendance[i].status << endl;
    }
}

// Main function
int main() {
    // Define arrays to store employees and attendance records
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int totalEmployees = 0;

    const int MAX_ATTENDANCE = 1000;
    Attendance attendance[MAX_ATTENDANCE];
    int totalAttendance = 0;

    int choice;

    while(true) {
        // Display menu
        cout << "Employee Management System" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Update Employee Information" << endl;
        cout << "3. Display List of Employees" << endl;
        cout << "4. Search Employee by Name" << endl;
        cout << "5. Mark Attendance" << endl;
        cout << "6. Display Attendance Records" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                 Add New Employee;
                 Implementation goes here;
                break;
            case 2:
                 Update Employee Information;
                 Implementation goes here;
                break;
            case 3:
                 Display List of Employees;
                 Implementation goes here;
                break;
            case 4:
                 Search Employee by Name;
                 Implementation goes here;
                break;
            case 5:
                 Mark Attendance;
                 Implementation goes here;
                break;
            case 6:
                 Display Attendance Records;
                 Implementation goes here;
                break;
            case 7:
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

