#include<iostream>
using namespace std;
class Demo
{
    public :
        Demo()//default constructor
        {
            cout<<"\nDemo class constructor";
        }
        ~Demo()
        {
            cout<<"\nDemo class Destructor";
        }
};
int main()
{
    Demo d1,d2,d3;
    return 0;
}