#include<iostream>
using namespace std;
template <typename T>
void swapping(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=10,b=20;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b;

    char ch1 = 'A',ch2 = 'B';
    cout<<"\nValue of ch1 before swapping = "<<ch1;
    cout<<"\nValue of ch2 before swapping = "<<ch2;
    swapping(ch1,ch2);
    cout<<"\nValue of ch1 after swapping = "<<ch1;
    cout<<"\nValue of ch2 after swapping = "<<ch2;

    string s1 = "Hello",s2 = "Bye";
    cout<<"\nValue of s1 before swapping = "<<s1;
    cout<<"\nValue of s2 before swapping = "<<s2;
    swapping(s1,s2);
    cout<<"\nValue of s1 after swapping = "<<s1;
    cout<<"\nValue of s2 after swapping = "<<s2;
    return 0;
}