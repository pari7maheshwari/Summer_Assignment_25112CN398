#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    int n,evenCount=0,oddCount=0;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"The number of even elements in the array is : "<<evenCount<<endl;
    cout<<"The number of odd elements in the array is : "<<oddCount<<endl;
}