#include <iostream>
#include <climits>
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
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"The maximum element in the array is : "<<max<<endl;
    cout<<"The minimum element in the array is : "<<min<<endl;
}