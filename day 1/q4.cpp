#include <iostream>
using namespace std;
int main()
{
    int n, digit, countDigit = 0;
    cout << "ENTER NUMBER :";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        countDigit++;
        n = n / 10;
    }
    cout << "The number of digits present are : " << countDigit;
}