#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    unordered_map<int, int> freq;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int num=0; num<arr.size(); num++) {
        freq[arr[num]]++;
    }

    cout << "Duplicate elements are: ";

    for (auto it : freq) {
        if (it.second > 1) {
            cout << it.first << " ";
        }
    }

    return 0;
}