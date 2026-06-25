#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    unordered_set<char> s1;

    for (char ch : str1) {
        s1.insert(ch);
    }

    cout << "Common characters: ";

    unordered_set<char> printed;

    for (char ch : str2) {
        if (s1.count(ch) && !printed.count(ch)) {
            cout << ch << " ";
            printed.insert(ch);
        }
    }

    return 0;
}