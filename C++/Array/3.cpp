//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i,index;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"\nEnter the index number = ";
    cin>>index;
    if(index>=0 && index<size)
    {
        cout<<"\n"<<a[index]<<" is present on index number "<<index;
    }
    else
    {
        cout<<"\nIndex number is not present in an array";
    }
    return 0;
}