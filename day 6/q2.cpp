#include <iostream>
using namespace std;
int main()
{
    int binary, decimal = 0, base = 1;
    cout << "Enter the binary number : ";
    cin >> binary;
    while (binary > 0)
    {
        int rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base = base * 2;
    }
    cout << "The decimal is : " << decimal;
}