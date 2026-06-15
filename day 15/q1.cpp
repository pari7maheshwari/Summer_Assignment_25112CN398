#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements :";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    cout<<"The reversed array is :";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}