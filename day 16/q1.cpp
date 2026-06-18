#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;

    vector<int> arr(n - 1);
    cout<<"Enter the elemnts :";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    while (i < arr.size())
    {
        int correct = arr[i] - 1;

        if (arr[i] < n && arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }

    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Missing element: " << i + 1;
            return 0;
        }
    }

    cout << "Missing element: " << n;
}