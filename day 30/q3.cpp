#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> employees[i].id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, employees[i].name);

        cout << "Enter Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\n===== EMPLOYEE DETAILS =====\n";

    for (const auto &emp : employees) {
        cout << "\nID     : " << emp.id << endl;
        cout << "Name   : " << emp.name << endl;
        cout << "Salary : " << emp.salary << endl;
    }

    return 0;
}