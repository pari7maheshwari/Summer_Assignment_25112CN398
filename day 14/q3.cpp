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
    int maxElement=arr[0];
    int secondMaxElement=INT_MIN;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>maxElement)
        {
            secondMaxElement=maxElement;
            maxElement=arr[i];
        }
    }
    cout<<"The second largest element in the array is : "<<secondMaxElement<<endl;
}