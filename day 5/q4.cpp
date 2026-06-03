#include <iostream>
using namespace std;
int main()
{
    int n, primefactor = 0;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
            {
                primefactor = i;
            }
        }
    }
    cout << "The largest prime factor of " << n << " is " << primefactor;
}