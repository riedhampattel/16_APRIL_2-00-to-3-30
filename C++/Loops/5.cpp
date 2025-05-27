//Write a program in C++ to find the sum of the digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"Enter the value of num = ";
    cin>>num;//12
    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"\nThe addition of digits = "<<sum;
    return 0;
}