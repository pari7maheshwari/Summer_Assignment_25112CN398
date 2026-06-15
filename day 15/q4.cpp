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
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start=0,end=arr.size()-1,i=0;
    while(start<=end)
    {
        if(arr[i]==0)
        {
            swap(arr[end],arr[i]);
            end--;
        }
        else
        {
            i++;
            start++;
        }
    }
    cout<<"The array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}