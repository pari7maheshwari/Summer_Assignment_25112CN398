#include <iostream>
#include <vector>   
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element :";
    cin>>target;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==target)
        {
            cout<<"Element found at index : "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}