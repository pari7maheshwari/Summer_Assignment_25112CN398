#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING MENU =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << str.length() << endl;
                break;

            case 2: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;
            }

            case 3: {
                string temp = str;

                for (char &ch : temp)
                    ch = toupper(ch);

                cout << "Uppercase String: " << temp << endl;
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}