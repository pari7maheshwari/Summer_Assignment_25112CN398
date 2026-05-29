#include <iostream>
using namespace std;
int main()
{
    int n, num, d, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    while (num != 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    if (rev == n)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}