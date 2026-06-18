#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s;

    for(int x : arr)
    {
        s.insert(x);
    }

    cout << "Array after removing duplicates: ";

    for(int x : s)
    {
        cout << x << " ";
    }

    return 0;
}