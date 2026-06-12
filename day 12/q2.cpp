#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int n)
{
    int sum = 0, count = 0;
    int temp = n;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    while (temp > 0)
    {
        int d = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++)
        {
            power = power * d;
        }

        sum = sum + power;
        temp = temp / 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int ans = armstrong(n);
    if (ans == n)
    {
        cout << "the number is armstrong" << endl;
    }
    else
    {
        cout << "the number is not armstrong" << endl;
    }
}