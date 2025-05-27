#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    if(num<0)
    {
        cout<<num<<" is a negative value";
    }
    else if(num>0)
    {
        cout<<num<<" is a positive value";
    }
    else
    {
        cout<<num<<" is a neutral value";
    }
    return 0;
}