#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str) {
        if (ch != ' ')
            freq[ch]++;
    }

    cout << "\nCharacter Frequencies:\n";

    for (auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}