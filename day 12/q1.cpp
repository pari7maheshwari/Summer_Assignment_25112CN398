#include <iostream> 
using namespace std;
int palindrome(int n)
{
    int rev=0;
    while(n>0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    int rev=palindrome(n);
    if(rev==n)
    {
        cout<<"the number is palindrome"<<endl;
    }
    else
    {
        cout<<"the number is not palindrome"<<endl;
    }
}