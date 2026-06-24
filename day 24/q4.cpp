#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}