#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> employees[i].id;

        cin.ignore();

        cout << "Name: ";
        getline(cin, employees[i].name);

        cout << "Department: ";
        getline(cin, employees[i].department);
    }

    cout << "\n----- Employee Details -----\n";

    for (const auto &e : employees) {
        cout << "\nID: " << e.id;
        cout << "\nName: " << e.name;
        cout << "\nDepartment: " << e.department << endl;
    }

    return 0;
}