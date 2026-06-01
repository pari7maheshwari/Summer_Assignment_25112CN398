#include <iostream>
using namespace std;
int main()
{
    int lower, upper, count = 0;
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;
    cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++)
    {
        if (i <= 1)
            continue;
        count = 0;
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
            cout << i << " ";
        }
    }
    return 0;
}