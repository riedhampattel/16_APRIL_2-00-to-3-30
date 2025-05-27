//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,GCD;
    cout<<"Enter the value in n1 = ";
    cin>>n1;
    cout<<"Enter the value in n2 = ";
    cin>>n2;

    int count = n1<n2?n1:n2;
    for(i=1;i<=count;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            GCD = i;
        }
    }
    cout<<"\nGCD of "<<n1<<" and "<<n2<<" is = "<<GCD;
    return 0;
}