#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)
        {
            cout<<"\nParameterized constructor";
            id = i;
            name = n;
        }
        Demo(Demo &obj)
        {
            cout<<"\nCopy constructor";
            id = obj.id;
            name = obj.name;
        }
        Demo()
        {
            cout<<"\nDefault constructor";
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Demo d1(101,"Rohan");
    Demo d2(d1);
    d1.display();
    d2.display();
    return 0;
}