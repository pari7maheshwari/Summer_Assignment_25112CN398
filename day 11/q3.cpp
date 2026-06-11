#include <iostream>
using namespace std;
int prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int ans=prime(n);
    if(ans==1)
    {
        cout<<"The number is prime."<<endl;
    }
    else
    {
        cout<<"The number is not prime."<<endl;
    }
}