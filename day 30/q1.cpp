#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> students[i].rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, students[i].name);

        cout << "Enter Marks: ";
        cin >> students[i].marks;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for (const auto &s : students) {
        cout << "\nRoll No : " << s.rollNo << endl;
        cout << "Name    : " << s.name << endl;
        cout << "Marks   : " << s.marks << endl;
    }

    return 0;
}