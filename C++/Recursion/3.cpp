#include<iostream>
using namespace std;

int sum(int n)
{
    if(n!=0)
    {
        return n + sum(n-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;//3
    int answer = sum(num);
    cout<<"\nThe addition is = "<<answer;
    return 0;
}