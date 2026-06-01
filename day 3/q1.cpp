#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "Not Prime" << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << "Prime" << endl;
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) // optimized loop to check for factors only up to n/2
    {
        if (n % i == 0) // if n is divisible by any number between 2 and n/2, it is not prime
        {
            count++;
            break;
        }
    }
    if (count == 0) // if count is still 0, it means n is prime
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}