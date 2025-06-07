#include<iostream>
using namespace std;
class GrandParent
{
    public :
        GrandParent()
        {
            cout<<"\nGrandparent class constructor called";
        }
        void display()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Father : virtual public GrandParent
{
    public :
        Father()
        {
            cout<<"\nFather class constructor called";
        }
};
class Mother : virtual public GrandParent
{
    public :
        Mother()
        {
            cout<<"\nMother class constructor called";
        }
};
class Child : public Father, public Mother
{
    public :
        Child()
        {
            cout<<"\nChild class constructor called";
        }
};
int main()
{
    // GrandParent gp;
    // Father f;
    // Mother m;
    Child c;
    c.display();
    return 0;
}