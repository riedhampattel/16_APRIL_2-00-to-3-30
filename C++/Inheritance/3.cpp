#include<iostream>
using namespace std;
//multiple inheritance
class Father
{
    public :
        void display1()
        {
            cout<<"\nHello from father class";
        }
};
class Mother
{
    public :
        void display2()
        {
            cout<<"\nHello from Mother class";
        }
};
class Child : public Father,public Mother
{

};
int main()
{
    Child c;
    c.display1();
    c.display2();
    return 0;
}