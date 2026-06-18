#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> arr1(n1);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> arr2(n2);

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    set<int> s1, intersectionSet;

    for(int x : arr1)
    {
        s1.insert(x);
    }

    for(int x : arr2)
    {
        if(s1.find(x) != s1.end())
        {
            intersectionSet.insert(x);
        }
    }

    cout << "Intersection: ";

    for(int x : intersectionSet)
    {
        cout << x << " ";
    }

    return 0;
}