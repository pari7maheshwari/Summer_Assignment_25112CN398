#include <iostream>
using namespace std;
int main()
{
    int decimal, binary = 0, base = 1,count=0;
    cout << "Enter the number : ";
    cin >> decimal;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        if(rem==1)
        {
            count++;
        }
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }
    cout<<"The number of set bits is : "<<count;

}