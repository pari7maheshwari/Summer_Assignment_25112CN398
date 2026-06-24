#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word = "", longest = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    str += ' ';

    for (char ch : str) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length();

    return 0;
}