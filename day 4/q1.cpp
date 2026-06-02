#include <iostream>
using namespace std;    
int main()
{
    int n,fibo=1,temp=0,sum;
    cout<<"Enter the number of digits : ";
    cin>>n;
    cout<<"Fibonacci series : "<<temp;
    for(int i=1;i<n;i++)
    {
        cout<<" "<<fibo;
        sum=temp+fibo;
        temp=fibo;
        fibo=sum;
    }
    return 0;
}