#include <iostream>
#include <vector>
using namespace std;

struct Book {
    int bookId;
    string title;
    string author;
};

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    vector<Book> books(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> books[i].bookId;
        cin.ignore();

        cout << "Book Title: ";
        getline(cin, books[i].title);

        cout << "Author Name: ";
        getline(cin, books[i].author);
    }

    cout << "\n===== Library Records =====\n";

    for (const auto &book : books) {
        cout << "\nBook ID : " << book.bookId << endl;
        cout << "Title   : " << book.title << endl;
        cout << "Author  : " << book.author << endl;
    }

    return 0;
}