#include <iostream>
#include <cmath>
using namespace std;
int reverse(int n,int rev=0)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        int digit = n % 10;
        return reverse(n / 10, rev * 10 + digit);
    }
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=reverse(n);
    cout<<"The reverse of the number is : "<<ans;
}