#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER WHOSE TABLE IS TO BE PRINTED :";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << i * n << endl;
    }
}