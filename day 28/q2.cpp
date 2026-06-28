#include <iostream>
using namespace std;

int main() {
    string name;
    int accountNo;
    double balance, amount;
    int choice;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accountNo;

    cout << "Enter initial balance: ";
    cin >> balance;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully.\n";
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                } else {
                    cout << "Insufficient balance.\n";
                }
                break;

            case 4:
                cout << "Thank you for banking with us.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}