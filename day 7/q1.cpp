#include <iostream>
using namespace std;
int factorial(int n)
{
    if((n==0) || (n==1))
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int x,ans;
    cout<<"Enter the number : ";
    cin>>x;
    ans=factorial(x);
    cout<<"The factorial is : "<<ans;
}