#include<iostream>
using namespace std;
class Math
{
    public :
        int add(int n1,int n2);
        int sub(int n1,int n2);
};
int Math :: add(int n1,int n2)
{
    cout<<"\nThe addition is = "<<n1+n2;
}
int Math :: sub(int n1,int n2)
{
    cout<<"\nThe subtraction is = "<<n1-n2;
}
int main()
{
    Math m;
    m.add(10,20);
    m.sub(30,40);
    return 0;
}