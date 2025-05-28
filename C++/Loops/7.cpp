/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cout<<"Enter odd row numbers only = ";
    cin>>row;
    int nrow = (row/2) + 1;
    int spc = nrow-1;
    for(i=1;i<=nrow;i++)
    {
        for(j=1;j<=spc;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        spc--;
    }   
    int rrow = row - nrow;
    int star = rrow;
    for(i=1;i<=rrow;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=star;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        star--;
    }
    return 0;
}