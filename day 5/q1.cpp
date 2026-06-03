#include <iostream>
using namespace std;
int main()
{
    int n,num,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    num=n;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum == num)
    {
        cout<<"The number is perfect number."<<endl;
    }
    else
    {
        cout<<"The number is not perfect number."<<endl;
    }
}