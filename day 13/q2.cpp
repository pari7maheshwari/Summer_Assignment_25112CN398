#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the no. of elements in the array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int avg=sum/n;
    cout<<"The sum of the elements in the array is :"<<sum<<endl;
    cout<<"The average of the elements in the array is :"<<avg<<endl;
}