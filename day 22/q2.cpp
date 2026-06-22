#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int words = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            words++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}