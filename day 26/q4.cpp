#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== C++ Quiz =====\n\n";

    cout << "1. Who developed C++?\n";
    cout << "1. Dennis Ritchie\n";
    cout << "2. Bjarne Stroustrup\n";
    cout << "3. James Gosling\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. Which symbol is used for comments in C++?\n";
    cout << "1. //\n";
    cout << "2. ##\n";
    cout << "3. **\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\n3. Which header file is used for cout?\n";
    cout << "1. stdio.h\n";
    cout << "2. iostream\n";
    cout << "3. string\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nYour Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}