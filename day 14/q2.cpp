#include <iostream>
#include <vector>   
#include <climits>
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
    int count=0,target;
    cout<<"Enter the target element :";
    cin>>target;
     for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
    }
    cout<<"The frequency of the target element is "<<count<<endl;
}