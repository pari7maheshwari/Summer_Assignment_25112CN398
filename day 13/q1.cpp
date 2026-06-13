#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in the array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are :"<<endl;
    for(int j=0;j<arr.size();j++)
    {
        cout<<arr[j]<<endl;
    }
}