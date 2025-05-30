#include<iostream>
using namespace std;

int sum(int a[],int size)
{
    if(size!=0)
    {
        return a[size-1] + sum(a,size-1);
    }    
    else
    {
        return 0;
    }
}

int main()
{
    int a[100],size,i;
    cout<<"Enter the size of an array = ";
    cin>>size;//5
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    int answer = sum(a,size);
    cout<<"\nThe addition is = "<<answer;
    return 0;
}