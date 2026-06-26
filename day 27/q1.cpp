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

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> students[i].rollNo;

        cin.ignore();

        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\n----- Student Records -----\n";

    for (const auto &s : students) {
        cout << "\nRoll No: " << s.rollNo;
        cout << "\nName: " << s.name;
        cout << "\nMarks: " << s.marks << endl;
    }

    return 0;
}