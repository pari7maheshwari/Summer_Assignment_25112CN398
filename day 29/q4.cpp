#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    int n;

    cout << "Enter number of items: ";
    cin >> n;
    cin.ignore();

    vector<Item> inventory(n);

    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;

        cout << "Enter Item ID: ";
        cin >> inventory[i].id;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, inventory[i].name);

        cout << "Enter Quantity: ";
        cin >> inventory[i].quantity;
        cin.ignore();
    }

    cout << "\n===== INVENTORY DETAILS =====\n";

    for (const auto &item : inventory) {
        cout << "\nItem ID : " << item.id << endl;
        cout << "Name    : " << item.name << endl;
        cout << "Quantity: " << item.quantity << endl;
    }

    return 0;
}