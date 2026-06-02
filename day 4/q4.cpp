#include <iostream>
using namespace std;
int main()
{
    int lower,upper,n,n1,d,sum=0,c=0;
    cout<<"Enter lower limit : ";   
    cin>>lower;
    cout<<"Enter upper limit : ";   
    cin>>upper;
    cout<<"Armstrong numbers between "<<lower<<" and "<<upper<<" are : ";
    for(int i=lower;i<=upper;i++)
    {
        n=i;
        n1=n;
        while(n>0)
        {
            c++;
            n=n/10;
        }
        while(n1>0)
        {
            d=n1%10;
            int power=1;
            for(int j=0;j<c;j++)
            {
                power=power*d;
            }
            sum=sum+power;
            n1=n1/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
        c=0;
        sum=0;
    }
}