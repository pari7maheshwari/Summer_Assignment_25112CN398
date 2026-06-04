#include <iostream>
using namespace std;
int main()
{
    int decimal, binary = 0, base = 1;
    cout << "Enter the decimal number : ";
    cin >> decimal;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }
    cout << "The binary is : " << binary;
}