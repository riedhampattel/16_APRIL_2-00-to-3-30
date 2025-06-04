#include<iostream>
using namespace std;
//multilevel inheritance
class GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display3()
        {
            cout<<"\nHello from Child class";
        }
};
class GrandChild : public Child
{

};
int main()
{
    GrandChild gc;
    gc.display1();
    gc.display2();
    gc.display3();

    Child c;
    c.display1();
    c.display2();
    c.display3();

    Parent p;
    p.display1();
    p.display2();

    GrandParent gp;
    gp.display1();
    return 0;
}