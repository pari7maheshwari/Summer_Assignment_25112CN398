#include<iostream>
#include<vector>
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
    int k;
    cout<<"Enter the no. by which array has to be right rotated :";
    cin>>k;
    k = k % n; // Handle cases where k >= n
    vector<int> rotated(n);
    for(int i=0; i<n; i++)
    {
        rotated[i] = arr[(i-k+n)%n];
    }
    cout<<"The right rotated array is :";
    for(int i=0; i<n; i++)
    {
        cout<<rotated[i]<<" ";
    }
    return 0;
}