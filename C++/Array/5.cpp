//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,element,index,i;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the elements in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the element = ";
    cin>>element;
    cout<<"Enter the index number = ";
    cin>>index;
    if(index>=0 && index<=size)
    {
        for(i=size-1;i>=index;i--)
        {
            a[i+1] = a[i];
        }
        a[index] = element;
        cout<<"\nArray after insertion = ";
        for(i=0;i<=size;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        cout<<"\nIndex number is not present";
    }
    return 0;
}