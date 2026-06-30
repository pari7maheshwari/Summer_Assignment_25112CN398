#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

void addStudents(vector<Student>& students, int n) {
    for (int i = 0; i < n; i++) {
        Student s;

        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> s.rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s.name);

        cout << "Enter Marks: ";
        cin >> s.marks;

        students.push_back(s);
    }
}

void displayStudents(const vector<Student>& students) {
    cout << "\n===== STUDENT DETAILS =====\n";

    for (const auto &s : students) {
        cout << "\nRoll No : " << s.rollNo << endl;
        cout << "Name    : " << s.name << endl;
        cout << "Marks   : " << s.marks << endl;
    }
}

int main() {
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    addStudents(students, n);

    displayStudents(students);

    return 0;
}