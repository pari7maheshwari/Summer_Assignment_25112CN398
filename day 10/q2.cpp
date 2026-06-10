#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}