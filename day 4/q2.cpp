#include <iostream>
using namespace std;
int main()
{
    int n,sum,fibo=1,temp=0;
    cout<<"Enter the term : ";
    cin>>n; 
    for(int i=1;i<n;i++)
    {
        sum=temp+fibo;
        temp=fibo;
        fibo=sum;
    }
    cout<<"The "<<n<<"th term of the Fibonacci series is : "<<temp;
    return 0;
}