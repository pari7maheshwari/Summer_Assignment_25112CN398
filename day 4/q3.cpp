#include <iostream>
using namespace std;

int main()
{
    int n, n1, num, d, sum = 0, c = 0;
    cout << "Enter the number : ";
    cin >> n;
    n1 = n;
    num = n;
    while (num > 0)
    {
        c++;
        num = num / 10;
    }

    while (n > 0)
    {
        d = n % 10;

        int power = 1;
        for (int i = 0; i < c; i++)
        {
            power = power * d;
        }

        sum = sum + power;
        n = n / 10;
    }

    if (sum == n1)
    {
        cout << n1 << " is an Armstrong number.";
    }
    else
    {
        cout << n1 << " is not an Armstrong number.";
    }

    return 0;
}