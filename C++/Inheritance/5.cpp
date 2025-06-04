#include<iostream>
using namespace std;
class Parent
{
    public :
        void display1()
        {
            cout<<"\nHello from Parent class";
        }
};
class Brother : public Parent
{
    public :
        void display2()
        {
            cout<<"\nHello from Brother class";
        }
};
class Sister : public Parent
{
    public :
        void display3()
        {
            cout<<"\nHello from Sister class";
        }
};
class Child : public Brother
{

};
class Nephew : public Sister
{

};
int main()
{
    Child c;
    c.display1();
    c.display2();
    Nephew n;
    n.display1();
    n.display3();
    return 0;
}