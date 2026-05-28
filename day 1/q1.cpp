#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "ENTER NUMBER : ";
    cin >> n;

    for (int i = 1; i<=n; i++)
    {
        sum += i;
    }
    cout<<"Sum of first "<<n<<" natural number is : "<<sum;
}
