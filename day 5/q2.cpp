#include <iostream>
using namespace std;
int main()
{
    int n, num, d, sum = 0, fact;
    cout << "Enter the number : ";
    cin >> n;
    num = n;
    while (n != 0)
    {
        d = n % 10;
        fact = 1;
        for (int i = 1; i <= d; i++)
        {
            fact = fact * i;
        }
        sum += fact;
        n = n / 10;
    }
    if (sum == num)
    {
        cout << "The number is strong number." << endl;
    }
    else
    {
        cout << "The number is not strong number." << endl;
    }
}