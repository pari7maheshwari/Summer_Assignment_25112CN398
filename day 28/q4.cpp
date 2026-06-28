#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;
    cin.ignore();

    vector<Contact> contacts(n);

    for (int i = 0; i < n; i++) {
        cout << "\nContact " << i + 1 << endl;

        cout << "Enter name: ";
        getline(cin, contacts[i].name);

        cout << "Enter phone number: ";
        getline(cin, contacts[i].phone);
    }

    cout << "\n===== Contact List =====\n";

    for (const auto &contact : contacts) {
        cout << "\nName  : " << contact.name << endl;
        cout << "Phone : " << contact.phone << endl;
    }

    return 0;
}