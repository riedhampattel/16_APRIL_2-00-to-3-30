#include<iostream>
using namespace std;
class Demo
{
    private ://within the class
        int x = 10;
        string s1 = "Private";
    protected ://within the class or in derived class
        int y = 20;
        string s2 = "Protected";
    public : //within the file
        int z = 30;
        string s3 = "Public";
        void display()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of s1 = "<<s1;
        }
};
class Derive : public Demo
{
    public :
        void display()
        {
            cout<<"\nValue of y = "<<y;
            cout<<"\nValue of s2 = "<<s2;
        }
};
int main()
{
    Demo d;
    d.display();
    Derive dr;
    dr.display();

    cout<<"\nValue of z = "<<d.z;
    cout<<"\nValue of s3 = "<<d.s3;
    return 0;
}