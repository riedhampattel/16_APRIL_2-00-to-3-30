//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end,i,j;
    cout<<"Enter the starting number = ";
    cin>>start;//5
    cout<<"Enter the ending number = ";
    cin>>end;//15
    for(i=start;i<=end;i++)
    {
        int num = i;
        int temp = i;
        int digit=0,sum=0;
        while(num!=0)
        {
            num = num/10;
            digit++;
        }
        for(j=1;j<=digit;j++)
        {
            int rem = temp%10;
            int power = pow(rem,digit);
            sum = sum + power;
            temp = temp/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}