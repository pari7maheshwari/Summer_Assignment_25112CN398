#include <iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>n;
    int result = 1;
    for(int i=0; i<n; i++)
    {
        result *= x;
    }
    cout<<"The result is : "<<result;
}