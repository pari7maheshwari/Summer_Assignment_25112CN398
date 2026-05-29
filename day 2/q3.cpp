#include <iostream>
using namespace std;
int main()
{
    int n,d,product=1;
    cout<<"Enter number : ";
    cin>>n;
    while(n!=0)
    {
        d = n % 10;
        product*=d;
        n=n/10;
    }
    cout<<"Product of digits is: "<<product<<endl;
    return 0;
}