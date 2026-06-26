#include <iostream>
using namespace std;

int main() {
    string employeeName;
    float basicSalary, hra, da, grossSalary;

    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;

    grossSalary = basicSalary + hra + da;

    cout << "\n----- Salary Details -----\n";
    cout << "Employee Name : " << employeeName << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Gross Salary  : " << grossSalary << endl;

    return 0;
}