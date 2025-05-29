//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i,element,index;
    cout<<"Enter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<"Enter the element = ";
    cin>>element;
    int flag=0;
    for(i=0;i<size;i++)
    {
        if(element==a[i])
        {
            flag=1;
            index = i;
        }
    }
    if(flag==1)
    {
        cout<<"\nElement is present on index number "<<index;
    }
    else
    {
        cout<<"\nElement is not present in an array";
    }
    return 0;
}