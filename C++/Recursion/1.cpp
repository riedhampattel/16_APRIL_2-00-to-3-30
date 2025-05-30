#include<iostream>
using namespace std;

void display(int n)
{
    if(n!=0)
    {
        cout<<"\nHello";
        cout<<"\nBye";
        display(n-1);
    }
}

int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;//3
    display(num);
    return 0;
}