#include<iostream>
using namespace std;
template <typename T,int size>
void sorting(T (&a)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int i;
    int a[5] = {1,33,22,14,2};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    sorting(a);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }


    char ch[5] = {'Z','Q','a','A','E'};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        printf("%c ",ch[i]);
    }
    sorting(ch);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        printf("%c ",ch[i]);
    }

    float s[5] = {25.65,25.654,21.85,98.6,78.2};
    cout<<"\nOriginal array = ";
    for(i=0;i<5;i++)
    {
        printf("%f ",s[i]);
    }
    sorting(s);
    cout<<"\nSorted array = ";
    for(i=0;i<5;i++)
    {
        printf("%f ",s[i]);
    }
    return 0;
}