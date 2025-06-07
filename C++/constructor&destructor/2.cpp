#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)//parameterized constructor
        {
            id = i;
            name = n;
        }
        Demo()//default constructor
        {

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
    d1.display();
    Demo d2;
    Demo d3(102,"Rahul");
    d2.display();
    d3.display();
    return 0;
}