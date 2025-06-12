#include<iostream>
using namespace std;
class Demo
{
    private :
        int x = 10;
        string s = "Hello";
    public :
        friend void display(Demo &obj);
};
void display(Demo &obj)
{
    cout<<"\nValue of x = "<<obj.x;
    cout<<"\nValue of s = "<<obj.s;
}
int main()
{
    Demo d;
    display(d);
    return 0;
}