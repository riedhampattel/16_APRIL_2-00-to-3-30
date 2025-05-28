/*
Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345
*/
#include<iostream>
using namespace std;
int main()
{
    int term,num=1,sum=0,i;
    cout<<"Enter the terms = ";
    cin>>term;//3
    for(i=1;i<=term;i++)
    {
        sum = sum + num;
        num = (num*10) + 1;
    }
    cout<<"\nThe addition is = "<<sum;
    return 0;
}