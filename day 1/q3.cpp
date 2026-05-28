#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "ENTER NUMBER : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is : " << fact;
}