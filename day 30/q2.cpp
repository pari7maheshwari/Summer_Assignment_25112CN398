#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    bool issued;
};

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    vector<Book> books(n);

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> books[i].id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, books[i].title);

        books[i].issued = false;
    }

    cout << "\n===== LIBRARY BOOKS =====\n";

    for (const auto &book : books) {
        cout << "\nBook ID : " << book.id << endl;
        cout << "Title   : " << book.title << endl;
        cout << "Status  : ";

        if (book.issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << endl;
    }

    return 0;
}